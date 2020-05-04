// DO NOT CHANGE THIS FILE!!!

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "average_buffer.h"

/* Create a buffer of 100 samples (sliding window) that will calculate
 'Average', 'Average-forever', 'Upper Quarter Average' and 'Lower Quarter Average'. (Note: maximum size of buffer can vary)
- Every time a new sample enters the buffer the oldest sample will be overwritten in the buffer (if the buffer is full).
- 'Average' is the average of the 100 samples that are currently
in the buffer.
- 'Average-forever' is the average of all samples from the beginning of the run
- 'Upper Quarter Average' is the average of the newest 25 samples (if buffer size is currently 100).
- 'Lower Quarter Average' is the average of the oldest 25 samples (if buffer size is currently 100).
  For example, if samples buffer size is 8 and the last samples are
[10,40,30,44,20,50,35,55]: Then the lower qtr avg is the avg of 10,40 and the upper qtr avg is the avg of 35,55.
- Implement all AverageBuffer API functions mentioned in the following main() function - DO NOT CHANGE THIS FILE. IMPLEMENT ALL OF YOUR FUNCTIONS IN average_buffer.c FILE.
- PLEASE HAND IN ONLY THE FOLLOWING FILES: average_buffer.c average_buffer.h
- PLEASE MAKE SURE YOUR CODE COMPILES ON GCC COMPILER IN LINUX WITH NO WARNINGS/ERRORS.
*/

int main()
{
    int i, randNum;

  //  AverageBuffer *ab = allocAverageBuffer(100);

    srand(time(NULL));

    for (i = 0; i < 200; i++)
    {
        randNum = rand() % 100;
        addSample(ab, randNum);

        printf("i = %d\n", i);
        printf("randNum = %d\n", randNum);
        printf("getAverage = %lf\n", getAverage(ab));
        printf("getAverageForever = %lf\n", getAverageForever(ab));
        printf("getUpperQuarterAverage = %lf\n", getUpperQuarterAverage(ab));
        printf("getLowerQuarterAverage = %lf\n", getLowerQuarterAverage(ab));
    }

    clearAverageBuffer(ab);
    addSample(ab, 100);

    freeAverageBuffer(ab);

    return 0;
}
