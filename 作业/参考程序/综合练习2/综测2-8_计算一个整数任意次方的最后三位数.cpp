//如何避免产生越界问题是本题的关键，这里求次方时每乘一次都取其后三位，这样就不会产生越界问题
#include<stdio.h>
int main() {
    int i,x,y,z=1;
    scanf("%d%d",&x,&y);				//输入底数和幂
    for(i=1;i<=y;i++)  z=z*x%1000;
    if(z>=100)  printf("%d\n",z);		//输出结果
    else  printf("%d\n",z);
 
}




