#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
    char text[1000];

    printf("Text: ");
    fgets(text, 1000, stdin);

    text[strcspn(text, "\n")] = 0;

    int letters = 0;
    int words = 1;
    int sentences = 0;

    for (int i = 0, n = strlen(text); i < n; i++)
    {
        char c = text[i];

        if (isalpha(c))
        {
            letters++;
        }
        else if (c == ' ')
        {
            words++;
        }
        else if (c == '.' || c == '!' || c == '?')
        {
            sentences++;
        }
    }

    float L = ((float)letters / (float)words) * 100.0;
    float S = ((float)sentences / (float)words) * 100.0;

    float index = 0.0588 * L - 0.296 * S - 15.8;

    int grade = (int)round(index);

    if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (grade < 1)
    {
        printf("Under Grade 1\n");
    }
    else
    {
        printf("Grade %d\n", grade);
    }

    return 0;
}