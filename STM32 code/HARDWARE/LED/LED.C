#include "led.h"
void LED_Init(void)
{
RCC->APB2ENR|=1<<2;      //ʹ�� PORTA ʱ��  
GPIOA->CRH&=0XFFFFFFF0;
GPIOA->CRH|=0X00000002;  //PA8 �������
//GPIOA->ODR|=1<<4;        //PA8 �����
}
void Led_Flash(u16 time)
{
	  static int temp;
	  if(0==time) LED=1;
	  else		if(++temp==time)	{LED=~LED;temp=0;}
}