#include <stdio.h>
#include "NumClass.h"
#include <math.h>

#define true 1
#define false 0
int isPrime(int num){
    if(num<1){
        return false;
    }
    if(num==1){
        return true;
    }
    for(int i=2;i<=num/2;i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
int factorial(int num){
    int ans=1;
    for(int i=2;i<=num;i++){
        ans*=i;
    }
    return ans;
}
int isStrong(int num){
    int sum=0, dig=0, x=num;
    while(x>0){
        dig=x%10;
        sum+=factorial(dig);
        x/=10;
    }
    if(sum==num){
        return true;
    }
    return false;
} 
