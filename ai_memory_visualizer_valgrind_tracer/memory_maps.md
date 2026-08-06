# Memory Maps Analysis of stack_example.c 

# Step 0: - main() calls walk_stack(0, 3)
- main's own frame exists but has no locals worth tracking.
- calls into walk_stack with depth=0, max_depth=3.

# Step 1: walk_stack(depth=0) frame created
- marker created at 0x7ffcc7125eb4, value 0 (= depth*10).
- stays alive until this call to walk_stack returns (Step 14).
- no heap activity 
- no pointers/aliases yet 
- calls dump_frame("enter, 0)

# Step 2: dump_frame("enter", 0) frame created
- local_int created at 0x7ffcc7125e64, value 100.
- local_buf created at 0x7ffcc7125e70, value "A".
- p_local created, value 0x7ffcc7125e64 — aliases local_int.
- This is the only pointer in the whole program; it never leaves this call (not returned, stored, or passed anywhere).
- All three variables are born here and die the instant this call returns — i.e. at the end of this step.
- Prints, then returns — frame and all three variables destroyed.
- Back in walk_stack(depth=0): marker (0x7ffcc7125eb4, value 0) is still alive and prints correctly, since its frame was never touched.


# Step 3: walk_stack(depth=0) recurses: calls walk_stack(1, 3)
- since depth(0) < max_depth(3), a new, deeper frame is pushed.
- the address is lower than depth 0's frame — the stack grows downward.
- marker created at 0x7ffcc7125e84, value 10
- stays alive until this call returns (Step 12).
- calls dump_frame("enter", 1).


# Step 4: dump_frame("enter", 1) frame created
- local_int at 0x7ffcc7125e34, value 101.
- local_buf at 0x7ffcc7125e40, value "B".
- p_local = 0x7ffcc7125e34 — aliases local_int.
- prints, returns, frame destroyed.
- marker at depth 1 (0x7ffcc7125e84, value 10) remains alive underneath, untouched.

# Step 5: walk_stack(depth=1) recurses: calls
- marker created at 0x7ffcc7125e54, value 20.
- stays alive until this call returns (Step 10).
- calls dump_frame("enter", 2).

# Step 6: dump_frame("enter", 2) frame created
- local_int at 0x7ffcc7125e04, value 102.
- local_buf at 0x7ffcc7125e10, value "C".
- p_local = 0x7ffcc7125e04 — aliases local_int.
- prints, returns, frame destroyed.

# Step 7: walk_stack(depth=2) recurses: calls walk_stack(3, 3)
- marker created at 0x7ffcc7125e24, value 30.
- stays alive until this call returns (Step 9).
- calls dump_frame("enter", 3).

# Step 8: dump_frame("enter", 3) frame created — deepest point
- local_int at 0x7ffcc7125dd4, value 103.
- local_buf at 0x7ffcc7125de0, value "D".
- p_local = 0x7ffcc7125dd4 — aliases local_int.
- Prints, returns, frame destroyed.
- depth(3) < max_depth(3) is now false, so walk_stack(depth=3) does not recurse further — this is the base case where recursion stops.
- walk_stack(depth=3) immediately calls dump_frame("exit", 3).

# Step 9: dump_frame("exit", 3) frame created — reuses the same address as Step 8
- local_int at 0x7ffcc7125dd4, value 103.
- local_buf at 0x7ffcc7125de0, value "D".
- p_local = 0x7ffcc7125dd4.
- these are not the same variables from Step 8 — that call already ended and its variables already died. This is a brand-new call that happens to land in the exact same freed slot, since nothing else used that stack space in between. It only looks like the old data survived.
- walk_stack(depth=3) now returns.
- Its marker (0x7ffcc7125e24, value 30) dies here — end of its lifetime, started in Step 7.

# Step 10: Back in walk_stack(depth=2), calls dump_frame("exit", 2)
- Reuses the address from Step 6 (0x7ffcc7125e04) — same "looks unchanged but is actually a new call" situation as Step 9.
- walk_stack(depth=2) returns.
- Its marker (0x7ffcc7125e54, value 20) dies — end of its lifetime, started in Step 5.

# Step 11: Back in walk_stack(depth=1), calls dump_frame("exit", 1)
- Reuses the address from Step 4 (0x7ffcc7125e34).
- walk_stack(depth=1) returns.
- Its marker (0x7ffcc7125e84, value 10) dies — end of its lifetime, started in Step 3.

# Step 12 — Back in walk_stack(depth=0), calls dump_frame("exit", 0)
- Reuses the address from Step 2 (0x7ffcc7125e64).
- walk_stack(depth=0) returns.
- Its marker (0x7ffcc7125eb4, value 0) dies — end of its lifetime, started in Step 1.

# Step 13: Control returns to main(), program ends
- All stack memory used by walk_stack/dump_frame is now reclaimed.
- No heap cleanup needed, since none was allocated.