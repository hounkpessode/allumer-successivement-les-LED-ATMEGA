#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	
	DDRB = 0xFF; 
	DDRC = 0x00;

	// Initialisation des ports
	PORTB = 0x00; // Port B à 0
	PORTC |= (1 << 0);

	while (1)
	{
		// Lecture du bouton
		if ((PINC & (1 << 0)) == 0) 
		{
				
		do {
			for (int j = 0; j <= 7; j++)
			{
				PORTB |= ( 1<<j);
				_delay_ms(500);
				
			}
		
			for (int j = 0; j <= 7; j++)
			{
				PORTB&=~( 1<<j);
				_delay_ms(500);
				
			}
		}while ((PINC & (1 << 0)) == 0);
		
		PORTB=0x00;
		
		
			do {
			
			for (int i = 0; i <= 7; i++)
			{
				PORTB = (1 << i) | (1 << (7 - i));
				_delay_ms(500);
				}
				
				}while ((PINC & (1 << 0)) == 0);
			PORTB=0x00;
		
		do {
			
			for (int j = 0; j <= 7; j++)
			{
				PORTB = (1 << j);
				_delay_ms(500);
			}
			
		}while ((PINC & (1 << 0)) == 0);
		PORTB=0x00;
		
		do {
			
			for (int j = 0; j <= 7; j++)
			{
				PORTB = (1 << j);
				j++;
				_delay_ms(500);
				
			}
			
		}while ((PINC & (1 << 0)) == 0);
		PORTB=0x00;
		
		
		do {
			
			for (int j = 1; j <= 7; j++)
			{
				PORTB = (1 << j);
				j++;
				_delay_ms(500);
				
			}
			
		}while ((PINC & (1 << 0)) == 0);
		PORTB=0x00;
		}
	}

	return 0;
}
