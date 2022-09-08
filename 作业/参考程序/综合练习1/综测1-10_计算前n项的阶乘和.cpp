#include <stdio.h>
int main() {
	int n,i,j,p,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++) {
		for(p=1,j=1;j<=i;j++)  p=p*j;
		sum=sum+p;
	}
	printf("%d\n",sum);
	return 0;
}
