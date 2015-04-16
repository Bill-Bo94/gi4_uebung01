//myenv.c
//gibt alle gesetzten Umgebungsvariablen sowie deren Anzahl aus

#include <stdio.h>

int main(int argc, char* argv[], char* envp[])
{
  int k;
  //Ausgabe Variablen
  for(k=0;envp[k]!=NULL;k++)
  {
    printf("%s ", envp[k]);
  }
  printf("\n");
  //Ausgabe Anzahl
  printf("ANZAHL: %d", k-1);
  printf("\n");
}
