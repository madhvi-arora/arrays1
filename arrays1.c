//sum of five numbers using loops in array
#include <stdio.h>
int main(){
    int a[5];
    int i,sum=0;
    printf("enter any five values:");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++){
        sum=sum+a[i];
    }
    printf("sum is: %d\n",sum);
    return 0;

}