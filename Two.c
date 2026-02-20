#include<stdio.h>
#include<math.h>
int main (){
    float a,b,c,d,x,y;
   
    printf("enter any three numbers");
    scanf("%f%f%f",a,&b,&c);
    d=b*b-4*a*c;
    if(d>0)
    {
        x=(-b+ sqr +(d))/(2*a);
        
        y=(-b-sqr(d))/(2*a);
        printf("roots are real\n:");
        printf("x=%f,y=%f",x,y);

    }
else if (d==0)
{
    x=-b/(2*a);
    printf("roots are real and equal/");
    printf("x=%f",x);

}
else{
    printf("roots are imaginary");

}
return 0;

}