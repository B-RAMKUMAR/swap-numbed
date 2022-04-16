#include <stdio.h>

int main() {
    int ch;
    printf("Pick an item: \n1.Pizza\n2.Burger\n3.Pasta\n4.French Fries\n5.Sandwich\n");
    printf("ENTER YOUR CHOICE:");
    scanf("%d",&ch);
    switch(ch){
        case 1:
         printf("Food item-Pizaa\n");
         printf("Price-Rs 239");
         break;
        case 2:
         printf("Food item-Burger\n");
         printf("Price-Rs 129");
         break;
        case 3:
         printf("Food item-Pasta\n");
         printf("Price-Rs 179");
         break;
        case 4:
         printf("Food item-French Fries\n");
         printf("Price-Rs 99");
         break;
        case 5:
         printf("Food item-Sandwich\n");
         printf("Price-Rs 149");
    }
    
    return 0;
}
