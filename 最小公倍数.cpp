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
    printf("a和不互质"); 
else
    printf("a和b互质");
    return 0;
}
