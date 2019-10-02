#include <stdio.h>

int main(){
	int n,i,j,k,c,x,a,b,d;
	c=1;
	x=1;
	printf("Escriba el numero: ");
	scanf("%d",&n);
	if(n!=1){
		for(j=2;j<=n;j++){
		x=x+2;
		}
		for(i=1;i<=n;i++){	
			for(k=1;k<=(x-c)/2;k++){
				printf("  ");
			}
			for(a=i;a<=c;a++){
				if(a<=9){
					printf("%d ",a);
				}
				else if(a>=10 && a<=19){
					d=a-10;
					printf("%d ",d);
				}
				else if(a>=20 && a<=29){
					d=a-20;
					printf("%d ",d);
				}
				else if(a>=30 && a<=39){
					d=a-30;
					printf("%d ",d);
				}
				else if(a>=40 && a<=49){
					d=a-40;
					printf("%d ",d);
				}
				else if(a>=50 && a<=59){
					d=a-50;
					printf("%d ",d);
				}
				else if(a>=60 && a<=69){
					d=a-60;
					printf("%d ",d);
				}
				else if(a>=70 && a<=79){
					d=a-70;
					printf("%d ",d);
				}
				else if(a>=80 && a<=89){
					d=a-80;
					printf("%d ",d);
				}
				else if(a>=90 && a<=99){
					d=a-90;
					printf("%d ",d);
				}
				else if(a>=100 && a<=109){
					d=a-100;
					printf("%d ",d);
				}
			}
			for(b=a-2;b>=i;b-=1){
				if (b<=9){
					printf("%d ",b);
				}
				else if(b>=10 && b<=19){
					d=b-10;
					printf("%d ",d);
				}
				else if(b>=20 && b<=29){                                        
					d=b-20;
					printf("%d ",d);
				}
				else if(b>=30 && b<=39){
					d=b-30;
					printf("%d ",d);
				}
				else if(b>=40 && b<=49){
					d=b-40;
					printf("%d ",d);
				}
				else if(b>=50 && b<=59){
					d=b-50;
					printf("%d ",d);
				}
				else if(b>=60 && b<=69){
					d=b-60;
					printf("%d ",d);
				}
				else if(b>=70 && b<=79){
					d=b-70;
					printf("%d ",d);
				}                                                       
				else if(b>=80 && b<=89){                                        
					d=b-80;                                                 
					printf("%d ",d);
				}
				else if(b>=90 && b<=99){
					d=b-90;                                                 
					printf("%d ",d);
				}                                                       
				else if(b>=100 && b<=109){
					d=b-100;
					printf("%d ",d);
				}
			}
			for(k=1;k<=(x-c)/2;k++){
				printf("  ");
			}
			c=c+2;
			printf("\n");
		}
	}
	if(n==1){
		printf("1");
	}
}

                
