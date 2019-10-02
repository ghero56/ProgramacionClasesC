#include <stdio.h>

int main(){
        int i,j,n;
        scanf("%i",&n);
        for(i=n;i>=1;i--){ //esta linea recibe n y lo asigna a i, luego mientras i>=1 le resta
                for(j=1;j<i;j++) //esta linea se reinicia cada ciclo pero imprimimos 1 hasta j>i
                        printf("%d ",j);
                printf("%d ",i);
                printf("\n");
        }
        return 0;
}