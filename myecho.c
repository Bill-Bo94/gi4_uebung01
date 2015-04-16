#include <stdio.h>
// Dieses Programm gibt alle uebergebenen Parameter (ohne Name des Programms) aus

int main(int argc, char* argv[], char* envp[]) 
{
  int k;
  for(k=1;k<argc;k++)
  {
    printf("%s ",argv[k]);
  }
  printf("\n");
  return 0;
}
