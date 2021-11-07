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
    int lsb, msb;
    double digs=0;
    num =(double) num;
    while(num>0){
        digs=numberOfDigits(num);
        lsb = num%10;
        msb=num/pow(10,digs-1);
        if(msb!=lsb){
            return false;
        }
        num = num%(int)pow(10.0,digs-1);
        num = num/10;
    }
    return true;
}