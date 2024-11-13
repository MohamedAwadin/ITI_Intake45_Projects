#include<stdio.h>

void Uart_sendBute(void)
{
	printf("hello from uart");
}

int main(){

	printf("hello\n");
	Uart_sendBute();
	
	return 0 ;
}
