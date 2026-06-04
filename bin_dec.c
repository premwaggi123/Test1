#include<stdio.h>
#include<math.h>
int main()
{
	int bin, temp,  i=0, inc=0, dec=0;
	printf("Enter binary digit:");
	scanf("%d",&bin);
        temp=bin;
	while(temp != 0)
	{
		i = temp%10;
		dec = dec + (i*pow(2,inc));
		inc++;
		temp /= 10;
	 
	}
	printf("decimal number:%d\n",dec);
	return 0;
}
