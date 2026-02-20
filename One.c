#include<stdio.h>
int main(){
    float p,t,r,SI;
    printf("Enter principal,time, rate in interest");
    scanf("%F%F%f",&p,&t,&r);
    SI=(p*t*r)/100;
    printf("simple interest=%f",SI);

    return 0;
    
}