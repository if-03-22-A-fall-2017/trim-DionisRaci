#include <string.h>
#include <stdio.h>
#include "trim.h"

int main(int argc, char const *argv[]) {
    if (argv[1] != 0) {

      printf("Argument #1: " );
      for (int i = 1; i < argc; i++) {
        char trimmed[STRLEN] = "";
        trim(argv[i], trimmed);
        printf("%s ",trimmed );
      }
      printf("\n");
    }
  return 0;
}
