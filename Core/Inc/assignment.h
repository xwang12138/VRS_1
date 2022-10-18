/*
 * assignment.h
 *
 *  Created on: Sep 27, 2022
 *      Author: 10786
 */

#ifndef INC_ASSIGNMENT_H_
#define INC_ASSIGNMENT_H_
#ifdef __cplusplus
extern "C" {
#endif
#include "main.h"

typedef enum
{
	NONE=0,
	RISE,
	FALL,
}EDGE_TYPE;
EDGE_TYPE key_state;
EDGE_TYPE edgeDetect(uint8_t pin_state, uint8_t samples);
#ifdef __cplusplus
}
#endif
#endif /* INC_ASSIGNMENT_H_ */
