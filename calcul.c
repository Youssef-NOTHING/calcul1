#include<stdio.h>

int main(){

    int number1, number2;
    char choix;

    printf("Donner le premier nombre:");
    scanf("%d", &number1);
    getc(stdin);
    printf("Donner l'operation:");
    scanf("%c", &choix);
    printf("Donner le premier nombre:");
    scanf("%d", &number2);

    switch (choix)
    {
    case '+':
        printf("La somme de %d + %d est:%d", number1,number2, number1 + number2);
        break;

    case '-':
        printf("La saustraction de %d - %d est:%d", number1,number2, number1 - number2);
        break;
    case '*':
        printf("La multipmlication de %d * %d est:%d", number1,number2, number1 * number2);
        break;
    case '/':
    if (number2!= 0)
    {
        printf("La somme de %d / %d est:%d", number1,number2, (float) number1/number2);
         break;
    }else{
        printf("math error. Impossible de diviser par 0 \n");
         break;
    }
    
        break;
    
    default: printf("OPERATEUR INCONNUE\n");
        break;
    }
}