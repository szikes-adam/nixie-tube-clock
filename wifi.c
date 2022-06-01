#include "wifi.h"

volatile char red_ratio = 10;
volatile char green_ratio = 150;
volatile char blue_ratio = 120;

void wifi_init(void) {

}

inline char wifi_get_led_red_ratio(void) {
  return red_ratio;
}

inline char wifi_get_led_green_ratio(void) {
  return green_ratio;
}

inline char wifi_get_led_blue_ratio(void) {
  return red_ratio;
}


#if 0
 char data[2][26]={
    "OK", "+IPD:0,15,20220425T183150"
  };

  int i;
  char* ipd="+IPD:";
  char found = 1;
  for(i=0;i<sizeof(*ipd)-1;i++){
    if(ipd[i] != data[1][i]){
      found = 0;
    }
  }

  if(!found){
    return 0;
  }

  int h, m;
      char buff[3];
  for(i=19;i<21;i++){
    buff[i-19] = data[1][i];
  }
  buff[2] = 0;
    h = atoi(buff);

  for(;i<23;i++){
    buff[i-21] = data[1][i];
  }
  m = atoi(buff);

  if (m == 1){
    _delay_ms(1);
  }

    while(1) // Infinite loop
    {
      _delay_ms(500);  // Delay for 500 ms
      tbi(PORTB, (h+m)); // the toggling takes place here
    }

    return 0;
}
#endif
