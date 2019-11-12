//小明有 5 张数字卡片，上面分别为数字 1， 2， 3， 6， 9。小明想用这 5 张数字卡片组成一个最大的 5 位
//素数，这个五位数是_______。
//编程：任意输入5个数字，将它们组合为最大的5位素数输出。如果不存在5位素数，则输出ERROR。
#include <stdio.h>
int main()
{
	int x[200],y[10],i,j,k,l,m,temp,h,n,t,a,num;
	n=5;
	h=0;

	for(i=0;i<n;i++){
	scanf("%d",&y[i]);	
	}
	for(i=0;i<n;i++){
		for(j=0;j<n-1-i;j++){
			if(y[j]<y[j+1]){
				temp=y[j];
				y[j]=y[j+1];
				y[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			for(k=0;k<n;k++){
				for(l=0;l<n;l++){
					for(m=0;m<n;m++){
						if(i!=j&&i!=k&&i!=l&&i!=m&&j!=k&&j!=l&&j!=m&&k!=l&&k!=m&&l!=m){
							t=y[i]*10000+y[j]*1000+y[k]*100+y[l]*10+y[m];
							x[h]=t;
							h++;
							printf("%d\n",t);
						}

						}
					}
				}
			}
		}
    for(h=0;h<120;h++){
    		num=0;
        for(a=2;a<x[h];a++){
    	    	if(x[h]%a==0){
    	    		num++;
				}
			}	
				if(num==0){
					m=x[h];
					break;
		}
    }
    if (m<10000){
    	printf("ERROR");
	} 
	else{
    printf("%d",m);
}
 }
