#include<stdio.h>
int calsum(int x, int y, int z);
int main(){
    int a,b,c,sum;
    printf("Enter a first numbers");
    scanf("%d",&a);
     printf("Enter a Second numbers");
      scanf("%d", &b);
      printf("Enter a Third numbers");
       scanf("%d", &c);
    sum=calsum(a,b,c);
    printf("sum=%d\n",sum); 
    return 0;
}
int calsum(int x, int y, int z) 
{
    int d;
    d=x+y+z;      
    return(d);
}