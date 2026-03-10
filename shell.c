#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {
  char *line = NULL;
  size_t len = 0;
  char *args[64];

  while (1) {
    printf("$ ");
    getline(&line, &len, stdin);

    int i = 0;
    args[i] = strtok(line, " \t\n");

    while (args[i])
      args[++i] = strtok(NULL, " \t\n");

    if (!args[0])
      continue;
    if (strcmp(args[0], "exit") == 0)
      break;

    pid_t pid = fork();
    if (pid == 0) {
      execvp(args[0], args);
      perror("exec failed");
      exit(0);
    } else {
      wait(NULL);
    }
  }

  return 0;
}
