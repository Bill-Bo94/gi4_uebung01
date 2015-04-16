//myexe.c
//bekommt Namen eines weiteren Programms und öffnet dieses
#include <stdio.h>
#include <unistd.h>

int main (int argc, char* argv[], char* envp[])
{
  pid_t prozess = fork();
  printf("ProzessID: %d",prozess);
  printf("\n");
  execv(argv[1],&argv[1]);
  return 0;
}
