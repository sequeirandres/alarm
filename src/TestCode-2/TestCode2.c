
/**
 * @file TestCode2.h
 * @author Sequeira Andres
 * @date 12 de Octubre de 2023
 * @brief Archivo de código fuente para testear el codigo del modulo alarma
 * @see www.iua.edu.ar
 * @version 2023/10/12 v1.0.0 Versión inicial del modulo sensor.
 **
 ** Histórico de modificaciones:
 **
 **
 ** 2023/10/12 v1.0.0 Versión inicial del programa.
 */

/** \addtogroup PROYECTO Alarma Hogareña.
 ** @{ */
/** \brief En este módulo se encuentran las funciones de testing
 **
 ** Este archivo contiene las funciones para testear codigos del modulo inicial de la alarma
 **
 **/
/** \addtogroup TEST_CODE_02 Codigo para Test el modulo alarma
 ** @{ */

/*==================[inclusions]=============================================*/


#include <stdio.h>
#include <stdint.h>

#include "../modules/code/modules.h"
#include "../modules/sensor/sensor.h"
#include "../modules/alarm/alarm.h"


#include "unity.h"


/*==================[macros and definition]==================================*/
/*==================[internal data declaration]==============================*/
/*==================[internal functions declaration]=========================*/
 
// funcion de configuracion o inicializacion de variables, estados, etc.
void setUp(void){

};

// funcion de cierre, desasignar memoria, borrar valores, etc.
void tearDown(void){

};

// funciones que realizan las pruebas
void test_alarm_init_active_on(void) {
	// creo una estructura alarm
	alarm_t alarm;
	
	alarmStateInit(&alarm);
	// INIT ALARM ON ?
	
	TEST_ASSERT_EQUAL(ALARM_ON,alarm.status) ;
}


void test_alarm_analog_triggered(void) {
	// creo una estructura alarm
	alarm_t alarm;
	
	alarmStateInit(&alarm);
	// INIT ALARM ON ?
	
	alarm.analog.value = 60 ;

	alarmSystemRun(&alarm);
	
	//alarmSystemRun(&alarm);
	
	TEST_ASSERT_EQUAL(ALARM_TRIGGERED,alarm.status) ;
	alarmSystemRun(&alarm);
}

void test_alarm_binary_triggered(void) {
	// creo una estructura alarm
	alarm_t alarm;
	
	alarmStateInit(&alarm);
	// INIT ALARM ON ?
	
	alarm.binary.value = true ;

	alarmSystemRun(&alarm);
	
	//alarmSystemRun(&alarm);
	
	TEST_ASSERT_EQUAL(ALARM_TRIGGERED,alarm.status) ;
	alarmSystemRun(&alarm);
}


int main(void)
{

    UNITY_BEGIN();
    // se ejecutan los test 
    RUN_TEST(test_alarm_init_active_on);;
    
    RUN_TEST(test_alarm_analog_triggered);
    
    RUN_TEST(test_alarm_binary_triggered);
    
    UNITY_END();

    return 0;
}

/*==================[external functions definition]==========================*/
/** @} doxygen end group definition */
/** @} doxygen end group definition */
/*==================[end of file]============================================*/

