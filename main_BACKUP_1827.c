#include<stdio.h>

void Uart_sendBute(void)
{
	printf("hello from uart");

}
void Dio_WriteChannel(void)
{
	printf("DIO write Channel");
}

<<<<<<< HEAD

void newcommit();
=======
void newcommitonMain(void);

>>>>>>> be45cef (commit on main)
int main(){

	printf("hello\n");
	Uart_sendBute();
	Dio_WriteChannel();

	
	return 0 ;
}

