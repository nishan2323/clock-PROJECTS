#include <stdio.h>
#include <windows.h>
void main()
{ 
int h,m,s;
int d=1000;//we add delay of 1000 miliseconds and use it in sleep
printf("set time: \n");
scanf("%d%d%d",&h,&m,&s);
  if(h>12 || m>60 || s>60 )
  {
	printf("ERROR! \n");
	exit(0);
  }
  while(1)//this is an infinite loop which runs infinitly
  {
	s++;
	if(s>59)
	{
		m++;
		s=0;
	}
	if(m>59)
	{
		h++;
		m=0;
	}
	if(h>12)
	{
		h=1;
	}
	 printf("\n clock:");
	 printf("\n %02d:%02d:%02d",h,m,s);//time format
	 Sleep(d); //slow downs the while loop

	system("cls");
  }   
}