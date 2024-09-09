#include <stdio.h>
int main(){
    int num1 = 0;
    int num2 = 0;
    int op;
    printf("Enter the first number: " );
    scanf("%d" , &num1);
    printf("Enter the second number: " );
    scanf("%d" , &num2);
    printf("Choose the operation: \n 1. Addition \n 2. Subtraction \n 3. Division \n 4. Multiplication \n 5. Modulus ");
    scanf("%d" , &op);
    switch(op){
        case 1:
            printf("Adding %d and %d we get %d" , num1  , num2 , num1+num2);
            break;
        case 2:
            printf("Subtracting %d and %d we get %d" , num1  , num2 , num1-num2);
            break;
        case 3:
            printf("Dividing %d and %d we get %d" , num1  , num2 , num1/num2);
            break;
        case 4:
            printf("Multiplying %d and %d we get %d" , num1  , num2 , num1*num2);
            break;
        case 5:
            printf("Modulus of %d and %d we get %d" , num1  , num2 , num1%num2);
            break;
        default:
            printf("Invalid input!! ");
    }
    return 0;
}