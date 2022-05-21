#include<stdio.h>

int main() {
     int age;
     char str[20];
     char roll[20];
         printf("Roll number :");
         fgets(roll, sizeof(roll), stdin);
         printf("\nName:");
         fgets(str, sizeof(str), stdin);
         printf("\nAge :");
         scanf("%d",&age);
         printf("\nName: %s",str);
         printf("\nRoll number: %s",roll);
         printf("\nAge: %d",age);
        
     return(0);
}