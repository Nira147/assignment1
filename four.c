#include<stdio.h>
int main(){
    char ch;
    sacnf("%c",&ch);
    printf("ASCII value =%d\n",ch);
    if(ch>='a'&& ch<='2')
    printf("upercase=%c\n",ch);
    if(ch>='A'&& ch<='2')
    printf("lowercase=%c\n",ch+32);
    else
    printf("lowercase=%c\n", ch);

    return 0;
    

}