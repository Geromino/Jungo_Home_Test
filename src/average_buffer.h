/*
 * average_buffer.h
 *
 *  Created on: 30 Apr 2020
 *      Author: zacharpapkov
 */

#ifndef AVERAGE_BUFFER_H_
#define AVERAGE_BUFFER_H_

float getAverage(int * buffer);
float getAverageForever(void);
float getUpperQuarterAverage(int * buffer);
float getLowerQuarterAverage(int * buffer);
void allocAverageBuffer(int n_bytesto_allocation);

#endif /* AVERAGE_BUFFER_H_ */
