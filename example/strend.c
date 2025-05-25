# include <ctype.h>
# include <stdio.h>
# include <string.h>
#define ARRAYSIZE 100

int mystrend(char *p, char * q) {
    char *tmp = q;
    while (*p) p++;
    while (*q) q++;
    while (*p == *q) {
        if (q == tmp) {
            return 1;
        }
        p--;
        q--;
    }
    return 0;
}

int main(int argc, char *argv[]) { // argc is the count of parameters, at least 1. argv is a array of pointer pointing to string. Every element is `char*`
    char str1[ARRAYSIZE];
    char str2[ARRAYSIZE];
    fgets(str1, ARRAYSIZE, stdin); //fgets读入数据时，会自动添加\n(如果有空间的话)
    fgets(str2, ARRAYSIZE, stdin);
    str1[strcspn(str1, "\n")] = '\0'; // strcspn会查找所选字符，返回第一个下标
    str2[strcspn(str2, "\n")] = '\0';
    int result = mystrend(str1, str2);
    printf("Result: %d", result);
    return 0;
}