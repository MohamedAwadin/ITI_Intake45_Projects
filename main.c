#include<stdio.h>

void Uart_sendBute(void)
{
	printf("hello from uart");

}
void Dio_WriteChannel(void)
{
	printf("DIO write Channel");
}

int main(){

	printf("hello\n");
	Uart_sendBute();
	Dio_WriteChannel();

	
	return 0 ;
}

