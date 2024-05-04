#include<stdio.h>
#include<windows.h>
int main ()
{
	int h,m,s;
	int d=1000;  // we add a dealy of 1000 millisecond and we use it in the function sleep
	printf ("set time:\n");
	scanf("%d %d %d",&h ,&m ,&s);
	if (h>12||m>60||s>60)
	{
		printf("error \n");
		exit(0);
	}
	
	while(1)   // this is an infinite loop and anything inside will repeat it 
	{
	    if (s>59)
		{
	    	m++;
	    	s=0;
   	    }
   	    if (m>59)
        {
        	h++;
        	m=0;
		}
		if (h>12)
		{
			h=1;
		}
		printf("\n clock:");
		printf("\n %02d:%02d:%02d",h,m,s);  // this write our time in this format 00:00:00
		sleep(d);  // the function sleep slows down the wile loop and make it more like a real clock
		
		system("cls"); //this clear the screen
		
	}	
}