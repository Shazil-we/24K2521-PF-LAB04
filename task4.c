#include <stdio.h>
int main(){
    float Shopping = 0;
    float actualamount , savedamount , amountafterdiscount;
    printf("Enter the bill amount: ");
    scanf("%f" , &Shopping);
    if (Shopping <= 2000 && Shopping>=500){
        amountafterdiscount = Shopping - Shopping*0.05;
        savedamount = Shopping - amountafterdiscount;
        actualamount = amountafterdiscount + savedamount;
        printf("The amount after discount is %f The amount saved is %f The actual amount is %f" , amountafterdiscount , savedamount , actualamount);
    }else if (Shopping <= 2000){
        amountafterdiscount = Shopping - Shopping*0.10;
        savedamount = Shopping - amountafterdiscount;
        actualamount = amountafterdiscount + savedamount;
        printf("The amount after discount is %f The amount saved is %f The actual amount is %f" , amountafterdiscount , savedamount , actualamount);
    }else if (Shopping >= 2000 && Shopping <= 4000){
        amountafterdiscount = Shopping - Shopping*0.20;
        savedamount = Shopping - amountafterdiscount;
        actualamount = amountafterdiscount + savedamount;
        printf("The amount after discount is %f The amount saved is %f The actual amount is %f" , amountafterdiscount , savedamount , actualamount);
    }else if (Shopping >= 4000 && Shopping <=6000){
        amountafterdiscount = Shopping - Shopping*0.35;
        savedamount = Shopping - amountafterdiscount;
        actualamount = amountafterdiscount + savedamount;
        printf("The amount after discount is %f The amount saved is %f The actual amount is %f" , amountafterdiscount , savedamount , actualamount);
    }else if (Shopping >= 6000){
        amountafterdiscount = Shopping - Shopping*0.05;
        savedamount = Shopping - amountafterdiscount;
        actualamount = amountafterdiscount + savedamount;
        printf("The amount after discount is %f The amount saved is %f The actual amount is %f" , amountafterdiscount , savedamount , actualamount);
    }else {
        printf("No discount for you");
    }
    return 0;
}
