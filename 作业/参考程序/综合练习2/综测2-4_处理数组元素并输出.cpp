#include<stdio.h>
int main() {
	int i,a[10],b[9];
	for(i=0;i<10;i++)  scanf("%d",&a[i]);
	for(i=0;i<9;i++)  b[i]=a[i+1]/a[i];
	for(i=0;i<9;i++) {
		printf("%3d",b[i]);
		if(i%3==2)
		printf("\n");
	}
	return 0;
}