#include<stdio.h>
int main(){
    float a[5],sum=0,avg,dev;
    int i;
    for(i=0;i<5;i++)

{
    scanf("%f",&a[i]);

}
for(i=0;i<5;i++)
{
    sum +=a[i];
}
avg=sum/5;
printf("average=%.2f\n",avg);
for(i=0;i<5;i++)
{
    dev= a[i]*avg;
    printf("deviation of value %.2f=%.2f\n",a[i],dev);



}
    return 0;
}