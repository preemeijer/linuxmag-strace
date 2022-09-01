#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("test.txt", "r");

    /* -----------------------------------------------------------------
     * Bewust(!) 
     * voor het LinuxMag artikel de foutafhandeling uitgeschakeld
     * -----------------------------------------------------------------

     if (fp == NULL)
     {
       perror("Error while opening the file.\n");
       exit(EXIT_FAILURE);
     }
     */

    printf("Inhoud wordt nu getoond: \n");
    while((ch = fgetc(fp)) != EOF)
      printf("%c", ch);

    fclose(fp);
    return 0;
}
