# PdM_workspace
STM32CubeIDE workspace para Programación de microcontroladores - CESE - FIUBA

## Practica 1
### Ejercicio 1 (SE_P1_Ej1_FR429ZI)
Implementar un programa que genere una secuencia periódica con los leds de la placa NUCLEO-F429ZI.

La secuencia debe seguir el orden: LED1, LED2, LED3, LED1,... etc.
Cada led debe permanecer encendido 200 ms. y 200 ms apagado.  No debe encenderse más de un led simultáneamente.

### Ejercicio 2 (SE_P1_Ej2_FR429ZI)
Utilizar el pulsador azul (USER_BUTTON) para controlar cómo se recorre la secuencia de leds.  Cada vez que se presiona el pulsador se debe alternar el orden de la secuencia entre:
1. LED1, LED2, LED3, LED1,... etc.
2. LED1, LED3, LED2, LED1,... etc.


## Practica 2
### Ejercicio 1 (SE_P2_Ej1_FR429ZI)
Implementar las funciones auxiliares necesarias para usar retardos no bloqueantes en un archivo fuente main.c con su correspondiente archivo de cabecera main.h.
En main.h se deben ubicar los prototipos de las siguientes funciones y las declaraciones
```
typedef uint32_t tick_t; // Qué biblioteca se debe incluir para que esto compile?
typedef bool bool_t;	  // Qué biblioteca se debe incluir para que esto compile?
typedef struct{
   tick_t startTime;
   tick_t duration;
   bool_t running;
} delay_t;
void delayInit( delay_t * delay, tick_t duration );
bool_t delayRead( delay_t * delay );
void delayWrite( delay_t * delay, tick_t duration );
```
### Ejercicio 2 (SE_P2_Ej2_FR429ZI)
Implementar un programa que utilice retardos no bloqueantes y  haga titilar en forma periódica e independiente los tres leds de la placa NUCLEO-F429ZI de la siguiente manera:
- LED1: 100 ms. 
- LED2: 500 ms.
- LED3: 1000 ms.


## Practica 3
### Ejercicio 1 (PdM_P3_Ej1)
Crear un nuevo proyecto como copia del proyecto realizado para la práctica 2.
Crear una carpeta API dentro de la carpeta Drivers en la estructura de directorios del nuevo proyecto. Crear dentro de la carpeta API, subcapetas /src y /inc.

### Ejercicio 2 (PdM_P3_Ej2)
Implementar un programa que utilice retardos no bloqueantes y haga titilar en forma periódica e independiente los tres leds de la placa NUCLEO-F429ZI de acuerdo a una secuencia predeterminada como en la práctica 1.
Cada led debe permanecer encendido 200 ms.  No debe encenderse más de un led simultáneamente en ningún momento.
