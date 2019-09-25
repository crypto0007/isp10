#include<stdio.h>
#include<stdlib.h>
#include<signal.h>

int main(void)
{
	int i;
	for(i=1;i<=32;i++)
	{
		if(signal(i,SIG_IGN)==SIG_ERR)
		{
			printf("Singnal %d can't be haha\n",i);
		}
	}
}

//Singnal 9 can't be haha
//Singnal 19 can't be haha
//Singnal 32 can't be haha

