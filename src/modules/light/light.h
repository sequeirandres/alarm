#ifndef __SYSTEM_LIGHT_
#define __SYSTEM_LIGHT_

/**
 * @file light.h
 * @author Sequeira Andres
 * @date 9 de Octubre de 2023
 * @brief Archivo de código fuente para el modulo light.
 * @see www.iua.edu.ar
 * @version 2023/10/09 v1.0.0 Versión inicial del modulo sensor.
 **
 ** Histórico de modificaciones:
 **
 **
 ** 2023/10/09 v1.0.0 Versión inicial del programa.
 */

/** \addtogroup PROYECTO Alarma Hogareña.
 ** @{ */
/** \brief En este módulo se encuentran las funciones para la estructura light
 **
 ** Este módulo contiene las funciones de la estructura light que controla leds
 **
 **/
/** \addtogroup LIGHT Funciones para la estructura light
 ** @{ */

/*==================[inclusions]=============================================*/
#include "../code/modules.h"
/*==================[macros and definitions]=================================*/
/*==================[external data declaration]==============================*/
/*==================[external functions declaration]=========================*/

typedef struct light
{
	int frequency;
	int intensity;
	int duty;
	GPIOA gpio;	
	//GPIO_PORTA_PIN_1 gpio;
}light;

/** @brief Implementa la función para Inicializar la estructura light
**
** La funcion recibe un puntero a la estuctura light. Inicializa el modulo con los parametros por default.
**
** @param led puntero a la estructura led.
** @return la funcion no retorna valor.
**/

void lightInit(light* led);

/** @brief Implementa la función para configurar la estructura light
**
** La funcion recibe un puntero a la estuctura light, frecuencia, intencidad y duty o ciclo de trabajo para configurar los parametros de la estructura light.
**
** @param led puntero a la estructura led.
** @param frequency frecuencia (1 a 4) o cantidad de pulsos por segundo que parpadea el led, 
** @param intensity intensidad  (0 a 100) o brillo del led.
** @param duty ciclo de operacion (0 a 100)
** @return la funcion no retorna valor.
**/

void lightConfig(light* led,int  frequency ,int intensity, int duty,pin_t pinout);

/** @brief Implementa la función para activar un led
**
** La funcion recibe un puntero a la estuctura light. Utiliza mecanismos que le permiten activar un puerto de salida para encender un led
**
** @param led puntero a la estructura led.
** @return la funcion no retorna valor.
**/

void lightTurnOn(light* led);

/** @brief Implementa la función para desactivar un led
**
** La funcion recibe un puntero a la estuctura light. Utiliza mecanismos que le permiten desactivar un puerto de salida para apagar un led
**
** @param led puntero a la estructura led.
** @return la funcion no retorna valor.
**/

void lightTurnOff(light* led);

/** @brief Implementa la función para hacer parpadear (blink) un led
**
** La funcion recibe un puntero a la estuctura light. Utiliza mecanismos que le permiten parpadear (blink) un led 
**
** @param led puntero a la estructura led.
** @return la funcion no retorna valor.
**/

void lightBlink(light* led);

/** @} doxygen end group definition */
/** @} doxygen end group definition */
/*==================[end of file]============================================*/
#endif
