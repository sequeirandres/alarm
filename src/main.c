/**
 * @file main.c
 * @author Sequeira Andres
 * @date 9 de Octubre de 2023
 * @brief Archivo de código fuente del archivo principal.
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
 ** Este proyecto contiene el código principal
 **
 **/
/** \addtogroup PROYECTO Alarma Hogareña.
 ** @{ */
/** \brief Este módulo corresponde a la aplicación principal.
 **
 ** En la aplicación principal se prueban todas las funciones implementadas en los módulos.
 **
 **/
/** \addtogroup PRINCIPAL Módulo de la aplicación principal.
 ** @{ */

/*==================[inclusions]=============================================*/
// #include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include "modules/speaker/speaker.h"
#include "modules/light/light.h"
#include "modules/sensor/sensor.h"
#include "modules/watchDog/watchDog.h"
#include "modules/alarm/alarm.h"
/*==================[macros and definition]==================================*/
/*==================[internal data declaration]==============================*/
/*==================[internal functions declaration]=========================*/
 
/* 
typedef enum
{
	ALARM_ON,
	ALARM_OFF,
	ALARM_TRIGGERED,
	ALARM_VERIFICATION_CYCLE,
	ALARM_INIT,	
}status_t;

typedef struct alarm_t
{
	int counterTrigger;
	status_t status;
	speaker siren;
	light led;
	sensorAnalog tempeture;
	sensorBinary intruso;
	watchdog keepAlive;
}alarm_t;

// MAQUINA DE ESTADOS
void alarmStateOn(alarm_t *alarm)
{
	// read analog
	// rad digital
	// compara
	// disparar alarma ?
	//alarm->status = ALARM_TRIGGERED ;
}

void alarmStateOff(alarm_t *alarm)
{

	// escribir en pantalla activate -> OFF
}

void alarmStateTriggered(alarm_t *alarm)
{

	speakerSoundRun(&alarm->siren) ;
	//HAL_Delay(500) ;
	// activo la alarma al finalizar
	//alarm->status = ALARM_ON ;
}

void alarmStateVerificationCycle(alarm_t *alarm)
{

}

// send init message !
void alarmStateInit(alarm_t *alarm)
{
	  //displayMsgInit();
	  //displayMsgInit2();
	  //displayMsgBackGround();
	  // auto activacion
	  alarm->status = ALARM_ON ;
	  //HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,GPIO_PIN_SET ); // (GPIOA, GPIO_PIN_3);
}

// RUN ALARM
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
	case ALARM_INIT:
		break;
	default:
		break;
	}
}

*/

/*==================[internal functions definition]==========================*/
/*==================[external functions definition]==========================*/

int main(void)
{
	// speaker sirena;

	//status_t alarmStatus= ALARM_OFF;
	alarm_t alarm;

	printf("### Alarm ###\n");

	// inicializar 
	alarmStateInit(&alarm);
	
	// alarm 
	alarmSystemRun(&alarm);

	// Trigged forced
	alarm.analog.value = 60 ;

	alarmSystemRun(&alarm);
	
	alarmSystemRun(&alarm);
	
	//

	return 0;
}

/** @} doxygen end group definition */
/** @} doxygen end group definition */
/*==================[end of file]============================================*/
