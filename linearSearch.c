#include<stdio.h>
int main(void){
     int a[] ={2,4,10,11,13,17};
     int target = 11;
     for(int i=0;i<6;i++){
          if(a[i] == target){
               printf("element found at :%d\n",i);
               return 0;
          }
     }
     printf("Element not Found:>\n");
     return 0;
}