#include <stdio.h>
int main() {
  int x[100],i,j,k,m,n;
  int temp;
  scanf("%d",&m);//m<100
  for(i=0;i<m;i++){//
  scanf("%d",&n);
  x[i]=n;
}
  for(j=0;j<m;j++)
  	for(k=0;k<m-1-j;k++){
  	if (x[k]>x[k+1]){
  	temp=x[k];
  	x[k]=x[k+1];
  	x[k+1]=temp;
  }
  }
   for(i=0;i<m;i++){
   	printf("%d",x[i]);
   }  
   return 0;
}
      





