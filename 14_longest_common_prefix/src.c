#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int has_prefix(const char *pre, const char *str)
{
    return strncmp(pre, str, strlen(pre)) == 0;
}

char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) {
        return "";
    }
    if (strsSize == 1) {
        return strs[0];
    }

    char *common_prefix = strdup(strs[0]);
    for(int i = 0; i < strsSize; i++) {
        while (has_prefix(common_prefix, strs[i]) != 1) {
            common_prefix[strlen(common_prefix) - 1] = '\0';
        }
    }
    return common_prefix;
}

int main() {
    char *exp1[3][20] = {"flower","flow","flight"};
    char *exp2[3][20] = {"dog","racecar","car"};

    printf("%s\n", longestCommonPrefix(*exp1, 3));
    printf("%s\n", longestCommonPrefix(*exp2, 3));
    return 0;
}