<<<<<<< HEAD
/*******************************************************************************
*
* 1. NAME
*       adc.h
*
* 2. DESCRIPTION
*
*
*******************************************************************************/
#ifndef ADC_H_
#define ADC_H_

/*******************************************************************************
*   HEADER FILES                                                               *
*******************************************************************************/
#include <avr/io.h>
#include <stdint.h>

/*******************************************************************************
*   GLOBAL VARIABLES                                                           *
*******************************************************************************/

/*******************************************************************************
*   MACROS                                                                     *
*****************************************************************************///
#define adc_init() { /* 10-bit conversion, input clock 8MHz/64 = 125kHz */ \
    ADMUX |= (1 << REFS0);                                                 \
    ADCSRA |= (1 << ADEN) | (1 << ADPS2) | (1 << ADPS1);                   \
}


/*******************************************************************************
*   FUNCTION PROTOTYPES                                                        *
*****************************************************************************///


=======
/*******************************************************************************
*
* 1. NAME
*       adc.h
*
* 2. DESCRIPTION
*
*
*******************************************************************************/
#ifndef ADC_H_
#define ADC_H_

/*******************************************************************************
*   HEADER FILES                                                               *
*******************************************************************************/
#include <avr/io.h>
#include <stdint.h>

/*******************************************************************************
*   GLOBAL VARIABLES                                                           *
*******************************************************************************/

/*******************************************************************************
*   MACROS                                                                     *
*****************************************************************************///
#define adc_init() /* 10-bit conversion, input clock 8MHz/64 = 125kHz */    \
    do {                                                                    \
        ADMUX |= (1 << REFS0) | SENSOR_1_PIN; /* sensor pin is decimal */   \
        ADCSRA |= (1 << ADEN) | (1 << ADPS2) | (1 << ADPS1);                \
        DIDR0 |= 0xFF; /* disable digital input buffer */                   \
    } while(0)


/*******************************************************************************
*   FUNCTION PROTOTYPES                                                        *
*****************************************************************************///


>>>>>>> Cleaned up everything
/***************************************************************************//**
@brief Starts ADC, waits until it's done, then turns pin ADSC LOW.
@details Conversion is done in single conversion mode; each conversion has to
be called.
@param Analog input pin
@return 10-bit ADC value
*******************************************************************************/
<<<<<<< HEAD
uint16_t adc_read(uint8_t const analog_channel);


#endif /* ADC_H_ */
=======
uint16_t adc_read(void);


#endif /* ADC_H_ */
>>>>>>> Cleaned up everything
