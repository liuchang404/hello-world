#include <stdio.h>
int main()
{
	int a,b;
	int c;
	scanf("%d %d",&a,&b);
	while(1){
		c=a%b;
	if(c==0)
		break;
	else
	    a=b;
		b=c;
}
if (b!=1)
    printf("a�Ͳ�����"); 
else
    printf("a��b����");
    return 0;
}
