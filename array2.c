//write a c program to find the largest value in an array of 5 integers using for loop and if statement
#include <stdio.h>
int main(){
    int a[5];
    int largest;
    printf("enter five values:");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);

        largest=a[0];
        if(a[i]>largest){
            largest=a[i];
        }

    }
    printf("---The largest value is---: %d\n", largest);
}