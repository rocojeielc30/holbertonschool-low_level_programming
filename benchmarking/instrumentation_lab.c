#include <stdio.h>
#include <time.h>

#define DATASET_SIZE 50000
#define SEED_VALUE 42u

static int dataset[DATASET_SIZE];
double process_time;
double build_time;
double reduce_time;

static unsigned int next_value(unsigned int *state)
{   
    *state = (*state * 1103515245u) + 12345u;
    return *state;
}

static void build_dataset(void)
{
   
    unsigned int state;
    int i;
    clock_t build_start;
    clock_t build_end;

    state = SEED_VALUE;
    build_start = clock();

    for (i = 0; i < DATASET_SIZE; i++)
        dataset[i] = (int)(next_value(&state) % 100000);

    build_end = clock();
    build_time = (double)(build_end-build_start) / CLOCKS_PER_SEC;
    
}

static void process_dataset(void)
{
    int i;
    int v;
    clock_t process_start;
    clock_t process_end;

    process_start = clock();
    for (i = 0; i < DATASET_SIZE; i++)
    {
        v = dataset[i];
        v = (v * 3) + (v / 7) - (v % 11);
        if (v < 0)
            v = -v;
        dataset[i] = v;
    }
    process_end = clock();
    process_time = (double)(process_end-process_start) / CLOCKS_PER_SEC;
}

static unsigned long reduce_checksum(void)
{
    unsigned long sum;
    int i;
    clock_t reduce_start;
    clock_t reduce_end;

    reduce_start = clock();
    sum = 0;
    for (i = 0; i < DATASET_SIZE; i++)
        sum = (sum * 131ul) + (unsigned long)dataset[i];

    reduce_end = clock();
    reduce_time = (double)(reduce_end-reduce_start) / CLOCKS_PER_SEC;
    return sum;
    
}

int main(void)
{
    unsigned long checksum;
    clock_t start;
    clock_t end;
    double total_time;
   
    /* Students must add clock-based timing and print required lines. */

    start = clock();
    build_dataset();
    process_dataset();
    checksum = reduce_checksum();

    if (checksum == 0ul)
        printf("impossible\n");

    /* Required output (exact format, no extra lines):
     * TOTAL seconds: <float>
     * BUILD_DATA seconds: <float>
     * PROCESS seconds: <float>
     * REDUCE seconds: <float>
     */

    end = clock();

    total_time = (double)(end-start) / CLOCKS_PER_SEC;

    printf("TOTAL seconds: %f\n", total_time);
    printf("BUILD_DATA seconds: %f\n", build_time);
    printf("PROCESS seconds: %f\n", process_time);
    printf("REDUCE seconds: %f\n", reduce_time);

    return 0;
}
