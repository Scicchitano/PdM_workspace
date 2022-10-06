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


## Practica 4
### Ejercicio 1 (PdM_P4_Ej1)
Implementar una MEF anti-rebote que permita leer el estado del pulsador de la placa NUCLEO-F429ZI y generar acciones o eventos ante un flanco descendente o ascendente, de acuerdo al siguiente diagrama:

### Ejercicio 2 (PdM_P4_Ej2)
Crear un nuevo proyecto como copia del proyecto con la implementación del punto 1 de la práctica 4.

Implementar un módulo de software en un archivos fuente API_debounce.c con su correspondiente archivo de cabecera API_debounce.h y ubicarlos en el proyecto dentro de  las carpetas /drivers/API/src y /drivers/API/inc, respectivamente.
En API_debounce.h se deben ubicar los prototipos de las funciones públicas y las declaraciones:
void debounceFSM_init();
void debounceFSM_update();

/* La función readKey debe leer una variable interna del módulo y devolver true o false si la tecla fue presionada.  Si devuelve true, debe resetear (poner en false) el estado de la variable.*/
bool_t readKey();

En API_debounce.c se deben ubicar las declaraciones privadas, los prototipos de las funciones privadas y la implementación de todas las funciones del módulo, privadas y públicas:

La declaración de debounceState_t debe ser privada en el archivo .c y la variable de estado de tipo debounceState_t debe ser global privada (con static).

Declarar una variable tipo bool_t global privada que se ponga en true cuando ocurre un flanco descendente y se ponga en false cuando se llame a la función readKey();

Implementar un programa que cambie la frecuencia de toggleo del LED2 entre 100 ms y 500 ms cada vez que se presione la tecla.  El programa debe usar las funciones anti-rebote del módulo API_debounce y los retardos no bloqueantes del módulo API_delay.


## Practica 5
### Ejercicio 1 (PdM_P5_Ej1)
Implementar un módulo de software en un archivos fuente API_uart.c con su correspondiente archivo de cabecera API_uart.h y ubicarlos en el proyecto dentro de  las carpetas /drivers/API/src y /drivers/API/inc, respectivamente.
En API_uart.h se deben ubicar los prototipos de las funciones públicas.
bool_t uartInit();
void uartSendString(uint8_t * pstring);
void uartSendStringSize(uint8_t * pstring, uint16_t size);
void uartReceiveStringSize(uint8_t * pstring, uint16_t size);

En API_uart.c se deben ubicar los prototipos de las funciones privadas y la implementación de todas las funciones de módulo, privadas y públicas.


### Ejercicio 2 (PdM_P5_Ej2)
Sobre el ejercicio de la práctica 4, implementar un programa que utilice el módulo de uart para informar al usuario cuando se producen los flancos ascendente y descendente.



## TP Final

El objetivo de este proyecto es una implementación de un sistema de alarma y monitoreo. El mismo tendrá distintos modos de funcionamiento dependiendo de la temperatura indicando el rango de temperatura en el que se encuentra el sistema:

### Modo bajo cero (T < 0°C):
Se apagarán todos los leds y se encenderá el buzzer indicando que la temperatura es demasiado baja.
### Modo temperatura baja (0°C < T < 7°C):
Se encenderá solo un led.
### Modo temperatura media (7°C < T < 15°C):
Se encenderán dos leds.
### Modo temperatura alta (15°C < T < 30°C):
Se encenderán tres leds.
### Modo temperatura critica (30°C < T):
Se cambiará el estado de los leds y del buzzer de manera intermitente indicando que el sistema se encuentra en un estado critico
 
Además, se podrá disparar la alarma de manera manual con el pulsador.
La temperatura será leida a través del ADC.
