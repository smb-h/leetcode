#include <stdio.h>
#include <string.h>


int lengthOfLastWord(char* s) {
    int len_last = 0;
    int len = 0;
    for(int i = 0; i < strlen(s); i++) {
        if(s[i] == 32) {
            if (len > 0) {
                len_last = len;
                len = 0;
            } else {
                continue;
            }
        } else {
            len++;
        }
    }
    if(len > 0) {
        return len;
    } else {
        return len_last;
    }
}

int main() {
    char *tmp = "Hello World";
    printf("%d\n", lengthOfLastWord(tmp));
    char *tmp1 = "   fly me   to   the moon  ";
    printf("%d\n", lengthOfLastWord(tmp1));
    char *tmp2 = "luffy is still joyboy";
    printf("%d\n", lengthOfLastWord(tmp2));
    return 0;
}
