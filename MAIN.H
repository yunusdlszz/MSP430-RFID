#include  <msp430x41x.h>



#define NSS522_1       P1OUT |=  BIT7              
#define NSS522_0       P1OUT &=~ BIT7              
#define SCK522_1       P1OUT |=  BIT6              
#define SCK522_0       P1OUT &=~ BIT6              
#define SI522_1        P1OUT |=  BIT5           
#define SI522_0        P1OUT &=~ BIT5              
#define SO522          ((P1IN >> 4) & 0x01)              
#define RST522_1       P1OUT |=  BIT3        
#define RST522_0       P1OUT &=~ BIT3        

#define LED_GREEN_ON   P6OUT &=~  BIT3
#define LED_GREEN_OFF  P6OUT |= BIT3 


void InitializeSystem(void);                                   
void DelayMs(unsigned int _MS);                                      




