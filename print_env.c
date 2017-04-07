#include <stdio.h>
#include <stdlib.h>
extern char** environ;

int main(int argc, char *argv[], char *envp[])
{
    int i;
    setenv("TESTVAR", "watvalue123", 1);
    
    printf("From char *envp[]:\n");
    printf("---------------------------\n");
    for (i = 0; envp[i] != NULL; i++)
    {    
        printf("%s\n", envp[i]);
    }
    
    /*
    while (*envp){
      printf("%s\n", *envp++);
    }
    */
    
    printf("\nFrom extern char** environ:\n");
    printf("---------------------------\n");
    for(i = 0; environ[i] != NULL; i++) 
    {
        printf("%s\n", environ[i]);
    }
}
