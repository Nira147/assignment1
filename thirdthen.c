// calculating factorials(using loops)

#include<stdio.h>
int main(){
    int n, fact=1,i
    printf("enter the numbers");
    scanf("%d",&n);
    if(n<0)
        printf("factorial is not possible ");{

         } else if (n==0){

            printf("factorail is %d");

            }
            else{

                for(i=n;i>0;i--)
            {
dac=fact*i;
            }
            printf("factorial=%d",fact);
        }

        return 0;
    

    


}