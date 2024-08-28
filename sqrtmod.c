#include<stdio.h>
#include<math.h>
double sqaureRoot(double *num){
    return sqrt(*num);
}
int main()
{
    double arr[]={1,2,3,4,16};
    double out = sqaureRoot(&arr[4]);
    printf("the sqaure root is %lf",out);
    return 0;
}