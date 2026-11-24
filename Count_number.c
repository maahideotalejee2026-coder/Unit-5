#include <stdio.h>

int main()
{
    FILE *file;
    int ch;
    int lines = 0;
    int lastChar = '\n';

    file = fopen("text.txt", "r");

    if (file == NULL)
    {
        printf("Unable to open the file.\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF)
    {
        if (ch == '\n')
        {
            lines++;
        }

        lastChar = ch;
    }

    // Count the last line if it has no newline character
    if (lastChar != '\n')
    {
        lines++;
    }

    fclose(file);

    printf("Number of lines in the file = %d\n", lines);

    return 0;
}
