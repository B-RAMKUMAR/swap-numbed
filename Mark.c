#include <stdio.h>

int main() {
    int a;
    printf("ENTER A MARK:");
    scanf("%d",&a);
    if(a<0 || a>100){
        printf("ENTER A VALID MARK BETWEEN 0-100");
    }
    else if (a==100 || a>=85){
     printf("GRADE A");
    }
    else if(a==84 || a>=70){
        printf("GRADE B");
    }
    else if(a==69 || a>=55){
        printf("GRADE C");
    }
    else if(a==54 || a>=40){
        printf("GRADE D");
    }
    else{
        printf("GRADE F");
    }
    
    return 0;
}
