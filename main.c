#include <stdio.h>
#include <math.h>
#include "NumClass.h"
int main(){
    int x,y,low,high;
    scanf("%d %d", &x, &y);
    if(x<y){
        low=x;
        high=y;
    }
    else{
        low=y;
        high=x;
    }
    printf("The Armstrong numbers are:");
    for(int i=0;i<=high;i++){
        if(i>=low&&isArmstrong(i)==1){
            printf(" %d",i);
        }
    }
    printf("\nThe Palindromes are:");
    for(int i=low;i<=high;i++){
        if(isPalindrome(i)==1){
            printf(" %d",i);
        }
    }
    printf("\nThe Prime numbers are:");
    for(int i=low;i<=high;i++){
        if(isPrime(i)==1){
            printf(" %d",i);
        }
    }
    printf("\nThe Strong numbers are:");
    for(int i=low;i<=high;i++){
        if(isStrong(i)==1){
            printf(" %d",i);
        }
    }
    printf("\n");
    return 0;
}
