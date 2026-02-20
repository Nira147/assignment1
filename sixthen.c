#include<stdio.h>
int main(){
    int i,a[100], n, maximun;
    printf("enter how many strore");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    printf("enter the number %d",i);
    scanf("%d",&a[i]);
    {
        maximun=a[0];

        for(i=0;i<n;i++){

            if(maximun<a[i]){

                maximum=a[i];
            }
            printf("The maximum is %d\n",maximum);

            else {

                printf("minimum");

            }



            return 0;
        }
    }
}