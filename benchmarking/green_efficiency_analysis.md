# Green Efficiency Analysis  

## Measurement Methodology
The measurement methodology that was used for this experiment was through the use of the clock() function, which returns the amount of processor time consumed by a program, from the moment it began to its end. 

Each function within the main (BUILD, PROCESS and REDUCE) and main itself were measured, allowing observation of how long it took each stage along with the function as a whole. From here, we can generate observations and make comparisons that will be explained further in the other sections of the markdown.

## Observed Performance Differences 
Results were as follow (3 compiles were made):

Compile 1:
TOTAL seconds: 0.000419
BUILD_DATA seconds: 0.000216
PROCESS seconds: 0.000118
REDUCE seconds: 0.000082

Compile 2:
TOTAL seconds: 0.000597
BUILD_DATA seconds: 0.000310
PROCESS seconds: 0.000164
REDUCE seconds: 0.000116

Compile 3:
TOTAL seconds: 0.000688
BUILD_DATA seconds: 0.000362
PROCESS seconds: 0.000190
REDUCE seconds: 0.000133

Observations:

From the general observations through the 3 compiles that I made, we can see that total time in seconds will of course be the longest measured duration as it is taking into account for all three functions. 

The build section takes the longest in all 3 compiles which makes sense as it is responsible for creating/generating the dataset. 

The process section is in the middle in all 3 compiles, which is responsible for applying the necessary changes to each dataset value. 

Last but not least, the quickest being the reduce section in all 3 compiles which is responsible for summarising all the values into one checksum.

## Relation Between Runtime and Energy Consumption
Using our own results we can conclude that the relation between runtime and energy consumption is, the longer a program takes to run something, it will also most likely use up more energy. Relating back to our observations, we can likely make the case that the building section of the program would have had the highest energy consumption as it took the longest everytime in each instance of compiling. Followed by the processing section and the last being the reduce section. We can assume that reducing the data into a summary, in this case being checksum, does not need as much energy as it does in comparison to generating a dataset or changing the value of a dataset. 

However, this is not always the case and we cannot always use runtime as the metric to see if a program has high energy consumption. Energy consumption itself is influenced by a variety of factors such as background processes, hardware behaviour, CPU workload, etc.

## Limitations of the Experiment
An obvious limitation would be the hardware as someone with different hardware in comparison to me, will most likely not have the same results as me. Older hardware may have a harder time running the program, which in turn would make runtime longer and probably have a higher energy consumption. Background activity is another easy one to explain as at the time of compiling, I was on discord participating in pair programming, had multiple tabs open on Chrome and of course coding/compiling at the same time. My results may have been significantly affected by having these factors running in the background.

The clock() function itself is also not the most accurate in providing a perfect measurement as it is more of an estimate. The function measures the CPU time rather than time elapsed in the real world. This function is also affected by hardware and the size of the program, as it gets much harder to accurately measure programs that are quick to execute as compared to programs that would take longer as it would be easier to differentiate between seconds vs milliseconds for example.

## Practical Engineering Takeaway 
A takeaway from this would be it is important in a general sense to ensure that our programs are optimised because we want it to be able to execute as quick as possible, whilst at the same time, use the least amount of energy. 
