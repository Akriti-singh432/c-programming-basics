/*#include<stdio.h>
int main(){
    int i,n, fact=1;
    printf("Enter a Number:");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        fact =fact*i;
    }
    printf("Factorial of %d is: %d", n, fact);
    return 0;
}          
#include<stdio.h>
int main(){
    int i,n,rev=0;
    printf("Enter a Number:");
    scanf("%d", &n);
    while(n>0){
        rev=rev*10 + n%10;
        n=n/10;
    }
    printf("Reverse of the number is: %d",rev);
    return 0;
}

#include<stdio.h>
int main(){
    int i,n;
    printf("Enter a number:");
    scanf("%d", &n);
    for(i=1; i<=10; i++){
        printf("%d * %d =%d\n", n, i, n*i);
    }
    return 0;
}
#include<stdio.h>
int main(){
    int i,n,fact=1;
    printf("Enter a Number:");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        fact =fact*i;
    }
    printf("Factorial of %d is: %d",n, fact);
    return 0;
}
#include<stdio.h>
int main(){
    int i,n, sum=0;
    printf("Enter a Number:");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        sum =sum+1;
    }
    printf("Sum of first %d natural number is: %d", n,sum);
    return 0;
}
#include<stdio.h>
int main(){
    int i,n,sum=0;
    printf("Enter a Number:");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        sum =sum+i;
        
    }
    printf("Sum of first %d natural number is: %d", n,sum);
    return 0;
}

#include<stdio.h>
int main(){
    int arr[2][3], i, j, sum = 0;

    printf("Enter a Number for adding:\n");

    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            sum = sum + arr[i][j];
        }
    }

    printf("Sum = %d", sum);
    return 0;
}
#include<stdio.h>
int main(){
    int i,n,fact=1;
    printf("Enter a number:");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
    fact=fact*i;
}
printf("Factorial of %d is : %d", n, fact);
return 0;                       
}                          
                                       
                              
   #include<stdio.h>
int main(){
    int i,n,fact=1;
    printf("Enter a number:");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        fact=fact*i;
    }
    printf("Factorial of %d is : %d", n, fact);
    return 0;
} 

#include<stdio.h>
int main(){
    int i,n,fact=1;
    printf("Enter a number:");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        fact= fact*i;
    }
    printf("Factorial= %d\n", fact);
    return 0;
}
********************************** Pointer Program ************************************

#include <stdio.h>

int main() {
    int a = 10;
    int *p;

    p = &a;  // pointer stores address of a

    printf("Value of a = %d\n", a);
    printf("Address of a = %p\n", p);
    printf("Value using pointer = %d\n", *p);

    return 0;
}
#include<stdio.h>
int main(){
    int i,n,fact=1;
    printf("Enter a number:");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        fact=fact*i;
    }
    printf("Factorial = %d", fact);
    return 0;
}*/
#include<stdio.h>
int main(){
    int i,n,rev =0;
    printf("Enter a Number:");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        rev=rev*10 + n%10;
        n= n/10;
    }
    printf("Revrers = %d",rev);
    return 0;
}

