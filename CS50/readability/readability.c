#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <math.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    string text = get_string("Text: ");
    // printf("%d letters \n" , count_letters(text));
    // printf("%d words \n" , count_words(text));
    // printf("%d sentences \n", count_sentences(text));

    float L = ((float)count_letters(text) / (float)count_words(text)) * 100;
    float s = ((float)count_sentences(text) / (float)count_words(text)) * 100;
    float subindex = 0.0588 * L - 0.296 * s - 15.8;
    int index = round(subindex);
    if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }

}


int count_letters(string text)
{
    int letters = 0;
    for (int i = 0 ; text[i] != '\0' ; i++)
        if (isalpha(text[i]))
        {
            letters ++;
        }
    return letters;
}

int count_words(string text)
{
    int words = 1;
    for (int i = 0 ; text[i] != '\0' ; i++)
    {
        if (text[i] == ' ' || text[i] == '\n' || text[i] == '\t')
        {
            words ++;
        }
    }
    // words = words + 1;
    return words;
}

int count_sentences(string text)
{
    int sentences = 0;
    for (int i = 0 ; text[i] != '\0' ; i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentences ++;
        }
    }
    return sentences;
}