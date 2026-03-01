#include <stdio.h>

void kid(int age) {
  int height = 100;
  printf("Kid: age = %d, height = %d\n", age, height);
}

int main(int argc, char *argv[]) {
  int count = 0;
  int *p = &count;
  printf("Main: count is at %p\n", (void *)&count);

  kid(10);

  return 0;
}
