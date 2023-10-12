
/**
 * @file TestCode1.h
 * @author Sequeira Andres
 * @date 12 de Octubre de 2023
 * @brief Archivo de código fuente para testear el codigo del modulo sensor analogico y binario
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
 ** Este archivo contiene las funciones para testear codigos del modulo sensor analogico y binario
 **
 **/
/** \addtogroup TEST_CODE_01 Codigo para Test modulos.
 ** @{ */

/*==================[inclusions]=============================================*/


#include <stdio.h>
#include <stdint.h>

#include "../modules/code/modules.h"
#include "../modules/sensor/sensor.h"

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
void test_alarm_trigger_by_sensor_analog_1(void) {
	// creo una estructura 
	sensorAnalog sensor;
	sensorAnalogInit(&sensor);
	sensor.value = 10;
	// disparar alarm ?
	printf("%0.0f < %0.0f ? \n",sensor.value, sensor.threshold);
	TEST_ASSERT_EQUAL(false,sensorAnalogTriggered(&sensor) ) ;
}

void test_alarm_trigger_by_sensor_analog_2(void) {
	// creo una estructura 
	sensorAnalog sensor;
	sensorAnalogInit(&sensor);
	sensor.value = 60;
	// disparar alarm ?
	printf("%0.0f < %0.0f ? \n",sensor.value, sensor.threshold);
	TEST_ASSERT_EQUAL(true,sensorAnalogTriggered(&sensor)) ;
}

void test_alarm_trigger_by_sensor_analog_3(void) {
	sensorAnalog sensor;
	sensorAnalogInit(&sensor);
	sensor.value = 50;
	// disparar alarm ?
	printf("%0.0f = %0.0f ? \n",sensor.value, sensor.threshold);
	TEST_ASSERT_EQUAL(false,sensorAnalogTriggered(&sensor)) ;
}



void test_alarm_trigger_by_sensor_binary_1(void) {
	sensorBinary sensor;
	sensorBinaryInit(&sensor);
	sensor.value = false;
	printf("%d = %d ? \n",sensor.value, sensor.threshold);
	// disparar alarm ?
	TEST_ASSERT_EQUAL(false,sensorBinaryTriggered(&sensor)) ;
}

void test_alarm_trigger_by_sensor_binary_2(void) {
	// creo una estructura 
	sensorBinary sensor;
	sensorBinaryInit(&sensor);
	sensor.value = true;
	printf("%d != %d ? \n",sensor.value, sensor.threshold);
	// disparar alarm ?
	TEST_ASSERT_EQUAL(true,sensorBinaryTriggered(&sensor)) ;
}


int main(void)
{

    UNITY_BEGIN();
    
    // Test Alarm -> Triggered
    RUN_TEST(test_alarm_trigger_by_sensor_analog_1);
    RUN_TEST(test_alarm_trigger_by_sensor_analog_2);
    RUN_TEST(test_alarm_trigger_by_sensor_analog_3);
    RUN_TEST(test_alarm_trigger_by_sensor_binary_1);
    RUN_TEST(test_alarm_trigger_by_sensor_binary_2);
    
    UNITY_END();

    return 0;
}

/*==================[external functions definition]==========================*/
/** @} doxygen end group definition */
/** @} doxygen end group definition */
/*==================[end of file]============================================*/

