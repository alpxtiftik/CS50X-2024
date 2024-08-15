#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int count_letters(string text);//Harf sayacı
int count_words(string text);//Kelime sayacı
int count_sentences(string text);//Cümle sayacı

int main(void)
{
    string text = get_string("Text: ");//Metni alma

    printf("%i Letters\n", count_letters(text));
    printf("%i Words\n", count_words(text));
    printf("%i Sentences\n", count_sentences(text));

    double L= 100* (double)count_letters(text)/ (double)count_words(text);//L: 100 kelime başına ortalama harf sayısı,
    double S= 100* (double)count_sentences(text)/ (double)count_words(text);//S: 100 kelime başına ortalama cümle sayısı.

    float subindex = 0.0588 * L - 0.296 * S - 15.8;
    int index = round(subindex);
    if (index>16)
    {
        printf("Grade 16+");
    }
    else if(index<1)
    {
        printf("Before Grade 1");

    }
    else
    {
        printf("Grade %i", index);
    }

}



int count_letters(string text)//Harf sayacı(büyük veya küçük alfabetik harfler)
{
    int counter=0;
    for(int i=0; i<=strlen(text); i++)
    {
        if(isupper(text[i])!=0 || islower(text[i])!=0)
        {
            counter++;
        }

    }
    return counter;
}

int count_words(string text)//kelime sayacı(boşluklar)
{
    int counter=0;
    for (int i=0; i<strlen(text); i++)
    {

        if(text[i]==32)
        {
            counter++;
        }
    }
    return counter+1;
}

int count_sentences(string text)//cümle sayacı(. || ? || !)
{
    int counter=0;
    for(int i=0; i<strlen(text); i++){
        if(text[i] == 46 || text[i] == 33 || text[i] == 63)
        {
            counter++;
        }
    }
    return counter;
}

