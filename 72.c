//Read contents of a text file.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file;
    char *filename = "myfirstfile.txt";
    char ch;

    file = fopen(filename, "r");
    if (file == NULL)
    {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    while ((ch = fgetc(file)) != EOF)
    {
        putchar(ch);
    }

    fclose(file);
    return EXIT_SUCCESS;
}
