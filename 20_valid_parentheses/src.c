#include <stdio.h>
#include <string.h>

int isValid(char* s) {
    char stack[strlen(s)];
    int head = -1;
    for(int i = 0; i < strlen(s); i++) {
        if (head == -1) {
            head++;
            stack[head] = s[i];
            continue;
        }
        if (s[i] == ')' && stack[head] == '(') {
            head--;
        }
        else if (s[i] == '}' && stack[head] == '{') {
            head--;
        }
        else if (s[i] == ']' && stack[head] == '[') {
            head--;
        }
        else {
            head++;
            stack[head] = s[i];
        }
    }    
    if (head == -1) {
        return 1;
    } else {
        return 0;
    }
    return 0;
}

int main() {
    // char *tmp = "()";
    // printf("%d\n", isValid(tmp));
    // char *tmp = "()[]{}";
    // printf("%d\n", isValid(tmp));
    // char *tmp = "(]";
    // printf("%d\n", isValid(tmp));
    // char *tmp = "(])";
    // printf("%d\n", isValid(tmp));
    char *tmp = "{[]}";
    printf("%d\n", isValid(tmp));
}
