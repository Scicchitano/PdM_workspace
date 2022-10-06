/*
 * Buzzer.c
 *
 *  Created on: 28 sep. 2022
 *      Author: diego
 */

#include "Buzzer.h"

#define Buzzer_port GPIOA
#define Buzzer_pin GPIO_PIN_3


void Buzzer_init(void){ // Se inicializa la configuración del GPIO del buzzer
	GPIO_InitTypeDef GPIO_Buzzer_InitStruct = {0};
	/*Configure GPIO pin Output Level */
	HAL_GPIO_WritePin(Buzzer_port, Buzzer_pin, GPIO_PIN_RESET);
	/*Configure GPIO pin : BUZZER_PIN_Pin */
	GPIO_Buzzer_InitStruct.Pin = Buzzer_pin;
	GPIO_Buzzer_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
	GPIO_Buzzer_InitStruct.Pull = GPIO_NOPULL;
	GPIO_Buzzer_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
	HAL_GPIO_Init(Buzzer_port, &GPIO_Buzzer_InitStruct);
}
void Buzzer_write(GPIO_PinState Estado){ // Se cambia el estado del buzzer
	HAL_GPIO_WritePin(Buzzer_port, Buzzer_pin, Estado);
}

void Buzzer_toggle(void)
{
  HAL_GPIO_TogglePin(Buzzer_port, Buzzer_pin);
}
