#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>

int main(void)
{
    string input = get_string("Text: ");
    //to find letters
    int letters;
    for (int i = 0; input[i] != '\0'; i++)
    {
        if ((input[i] >= 'a' && input[i] <= 'z') || (input[i] >= 'A' && input[i] <= 'Z'))
        {
            letters = letters + 1;
        }
    }
    //to find words
    int words = 1;
    for (int i = 0; input[i] != '\0'; i++)
    {
        if (input[i] == ' ')
        {
            words = words + 1;
        }
    }
    //to find sentances
    int sentances = 0;
    for (int i = 0; input[i] != '\0'; i++)
    {
        if (input[i] == '.' || input[i] == '!' || input[i] == '?')
        {
            sentances = sentances + 1;
        }
    }
    // printf("\n%i letter(s) \n%i word(s)" "\n%i sentance(s)", letters, words, sentances);

    //calculating the index
    //calculating L
    float L = (((float)letters * (100 / (float)words)));
    //calculating s
    float s = (((float)sentances * (100 / (float)words)));

    // int index = 0.0588 * L - 0.296 * S - 15.8
    int index = round(((0.0588 * L) - (0.296 * s) - 15.8));

    //to print the grade
    if (index < 1)
    {
        printf("\nBefore Grade 1\n");
    }
    else if (index > 16)
    {
        printf("\nGrade 16+\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
}
