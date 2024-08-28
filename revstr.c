#include<stdio.h>
#include<string.h>
void revString(char *str,int *len){
    int start = 0;
    int end = *len-1; 
    int temp;
    while(start<end){
        temp = str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;

    }
}
int main(){
    char str[]="nidhish";
    int len =strlen(str);
    printf("the og  str is %s ",str);
    revString(str,&len);
    printf("the  rev str is %s ",str);
    return 0;
}