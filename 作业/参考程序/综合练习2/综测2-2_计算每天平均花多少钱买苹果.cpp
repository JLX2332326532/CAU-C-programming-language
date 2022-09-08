#include <stdio.h>
int main() {
	int i,j;
	double sum=0;
	for(i=2,j=1;i<=100;i*=2,j++)
		sum=sum+i*0.8;
	printf("%.2f\n",sum/(j-1));
	return 0;
}