
/******************************************************************************************************
 * @file: main.c
 * @author: Youssef Tolba
 * @brief: This code is used to control a traffic light.
 *******************************************************************************************************
 */

/* ********************** Define Section Start ********************** */
#define F_CPU 8000000LU  //set frequency
/* ********************** Define Section End ********************** */
/* ********************** Includes Section Start ********************** */
#include "LCD_interface.h"
#include <util/delay.h>
#include "DIO_interface.h"
#include "7_seg_interface.h"
/* ********************** Includes Section End ********************** */
/* ********************** Sub-Program Declerations Section Start ******* */
void traffic_light(void);  //function that executes the cycling of the traffic light
void display_fifteen(void);  //function that displays a counter for 15 secs
void display_Five(void);  //function that displays a counter for 5 secs
/* ********************** Sub-Program Declerations Section End ******* */

int main()
{	

	DIO_vidSetPortMode(GPIOA, OUTPUT);  //set port A as output
	DIO_vidSetPortMode(GPIOB, OUTPUT);  //set port B as output
	DIO_vidSetPortMode(GPIOC, OUTPUT);  //set port C as output
	DIO_vidSetHighNibbleMode(GPIOD, OUTPUT);
	DIO_vidSetPinMode(GPIOD, PIN3, OUTPUT);
	LCD_vidInit(GPIOA, GPIOD, PIN3, GPIOD, PIN4);  //initialize LCD


	
	while (1){
			
			traffic_light();
			

	}
	return 0;
}

/* ********************** Sub-Program Section Start ************* */
void traffic_light(void){
	LCD_vidDisplayString(GPIOA, GPIOD, PIN3, GPIOD, PIN4,"Do Not Cross");
	DIO_vidWritePin(GPIOD, PIN5, HIGH);  //set PD5 high, green light on
	display_fifteen();  //display timer 15 secs
	DIO_vidWritePin(GPIOD, PIN5, LOW);  //set PD5 low, green light off
	DIO_vidWritePin(GPIOD, PIN6, HIGH);  //set PD6 high, yellow light on
	display_Five();  //display timer 5 secs
	DIO_vidWritePin(GPIOD, PIN6, LOW);  //set PD6 low, yellow light off
	DIO_vidWritePin(GPIOD, PIN7, HIGH);  //set PD7 high, red light on
	LCD_vidClearScreen(GPIOA, GPIOD, PIN3, GPIOD, PIN4);
	LCD_vidDisplayString(GPIOA, GPIOD, PIN3, GPIOD, PIN4,"You Can Cross");
	display_fifteen();  //display timer 15 secs
	DIO_vidWritePin(GPIOD, PIN7, LOW);  //set PD7 low, red light off
	LCD_vidClearScreen(GPIOA, GPIOD, PIN3, GPIOD, PIN4);
} 

void display_fifteen(void){
	Seg_vidDispNum(PortC, 1);  //display number 1 on sev seg
	for(int i = 5; i > 0; i--){
		Seg_vidDispNum(PortB, i);
		_delay_ms(1000);
	}
	Seg_vidDispNum(PortB, 0);
	_delay_ms(1000);
	Seg_vidDispNum(PortC, 0);
	for(int i = 9; i > 0; i--){
		Seg_vidDispNum(PortB, i);
		_delay_ms(1000);
	}
	
}

void display_Five(void){
	for(int i = 5; i > 0; i--){
		Seg_vidDispNum(PortB, i);
		_delay_ms(1000);
	}
}
/* ********************** Sub-Program Section End ************* */

