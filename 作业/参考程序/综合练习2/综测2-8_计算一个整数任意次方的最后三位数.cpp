//��α������Խ�������Ǳ���Ĺؼ���������η�ʱÿ��һ�ζ�ȡ�����λ�������Ͳ������Խ������
#include<stdio.h>
int main() {
    int i,x,y,z=1;
    scanf("%d%d",&x,&y);				//�����������
    for(i=1;i<=y;i++)  z=z*x%1000;
    if(z>=100)  printf("%d\n",z);		//������
    else  printf("%d\n",z);
 
}




