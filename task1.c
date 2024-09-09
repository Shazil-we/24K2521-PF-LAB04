#include <stdio.h>
int main(){
    int of3 = 0;
    printf("Enter a number: ");
    scanf("%d" , &of3);
    if(of3%3 == 0){
        printf("The number %d is multiple of 3 " , of3);
    }else{
        printf("The number %d is not a multiple of 3 " , of3);
    }
    return 0;
}