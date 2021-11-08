#include <stdio.h>
#include <math.h>
#include "NumClass.h"
#define true 1
#define false 0
double numberOfDigits(int num){
    double count=0;
    while(num>=1){
        count++;
        num=(int)num/10;
    }
    return count;
}
int isArmstrong(int num){
    double digs=numberOfDigits(num),sum=0;
    int x=num;
    while(x>=1){
        sum+=pow(x%10,digs);
        x/=10;
    }
    if(sum==num){
        return true;
    }
    return false;
}

int isPalindrome(int num){
    int x=num, rev=0;
    while(x>0){
        rev= rev*10+x%10;
        x=(int)x/10;
    }
    if(rev==num){
        return true;
    }
    return false;
}
