/*
 * API_delay.h
 *
 *  Created on: Sep 7, 2022
 *      Author: diego
 */

#ifndef SensorTemp_INC_SensorTemp_H_
#define SensorTemp_INC_SensorTemp_H_

#include <stdbool.h>
#include <stdint.h>




#endif /* API_INC_API_DELAY_H_ */


/**
 * @fn void SensorTemp_Init(void);
 * @brief Se iniciliza el ADC y la uart
 *
 * @return
 */
void SensorTemp_Init(void);
/**
 * @fn int8_t SensorTemp_Read(void);
 * @brief Se lee la temperatura, la envia por uart y la retorbna
 *
 * @return
 */
int8_t SensorTemp_Read(void);

/**
 * @fn static void MX_ADC1_Init(void);
 * @brief Se cargan los parametros del ADC
 *
 * @return
 */
static void MX_ADC1_Init(void);
