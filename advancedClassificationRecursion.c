#include <stdio.h>
#include <math.h>
#include "NumClass.h"
#define true 1
#define false 0
int numberOfDigits(int num, int count){
    if(num==0){
        return count;
    }
    count++;
    return (numberOfDigits(num/10,count));
}
int isArmstrongRec(int num, int digs){
    if(num==0){
        return 0;
    }
    return (isArmstrongRec(num/10,digs)+pow(num%10,digs));
}
int isArmstrong(int num){
    int digs=numberOfDigits(num,0);
    if(isArmstrongRec(num,digs)==num){
        return true;
    }
    return false;
}
int reverseNum(int num, int temp){
    if(num==0){
        return temp;
    }
    temp=temp*10+num%10;
    return(reverseNum((num/10),temp));
}
int isPalindrome(int num){
    if(num==0){
        return true;
    }
    int rev=reverseNum(num,0);
    return num==rev;
}