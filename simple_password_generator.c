#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 20
char characters[] =
    "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ123456789!@#$%^&*()";
int main() {
  srand(time(NULL));

  char password[PASSWORD_LENGTH + 1];
  for (int i = 0; i < PASSWORD_LENGTH; i++) {
    int random_number = rand() % (sizeof(characters) - 1);
    password[i] = characters[random_number];
  }

  printf("Your password: %s\n", password);

  return 0;
}
