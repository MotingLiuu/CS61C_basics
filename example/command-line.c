#include <stdio.h>

int main(int argc, char *argv[]) {
    for (int i = 0; i < argc; i++) { //argv[0] should be ./command-line or command-line
        printf("%s ", argv[i]);
    }
    printf("\n");
    return 0;
}
