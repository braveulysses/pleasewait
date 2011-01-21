#include <stdio.h>
#include <unistd.h>

int main(void) {
  unsigned int interval = 1000000;

  printf("Please wait...");
  while (1) {
    fflush(stdout);
    usleep(interval);
    printf(".");
  }
}
