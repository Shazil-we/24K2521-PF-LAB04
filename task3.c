#include <stdio.h>
int main(){
    char Character;
    printf("Enter a character ");
    scanf("%c" , &Character);
    if(Character >= 'a' && Character <=  'z'){
        printf("The character is lowercase ");
    }else if(Character >= 'A' && Character <=  'Z'){
        printf("The character is uppercase ");
    }else {
        printf("The character is special");
    }
    return 0;
}