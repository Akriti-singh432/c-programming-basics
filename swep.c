#include<stdio.h>
int main(){
    int a=10, b=20, c=30,temp;
    temp=a;
    a=b;
    b=c;
    c=temp;
    printf("a=%d b=%d c=%d\n", a,b,c);
    return 0;
}     
             
