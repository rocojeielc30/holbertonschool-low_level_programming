# Green Efficiency Analysis  

## Measurement Methodology
The measurement methodology that was used for this experiment was through the use of the clock() function, which returns the amount of processor time consumed by a program, from the moment it began to its end. 

This was done by creating three values (start, end, total) with the data type of clock_t. Along with this, the total (end minus start) was divided with the function CLOCKS_PER_SEC, to convert the time from ticks into readable seconds that can be understood. 

Each function within the main (BUILD, PROCESS and REDUCE) and main itself were measured, allowing observation of how long it took each stage along with the function as a whole. From here, we can generate observations and make comparisons that will be explained further in the other sections of the markdown.

## Observed Performance Differences 


## Relation Between Runtime and Energy Consumption

## Limitations of the Experiment

## Practical Engineering Takeaway 