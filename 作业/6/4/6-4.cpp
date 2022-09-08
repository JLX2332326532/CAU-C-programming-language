#include<stdio.h>
int prime(int y)
{
	int i;
	int a=0;  
    int num=y;  
    for(i=2;i<num;i++){
        if(num%i==0){
            a++;  
        }
    }
    if(a==0){
        return 1;
    }else{
        return 0;
    }
}
int main()
{
	int a,i,j,n;
	scanf("%d",&a);
	if(a%2==1||a<6)
	{
		printf("Input an even num (>=6)");
	}
	else
	{
		for(i=1;i<=a;i++)
		{
			if(prime(i)==0) continue;

			for(j=1;j<=a;j++)
			{
				if(prime(j)==0) continue;
				if(a==i+j) break;
			}
		}
	if(i==a);
	else
		printf("%d+%d",i,j);
	}
	return 0;
}


