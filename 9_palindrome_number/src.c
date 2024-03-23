#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int isPalindrome(int x) {
    if (x < 0) {
        return 0;
    }
    int len = floor(log10(abs(x))) + 1;
    int mid;
    // Even
    if (len % 2 == 0) {
        mid = len / 2;
    }
    // Odd
    else {
        mid = (len / 2) + 1;
    }
    int second_half_rev = 0;

    for (int i = mid; i < len; i++) {
        second_half_rev = (10 * second_half_rev) + x % 10;
        x = x / 10;
    }
    if (len % 2 != 0) {
        x = x / 10;
    }

    return x == second_half_rev;
}


int main(void) {
    isPalindrome(1238321);
}