#ifndef __SYSTEM_WATCHDOG_
#define __SYSTEM_WATCHDOG_

/**
 * @file watchDog.h
 * @author Sequeira Andres
 * @date 9 de Octubre de 2023
 * @brief Archivo de código fuente para el watchDog
 * @see www.iua.edu.ar
 * @version 2023/10/09 v1.0.0 Versión inicial del modulo watchDog.
 **
 ** Histórico de modificaciones:
 **
 **
 ** 2023/10/09 v1.0.0 Versión inicial del programa.
 */

/** \addtogroup PROYECTO Alarma Hogareña.
 ** @{ */
/** \brief En este módulo se encuentran las funciones para la estructura WatchDog para el Keep Alive.
 **
 ** Este módulo contiene las funciones de la estructura WatchDog para el Keep ALive
 **
 **/
/** \addtogroup WATCHDOG Funciones para la estructura Keep Alive
 ** @{ */

/*==================[inclusions]=============================================*/

#include "../code/modules.h"

/*==================[macros and definitions]=================================*/
//#define PIN_GPIO_PORT_WATCHDOG	5
/*==================[external data declaration]==============================*/
/*==================[external functions declaration]=========================*/

// struct for watch dog
typedef struct watchdog
{
	bool_t status;	
	int frequency;
	int duty;
	GPIOA gpio;
	//GPIO_PORT_A pinout; =PIN_GPIO_PORT_WATCHDOG; /
	// port_x
}watchdog;

/*==================[internal data declaration]==============================*/
/*==================[internal functions declaration]=========================*/

/** @brief Implementa la función para inicializar el modulo "Keep alive".
**
** La funcion recibe un punto al modulo watchdog. Inicializa los parametros con valores por default.
**
** @param wtdog puntero a la estructura watchDog.
** @return la funcion no retorna valor.
**/

void watchdogInit(watchdog* wtdog);

/** @brief Implementa la función para configurar el modulo watchDog que genera el "Keep alive".
**
** La funcion recibe un puntero a la estuctura watchDog, frecuencia,  duty o ciclo de trabajo para configurar los parametros de la estructura light.
**
** @param wtdog puntero a la estructura watchDog.
** @param status variable de tipo bool (true o false). Indica el estado disponible el pinout del microcontrolador.
** @param frequency frecuencia (1 a 4) o cantidad de pulsos por segundo 
** @param duty ciclo de operacion (0 a 100)
** @return la funcion no retorna valor.
**/

void watchdogConfig(watchdog* wtdog,bool_t status,int frequency, int duty, pin_t pinout);   

/** @brief Implementa la función para iniciar el modulo "Keep alive".
**
** La funcion recibe un punto al modulo watchdog. Aplica mecanismos para emitir punsos de Keep Alive 
**
** @param wtdog puntero a la estructura watchDog.
** @return la funcion no retorna valor.
**/

void watchdogStart(watchdog* wtdog);

/** @brief Implementa la función para detener el modulo "Keep alive".
**
** La funcion recibe un punto al modulo watchdog. Aplica mecanismos para detener los punsos de Keep Alive 
**
** @param wtdog puntero a la estructura watchDog.
** @return la funcion no retorna valor.
**/

void watchdogStop(watchdog* wtdog);

/** @} doxygen end group definition */
/** @} doxygen end group definition */
/*==================[end of file]============================================*/
#endif
