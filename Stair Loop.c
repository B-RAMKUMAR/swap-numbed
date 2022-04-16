#include <stdio.h>

int main(){
    int I,j,k;
    printf("how many stairs need:");
    scanf("%d",&k);
    for(I=0;I<k;I++){
       for(j=0;j<=I;j++){
       printf("01");
    }
      printf("\n");
    }
}
