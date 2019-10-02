#include <stdio.h>

int main(){
	int n,i,j,k,c,x,a,b,d;
	c=1;
	x=1;
	printf("Escriba el numero: ");
	scanf("%d",&n);
	for(j=2;j<=n;j++){ //contador
		x=x+2;
	}
	for(i=1;i<=n;i++){
		for(k=1;k<=(x-c)/2;k++){ //impresor de espacios
			printf("  ");
		}
		for(a=i;a<=c;a++){ //primer for
			if(a<=10){
				printf("%d ",a);
			}
		}
		for(b=a-2;b>=i;b--){ //segundo for
			if (b<=10){ //valor estable 9
				printf("%d ",b);
			}
		}
		for(k=1;k<=(x-c)/2;k++){ //impresor de espacios
			printf("  ");
		}
		c=c+2;
		printf("\n");
	}
}