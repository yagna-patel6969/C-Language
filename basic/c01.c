#include<stdio.h>
int main() {
    float r = 5 ;
    float v = 4 * 3.14 * r * r * r /3 ;
    printf("the value of volume for given radius is : %f", v) ; 
    float _r = 2 ;
    float a = 3.14 * _r * _r ;
    printf("\n the value of area for given radius is ; %f" , a) ;
    float maths= 89 ;
    float science= 92;
    float ss= 80 ; 
    float sanskrit= 90 ;
    float gujrati = 77 ;
    float english = 88 ;
    float percentage = (maths + science + ss + sanskrit + gujrati + english )/ 6;
    printf("\n for given marks your percentage is :  %f", percentage);
    printf("\n lets calculate si");
    float principal,rate,time,si;
    printf("\n give value of principal :"); 
    scanf("%f", &principal);
    printf("give value of rate :");
    scanf("%f", &rate) ;
    printf("give value of time :");
    scanf("%f", & time) ;
    si= (principal*rate*time)/100;
    printf("your simple intrest is : %f", si); 
    printf("\n lets do sum \n");
    printf("give me first value:");
    float x;
    scanf("%f",&x);
    printf("\n give me second value:");
    float y;
    scanf("%f",&y);
    float sum = x+y;
    printf("for given value your answer is : %f",sum);
    printf("\n lets devide two value ");
    printf("\n give me first value : ");
    float X ;
    scanf("%f",&X);
    printf("nice , you give me one value now give me second value :");
    float Y;
    scanf("%f",&Y);
    float devide = X/Y;
    printf("for given value your answer is : %f",devide);
    

    
     return 0; 
} 
