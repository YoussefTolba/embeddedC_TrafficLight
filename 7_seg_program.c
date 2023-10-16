#include "Types.h"
#include "7_seg_interface.h"
#include "DIO_private.h"
//#include "DIO_interface.h"
void Seg_vidDispNum(_enuPortX Port, _enuDispNumX DispNum){


    switch (Port)
    {
    case PortA:
        DDRA = 0xFF;
        if (DispNum == Num0)
        {
            PORTA = ZERO;
        }else if (DispNum == Num1)
        {
            PORTA = ONE;
        }else if (DispNum == Num2)
        {
            PORTA = TWO;
        }else if (DispNum == Num3)
        {
            PORTA = THREE;
        }else if (DispNum == Num4)
        {
            PORTA = FOUR;
        }else if (DispNum == Num5)
        {
            PORTA = FIVE;
        }else if (DispNum == Num6)
        {
            PORTA = SIX;
        }else if (DispNum == Num7)
        {
            PORTA = SEVEN;
        }else if (DispNum == Num8)
        {
            PORTA = EIGHT;                                                                        
        }else if (DispNum == Num9)
        {
            PORTA = NINE;
        }
        break;

    case PortB:
        DDRB = 0xFF;
        if (DispNum == Num0)
        {
            PORTB = ZERO;
        }else if (DispNum == Num1)
        {
            PORTB = ONE;
        }else if (DispNum == Num2)
        {
            PORTB = TWO;
        }else if (DispNum == Num3)
        {
            PORTB = THREE;
        }else if (DispNum == Num4)
        {
            PORTB = FOUR;
        }else if (DispNum == Num5)
        {
            PORTB = FIVE;
        }else if (DispNum == Num6)
        {
            PORTB = SIX;
        }else if (DispNum == Num7)
        {
            PORTB = SEVEN;
        }else if (DispNum == Num8)
        {
            PORTB = EIGHT;                                                                        
        }else if (DispNum == Num9)
        {
            PORTB = NINE;
        }
        break;
    case PortC:
        DDRC = 0xFF;
        if (DispNum == Num0)
        {
            PORTC = ZERO;
        }else if (DispNum == Num1)
        {
            PORTC = ONE;
        }else if (DispNum == Num2)
        {
            PORTC = TWO;
        }else if (DispNum == Num3)
        {
            PORTC = THREE;
        }else if (DispNum == Num4)
        {
            PORTC = FOUR;
        }else if (DispNum == Num5)
        {
            PORTC = FIVE;
        }else if (DispNum == Num6)
        {
            PORTC = SIX;
        }else if (DispNum == Num7)
        {
            PORTC = SEVEN;
        }else if (DispNum == Num8)
        {
            PORTC = EIGHT;                                                                        
        }else if (DispNum == Num9)
        {
            PORTC = NINE;
        }
        break;
    case PortD:
        DDRD = 0xFF;
        if (DispNum == Num0)
        {
            PORTD = ZERO;
        }else if (DispNum == Num1)
        {
            PORTD = ONE;
        }else if (DispNum == Num2)
        {
            PORTD = TWO;
        }else if (DispNum == Num3)
        {
            PORTD = THREE;
        }else if (DispNum == Num4)
        {
            PORTD = FOUR;
        }else if (DispNum == Num5)
        {
            PORTD = FIVE;
        }else if (DispNum == Num6)
        {
            PORTD = SIX;
        }else if (DispNum == Num7)
        {
            PORTD = SEVEN;
        }else if (DispNum == Num8)
        {
            PORTD = EIGHT;                                                                        
        }else if (DispNum == Num9)
        {
            PORTD = NINE;
        }
        break;        
    default:
        break;
    }

}        