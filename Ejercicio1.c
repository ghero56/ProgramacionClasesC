#include <stdio.h>

int main(){
	int n,j,i;
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		for(j=0;j<i;j++)
			printf("%d ", j+1);
		for(j=i-1;j>0;j--)
			printf("%d ", j);
		printf("\n");
	}
	return 0;
}