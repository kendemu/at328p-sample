#include <avr/io.h>
#include <util/delay.h>



int main(void){
  //set port
  DDRD |= _BV(DDD3);
  
  int i;

  while(1){
    /*
      H sound
    */
    for(i = 0; i < 4; i++){
      PORTD |= _BV(PORTD3);
      _delay_ms(1333);
      PORTD &= ~_BV(PORTD3);
      _delay_ms(1333);
    }
    _delay_ms(3000);
    /*
      E
    */
    for(i = 0; i < 1; i++){
      PORTD |= _BV(PORTD3);
      _delay_ms(1333);
      PORTD &= ~_BV(PORTD3);
      _delay_ms(1333);
    }      
    _delay_ms(3000);
    /*
      L
    */
    {
      PORTD |= _BV(PORTD3);
      _delay_ms(1333);
      PORTD &= ~_BV(PORTD3);
      _delay_ms(1333); 
      PORTD |= _BV(PORTD3);
      _delay_ms(2666);
      PORTD &= ~_BV(PORTD3);
      _delay_ms(2666);
      PORTD |= _BV(PORTD3);
      _delay_ms(1333);
      PORTD &= ~_BV(PORTD3);
      _delay_ms(1333); 
      PORTD |= _BV(PORTD3);
      _delay_ms(1333);
      PORTD &= ~_BV(PORTD3);
      _delay_ms(1333); 
    }
    _delay_ms(3000);
    /*
      L
    */
    {
      PORTD |= _BV(PORTD3);
      _delay_ms(1333);
      PORTD &= ~_BV(PORTD3);
      _delay_ms(1333); 
      PORTD |= _BV(PORTD3);
      _delay_ms(2666);
      PORTD &= ~_BV(PORTD3);
      _delay_ms(2666);
      PORTD |= _BV(PORTD3);
      _delay_ms(1333);
      PORTD &= ~_BV(PORTD3);
      _delay_ms(1333); 
      PORTD |= _BV(PORTD3);
      _delay_ms(1333);
      PORTD &= ~_BV(PORTD3);
      _delay_ms(1333); 
    }
    _delay_ms(3000);
    /*
      O sound
    */
    for(i = 0; i < 3; i++){
      PORTD |= _BV(PORTD3);
      _delay_ms(2666);
      PORTD &= ~_BV(PORTD3);
      _delay_ms(2666);
    }
    _delay_ms(3000);
    /*
      W sound
    */
    {
      PORTD |= _BV(PORTD3);
      _delay_ms(1333);
      PORTD &= ~_BV(PORTD3);
      _delay_ms(1333); 
      PORTD |= _BV(PORTD3);
      _delay_ms(2666);
      PORTD &= ~_BV(PORTD3);
      _delay_ms(2666);
      PORTD |= _BV(PORTD3);
      _delay_ms(2666);
      PORTD &= ~_BV(PORTD3);
      _delay_ms(2666);      
    }
    _delay_ms(3000);

    /*
      O sound
    */
    for(i = 0; i < 3; i++){
      PORTD |= _BV(PORTD3);
      _delay_ms(2666);
      PORTD &= ~_BV(PORTD3);
      _delay_ms(2666);
    }
    _delay_ms(3000);

    /*
      R sound
    */
    {
      PORTD |= _BV(PORTD3);
      _delay_ms(1333);
      PORTD &= ~_BV(PORTD3);
      _delay_ms(1333); 
      PORTD |= _BV(PORTD3);
      _delay_ms(2666);
      PORTD &= ~_BV(PORTD3);
      _delay_ms(2666);
      PORTD |= _BV(PORTD3);
      _delay_ms(1333);
      PORTD &= ~_BV(PORTD3);
      _delay_ms(1333); 
    }
    _delay_ms(3000);

    /*
      L
    */
    {
      PORTD |= _BV(PORTD3);
      _delay_ms(1333);
      PORTD &= ~_BV(PORTD3);
      _delay_ms(1333); 
      PORTD |= _BV(PORTD3);
      _delay_ms(2666);
      PORTD &= ~_BV(PORTD3);
      _delay_ms(2666);
      PORTD |= _BV(PORTD3);
      _delay_ms(1333);
      PORTD &= ~_BV(PORTD3);
      _delay_ms(1333); 
      PORTD |= _BV(PORTD3);
      _delay_ms(1333);
      PORTD &= ~_BV(PORTD3);
      _delay_ms(1333); 
    }
    _delay_ms(3000);

    /*
      D
    */
    {
      PORTD |= _BV(PORTD3);
      _delay_ms(2666);
      PORTD &= ~_BV(PORTD3);
      _delay_ms(2666);
      PORTD |= _BV(PORTD3);
      _delay_ms(1333);
      PORTD &= ~_BV(PORTD3);
      _delay_ms(1333); 
      PORTD |= _BV(PORTD3);
      _delay_ms(1333);
      PORTD &= ~_BV(PORTD3);
      _delay_ms(1333); 
    }
    _delay_ms(3000);


    _delay_ms(5000);    
  }
}
