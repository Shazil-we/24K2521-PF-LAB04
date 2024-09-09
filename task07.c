#include <stdio.h>
int main(){
    int LightSensorValue;
    printf("Enter Light Sensor Value: " );
    scanf("%d" , &LightSensorValue);
    if(LightSensorValue >= 500 && LightSensorValue <=1000){
        printf("You are exposed to the sun");
    }else if(LightSensorValue < 500 && LightSensorValue >=100){
        printf("lighting");
    }else if(LightSensorValue>0 && LightSensorValue < 100){
        printf("Evening ");
    }else{
        printf("Invalid Input!");
    }
}