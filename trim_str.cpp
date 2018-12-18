#include <stdio.h>
#include "trim.h"

int main(int argc, char const *argv[]) {
  char text[STRLEN];

  printf("Pleas enter a string with no more than 16 characters which should be trimmed");
  scanf("%s", text);
  trim(text);
  printf("%s", text);
  return 0;
}
