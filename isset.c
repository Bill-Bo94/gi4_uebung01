//isset.c
//testet, ob uebergebene Umgebungsvariable gesetzt ist

#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[], char* envp[])
{
  char* variable = getenv(argv[1]);
  if(variable==NULL)
  {
    return 1;
  }
  else
  {
    if(argc > 2)
    {
      if(strcmp(argv[2],"-v")==0)
      {
        printf("%s=%s",argv[1],variable);
        printf("\n");
      }
    }
    return 0;
  }
}
