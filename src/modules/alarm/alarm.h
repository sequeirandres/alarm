#ifndef __SYSTEM_ALARM_
#define __SYSTEM_ALARM_

/**
 * @file alarm.h
 * @author Sequeira Andres
 * @date 9 de Octubre de 2023
 * @brief Archivo de código fuente de la estructura alarm y sus funciones
 * @see www.iua.edu.ar
 * @version 2023/10/09 v1.0.0 Versión inicial del codigo
 **
 ** Histórico de modificaciones:
 **
 **
 ** 2023/10/09 v1.0.0 Versión inicial del programa.
 */

/** \brief Alarma Hogareña con dos sensores.
 **
 ** Este proyecto contiene el codigo del modulo alarm
 **
 **/
/** \addtogroup PROYECTO Alarma Hogareña.
 ** @{ */
/** \brief Este módulo corresponde a la estructura alarm
 **
 ** Este módulo contiene las funciones implementadas para el modulo alarm. Ademas está implementada la maquina de estado.
 **
 **/
/** \addtogroup ALARM funciones para la estructura alarma
 ** @{ */

/*==================[inclusions]=============================================*/

#include "../../modules/speaker/speaker.h"
#include "../../modules/light/light.h"    
#include "../../modules/sensor/sensor.h"
#include "../../modules/watchDog/watchDog.h"

/*==================[macros and definition]==================================*/
/*==================[internal data declaration]==============================*/
/*==================[internal functions declaration]=========================*/

typedef enum
{
	ALARM_ON,
	ALARM_OFF,
	ALARM_TRIGGERED,
	ALARM_VERIFICATION_CYCLE,
	ALARM_BLOCK,	
}status_t;

typedef struct alarm_t
{
	int counterTrigger;
	status_t status;
	speaker siren;      // 
	light led;          // Junto a la sirena
    	light indicador;    // Indicar el inicial activado ON/OFF de la alarma.
	sensorAnalog analog;
	sensorBinary binary;
	watchdog keepAlive;
}alarm_t;


/** @brief Implementa el ESTADO_ALARM_ON de la maquina de estado.
**
** La funcion recibe un puntero a la estuctura alarm.
**
** @param alarm puntero a la estructura alarma con sus parametros
** @return la funcion no retorna valor.
**/

void alarmStateOn(alarm_t *alarm);

/** @brief Implementa el ESTADO_ALARM_OFF de la maquina de estado.
**
** La funcion recibe un puntero a la estuctura alarm.
**
** @param alarm puntero a la estructura alarma con sus parametros
** @return la funcion no retorna valor.
**/

void alarmStateOff(alarm_t *alarm);

/** @brief Implementa el ESTADO_ALARM_TRIGGERED de la maquina de estado.
**
** La funcion recibe un puntero a la estuctura alarm.
**
** @param alarm puntero a la estructura alarma con sus parametros
** @return la funcion no retorna valor.
**/

void alarmStateTriggered(alarm_t *alarm);

/** @brief Implementa el ESTADO_ALARM_VERIFIVATION_CYCLCE de la maquina de estado
**
** La funcion recibe un puntero a la estuctura alarm.
**
** @param alarm puntero a la estructura alarma con sus parametros
** @return la funcion no retorna valor.
**/

void alarmStateVerificationCycle(alarm_t *alarm);

void alarmStateInit(alarm_t *alarm);

void alarmSystemRun(alarm_t *alarm);

/*==================[external functions definition]==========================*/

#endif
/** @} doxygen end group definition */
/** @} doxygen end group definition */
/*==================[end of file]============================================*/
