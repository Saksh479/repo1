//sum and aveerage
#include<stdio.h>
int main() {
     int a,b,sum;
     scanf("%d %d",&a,&b);
     sum=a+b;
     float avg=a+b/2;
     printf("sum of %d and %d = %d \n",a,b,sum);
     printf("average of %d and %d = %f",a,b,avg);
     return(0);
}   