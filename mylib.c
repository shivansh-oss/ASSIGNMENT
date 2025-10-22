#include <stdio.h>
#include <math.h>
#include "mylib.h"


int reverseDigits(int n) {
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n = n / 10;
    }
    return rev;
}


int isArmstrong(int num) {
    int temp = num, sum = 0, digit, count = 0;
    int n = num;

    while (n > 0) {
        count++;
        n /= 10;
    }

    n = temp;
    while (n > 0) {
        digit = n % 10;
        sum += pow(digit, count);
        n /= 10;
    }

    if (sum == temp)
        return 1;
    else
        return 0;
}


int isAdams(int num) {
    int sq = num * num;
    int revNum = reverseDigits(num);
    int sqRev = revNum * revNum;
    int revSq = reverseDigits(sq);

    if (revSq == sqRev)
        return 1;
    else
        return 0;
}


int isPrime(int num) {
    if (num <= 1)
        return 0;

    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}


int isPrimePalindrome(int num) {
    int rev = reverseDigits(num);
    if (num == rev && isPrime(num))
        return 1;
    else
        return 0;
}
