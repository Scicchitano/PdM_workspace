/*
 * API_debounce.h
 *
 *  Created on: 13 sep 2022
 *      Author: marti
 */

#ifndef API_INC_API_DEBOUNCE_H_
#define API_INC_API_DEBOUNCE_H_

/* P2_1 - Inclusión de tipos de datos de tamaño fijo */
#include <stdint.h>
#include <stdbool.h>

#include "API_delay.h"

#include "stm32f4xx_hal.h"  		/* <- HAL include */
#include "stm32f4xx_nucleo_144.h" 	/* <- BSP include */


/* Exported types ------------------------------------------------------------*/

/* Exported functions ------------------------------------------------------- */

/**
 * @fn void debounceFSM_init(void)
 * @brief debe cargar el estado inicial
 *
 */
void debounceFSM_init(void);

/**
 * @fn void debounceFSM_update(void)
 * @brief debe leer las entradas, resolver la lógica de transición de estados
 * 		  y actualizar las salidas
 *
 */
void debounceFSM_update(void);


/**
 * @fn bool_t readKey()
 * @brief La función readKey debe leer una variable interna del módulo y
 * devolver true o false si la tecla fue presionada.  Si devuelve true,
 * debe resetear (poner en false) el estado de la variable.
 *
 * @return
 */
bool readKey(void);



#endif /* API_INC_API_DEBOUNCE_H_ */
