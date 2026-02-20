#include<stdio.h>
int main(){
    float m1,m2,m3,m4,m5,total,average;
    scanf("%F%f%f%f%f",&m1,&m2,&m3,&m4,&m5);

    total=m1+m2+m3+m4+m5;
    average=total/5;
    printf("total=%.2f\n",total);
    printf("average=%.2f\n",average);

    return 0;

}