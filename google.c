//f(n)�����Ķ���Ϊ0~n�а�����1�ĸ���
//f(13)��0~13�а���1���� 1��10��11��12��13������f(13)=6
//f(1) = 1��
//����һ��f(n)=n��nֵ
#include <stdio.h>
#include <math.h>
int main()
{
	int m,n,a,b,c,i,j;
	for(m=2;;m++){
		b=0;
		for(a=1;a<=m;a++){
			c=a;
			n=0;
			while(c!=0){
				c=c/10;
				n++;
			}
			c=a;
			for(j=n;j>=0;j--){
				i=pow(10,n);
				if(c/i==1){
					b++;
				}
				c=c%i;
			}
		}
		if(m==b){
			break;
		}
		printf("%d\n",m);
	}
	printf("%d",b);
}
