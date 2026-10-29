#include<stdio.h>
int main(){
     int a,b;
     char ops;
     printf("Enter a  value:\n");
     scanf("%d",&a);
     printf("Enter operator:\n");
     scanf(" %c",&ops);
     printf("Enter b  value:\n");
     scanf("%d",&b);
    
     switch(ops){
          case '+':printf("Add: %d\n",a+b);
          break;
          case '-':printf("Sub: %d\n",a-b);
          break;
          default:printf("Invalid Operator\n");
          break;
     }
}