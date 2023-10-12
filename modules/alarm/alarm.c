/**
 * @file alarm.h
 * @author Sequeira Andres
 * @date 9 de Octubre de 2023
 * @brief Archivo de código fuente de la estructura alarm y sus funciones
 * @see www.iua.edu.ar
 * @version 2023/10/09 v1.0.0 Versión inicial del programa.
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
#include <stdio.h>
#include "alarm.h"

/*==================[macros and definition]==================================*/

#define ALARM_INITIAL_STATE ALARM_ON 
#define ALARM_MAX_TRIGGERED 10
// #define ALARM_INITIAL_STATE ALARM_ON
// #define ALARM_INITIAL_STATE ALARM_ON

/*==================[internal data declaration]==============================*/
/*==================[internal functions declaration]=========================*/

void alarmStateOn(alarm_t *alarm)
{
    printf("Alarm State ON \n");
    if(sensorAnalogTriggered(&alarm->analog)!=false || sensorBinaryTriggered(&alarm->binary) )
    {
    	alarm->status = ALARM_TRIGGERED ;
    }

}

void alarmStateOff(alarm_t *alarm)
{
    printf("Alarm State OFF \n");
}

void alarmStateTriggered(alarm_t *alarm)
{
     printf("Alarm State Triggered \n");
    // alarmTriggered() / se dispara la alarma por dos mecanismos
}

void alarmStateVerificationCycle(alarm_t *alarm)
{
    printf("Alarm State Verification cycle \n");
    // lanzarCicloDeVerificacionSensores()
}

void alarmStateInit(alarm_t *alarm)
{
    // InicializarAlarma()
    //printf("Init state alarms\n");
    alarm->status = ALARM_INITIAL_STATE ;
    sensorAnalogInit(&alarm->analog);
    sensorBinaryInit(&alarm->binary);
}

void alarmSystemRun(alarm_t *alarm)
{
    switch(alarm->status)
	{
	    case ALARM_ON:
		    alarmStateOn(alarm);
		    break;
	    case ALARM_OFF:
		    alarmStateOff(alarm);
		    break;
	    case ALARM_TRIGGERED:
		    alarmStateTriggered(alarm);
		    break;
	    case ALARM_VERIFICATION_CYCLE:
		    alarmStateVerificationCycle(alarm);
		    break;
            case ALARM_BLOCK:
            	    break;
	    default:
		    break;
	}
}

/*==================[external functions definition]==========================*/

/** @} doxygen end group definition */
/** @} doxygen end group definition */
/*==================[end of file]============================================*/
