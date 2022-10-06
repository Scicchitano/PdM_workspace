/*
 * API_delay.h
 *
 *  Created on: Sep 7, 2022
 *      Author: diego
 */

#ifndef API_INC_API_DELAY_H_
#define API_INC_API_DELAY_H_

#include <stdbool.h>
#include <stdint.h>




#endif /* API_INC_API_DELAY_H_ */



typedef uint32_t tick_t;
typedef bool bool_t;
typedef struct{
   tick_t startTime;
   tick_t duration;
   bool_t running;
} delay_t;

/**
 * @fn void delayInit( delay_t * delay, tick_t duration );
 * @brief Inicializa la estructura y se especifica la duracion del delay
 *
 */
void delayInit( delay_t * delay, tick_t duration );
/**
 * @fn bool_t delayReadState( delay_t * delay );
 * @brief devuelve true o false dependiendo de si se cumplio la duracion o no.
 *
 */
bool_t delayReadState( delay_t * delay );

/**
 * @fn void delayWrite( delay_t * delay, tick_t duration );
 * @brief Se setea el valor de la duracion
 *
 */
void delayWrite( delay_t * delay, tick_t duration );
