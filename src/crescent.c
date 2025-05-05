// So you didn't provide a goddamn crescent.c file?! Fuck you

#include "api/api.h"

int main() {
  crescent_State* state = crescent_open();

  crescent_close(state);
  return 0;
}
