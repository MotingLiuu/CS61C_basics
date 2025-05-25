# include <ctype.h>
# include <stdio.h>
# include <string.h>
#define ARRAYSIZE 100

int mystrcat(char *p, char * q) {
    while (*p) p++; // 在条件中使用 p++，先判断条件再进行++，因此到\0不会停下来，而是会继续++
    while ((*p++ = *q++) != '\0');
    return 0;
}

int main() {
    char str1[ARRAYSIZE];
    char str2[ARRAYSIZE];
    fgets(str1, ARRAYSIZE, stdin); //fgets读入数据时，会自动添加\n(如果有空间的话)
    fgets(str2, ARRAYSIZE, stdin);
    str1[strcspn(str1, "\n")] = '\0'; // strcspn会查找所选字符，返回第一个下标
    str2[strcspn(str2, "\n")] = '\0';
    mystrcat(str1, str2);
    printf("Result: %s", str1);
    return 0;
}