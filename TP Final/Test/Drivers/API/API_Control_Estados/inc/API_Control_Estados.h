/*
 * API_Control_Estados.h
 *
 *  Created on: 1 oct. 2022
 *      Author: diego
 */

#ifndef API_API_CONTROL_ESTADOS_INC_API_CONTROL_ESTADOS_H_
#define API_API_CONTROL_ESTADOS_INC_API_CONTROL_ESTADOS_H_

#include "API_debounce.h"
#include "SensorTemp.h"
#include "stm32f4xx_nucleo_144.h" 	/* <- BSP include */

/**
 * @fn void debounceFSM_init(void)
 * @brief debe cargar el estado inicial
 *
 */
void ControlFSM_init(void);

/**
 * @fn void debounceFSM_update(void)
 * @brief debe leer las entradas, resolver la lógica de transición de estados
 * 		  y actualizar las salidas
 *
 */
void ControlFSM_update(void);


/**
 * @fn void debounceFSM_update(void)
 * @brief Se cambiará el estado de los leds y del buzzer de manera intermitente
 * indicando que el sistema se encuentra en un estado critico
 */
static void Activar_Estado_Critico(delay_t * delay);
/**
 * @fn void debounceFSM_update(void)
 * @brief Se encenderán tres leds
 */
static void Activar_Estado_Alto(void);
/**
 * @fn void debounceFSM_update(void)
 * @brief Se encenderán dos leds.
 */
static void Activar_Estado_Medio(void);
/**
 * @fn void debounceFSM_update(void)
 * @brief Se encenderá solo un led.
 */
static void Activar_Estado_Bajo(void);
/**
 * @fn void debounceFSM_update(void)
 * @brief Se apagarán todos los leds y se encenderá el buzzer indicando que la temperatura es demasiado baja.
 */
static void Activar_Estado_Bajo_Cero(void);
/**
 * @fn void debounceFSM_update(void)
 * @brief Esta funcion determinara el estado en el que esta el sistema de acuerdo a la temperatura
 */

static uint8_t Definir_Estado(int16_t Temp);




#endif /* API_API_CONTROL_ESTADOS_INC_API_CONTROL_ESTADOS_H_ */
