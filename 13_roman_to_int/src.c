#include <stdio.h>
#include <string.h>


int calcValue(char roman) {
    const char *symbols[7] = {"I", "V", "X", "L", "C", "D", "M"};
    const int values[7] = {1, 5, 10, 50, 100, 500, 1000};
    for(int i = 0; i < 7; i++) {
        if (symbols[i][0] == roman) {
            return values[i];
        }
    }
    return 0;
}


int romanToInt(char *s) {
    int num = 0;
    int stash = 0;
    int conv = 0;
    int len = strlen(s);

    for(int i = 0; i < len; i++) {
        conv = calcValue(s[i]);
        if(s[i] != 0) {
            if(stash != 0) {
                if (conv > stash) {
                    num += (conv - stash);
                    stash = 0;
                    continue;
                }
                if (conv <= stash) {
                    num += stash;
                    stash = conv;
                    continue;
                }
            }
            else {
                stash += conv;
            }
        }
    }
    num += stash;
    // printf("%d \n", num);
    return num;
}

int main() {
    romanToInt("III");
    romanToInt("LVIII");
    romanToInt("MCMXCIV");
    return 0;
}
