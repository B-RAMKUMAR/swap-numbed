#include <stdio.h>

int main() {
    int a,b;
    printf("ENTER A NUMBER FOR A:");
    scanf("%d",&a);
    printf("ENTER A NUMBER FOR B:");
    scanf("%d",&b);
    printf("BEFORE SWAP THE NUMBER A=%d,B=%d\n",a,b);
    a=a+b;//sum of the number 
    b=a-b;//total(a+b)-b=a
    a=a-b;//total(a+b)-a(where b==)a=b
    printf("AFTER SWAP THE NUMBER A=%d B=%d\n",a,b);

}
