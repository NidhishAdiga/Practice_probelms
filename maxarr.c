#include<stdio.h>
#include<string.h>
int maxInt(int *arr,int len){
    int l = arr[0];
    for(int i = 1; i<len ;i++){
        if(arr[i]>l){
            l=arr[i];
        }
    }
   return l;
}
int main()
{
    int arr[]={10,20,30,16};
    int len = sizeof(arr)/sizeof(arr[0]);
    int out = maxInt(arr,len);
    printf("the max is %d",out);
    return 0;
}