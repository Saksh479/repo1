#include<stdio.h>
int main() {
     int a,b;
     scanf("%d %d",&a,&b);
     int sum=a+b;
     int pro=a*b;
     int div=a/b;
     int sub=a-b;
     printf("\nSum= %d\nDifference= %d\nMultiplication=%d\nDivision=%d",sum,sub,pro,div);
     return(0);
}