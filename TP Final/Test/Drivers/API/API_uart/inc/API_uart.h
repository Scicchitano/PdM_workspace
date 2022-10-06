/*
 * API_uart.h
 *
 *  Created on: 21 sep. 2022
 *      Author: diego
 */

#ifndef API_INC_API_UART_H_
#define API_INC_API_UART_H_

/* P2_1 - Inclusión de tipos de datos de tamaño fijo */
#include <stdint.h>
#include <stdbool.h>

#include "stm32f4xx_hal.h"


/* Exported types ------------------------------------------------------------*/

/* Exported functions ------------------------------------------------------- */

/**
 * @fn bool uartInit();
 * @brief debe cargar los parametros de la estructura
 *
 */
bool uartInit();

/**
 * @fn void uartSendString(uint8_t * pstring);
 * @brief Debe enviar un string por uart
 *
 */
void uartSendString(uint8_t * pstring);


/**
 * @fn void uartSendStringSize(uint8_t * pstring, uint16_t size);
 * @brief Debe enviar un string por uart especificando el tamaño
 *
 * @return
 */
void uartSendStringSize(uint8_t * pstring, uint16_t size);


/**
 * @fn HAL_StatusTypeDef uartReceiveStringSize(uint8_t * pstring, uint16_t size);
 * @brief Debe recibir un string por uart especificando el tamaño
 *
 * @return
 */
HAL_StatusTypeDef uartReceiveStringSize(uint8_t * pstring, uint16_t size);






#endif /* API_INC_API_UART_H_ */
