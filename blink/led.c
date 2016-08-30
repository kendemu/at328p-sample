#include <avr/io.h>
#include <util/delay.h>

const int BLINK_MS = 1000;

int main(void){
  DDRB |= _BV(DDB5);
  
  while(1) {
    PORTB |= _BV(PORTB5);
    _delay_ms(BLINK_MS);

    PORTB &= ~_BV(PORTB5);
    _delay_ms(BLINK_MS);
  }
}
