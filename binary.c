#include<stdio.h>
int main(){
     int arr[] = {10,20,30,40,50};
     int low=0,high=4,mid;
     int target = 40;
     while(low <= high){
          mid=(low+high)/2;
          if (arr[mid] == target){
               printf("Element found at :%d\n",mid);
               return 0;
          }else if(arr[mid] < target){
               low = mid+1;
          }else if(arr[mid] > target){
               high = mid -1;
          }
     }
     printf("Element not Found:");
     return 0;
}