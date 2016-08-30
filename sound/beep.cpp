#include <avr/io.h>
#include <util/delay.h>

const int time[9] = {333,333,333,666,666,666,333,333,333};


int main(void){
  DDRD |= _BV(DDD3);
  

  int i;

  while(1){
    for(i = 0; i < 9; i++){
      PORTD |= _BV(PORTD3);
      _delay_ms(time[i]);

      PORTD &= ~_BV(PORTD3);
      _delay_ms(time[i]);
    }
  }
}
