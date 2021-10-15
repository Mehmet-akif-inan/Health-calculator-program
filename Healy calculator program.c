#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{   float kilo;
float height;
float vsi;
printf("Write your weight: ");
scanf("%f",&kilo);
printf("Write your height (cm cinsinden): ");
scanf("%f",&height);
vsi = kilo/pow(height/100,2);
printf("Your body mass index %.2fn",vsi);

if(vsi<=18.5){
printf("Weak ");
printf("You should gain %.2f kilos ",18.5*pow(height/100,2-kilo));
}
else if(vsi<=24.9){
printf("Normal");        }
else if(vsi<=29.9){
printf("Overweight");
printf("You should lose %.2f kilos ",kilo-24.9*pow(height/100,2));
}
else if(vsi<=39.9){
printf("Obesity");
printf("You should lose %.2f kilos",kilo-24.9*pow(height/100,2));
}
return 0;
}
