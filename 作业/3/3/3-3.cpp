#include<stdio.h>
#include<math.h>
int main()
{
	float a,c,d;
	char b;
	scanf("%f%c%f",&a,&b,&c);
	switch(b)
	{
		case '+':d=a+c; printf("%.2f",d);break;
		case '-':d=a-c; printf("%.2f",d);break;
		case '*':d=a*c; printf("%.2f",d);break;
		case '/':{if(c==0) {putchar('e');putchar('r');putchar('r');putchar('o');putchar('r');break;} 
	else d=a/c; printf("%.2f",d);}
				 break;

	}

	return 0;
}