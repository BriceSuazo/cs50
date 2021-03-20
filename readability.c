#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <string.h>


int main (void){
    string text = get_string("Text: ");
    int text_length = strlen(text);
    int letters = 0;

    for (int i = 0; i < text_length; i++){
        if (isalpha(text[i])){
        letters += 1;
        }
    }
    int words = 0;
    for (int i = 0; i < text_length; i++){
        if ((i == 0 && text[i] != ' ')
        || (i != text_length - 1 && text[i] == ' ' && text[i + 1] != ' ')){
        words += 1;
        }
    }
    int sentence = 0;

    for (int i = 0; i < text_length; i++){
        if ((text[i] == '.') || (text[i] == '?') || (text[i] == '!')){
            sentence += 1;
        }
    }

    // applying Coleman–Liau index formula
    float avg_letters = (letters / (float) words) * 100;
    float avg_sentences = (sentence / (float) words) * 100;
    int index = round(0.0588 * avg_letters - 0.296 * avg_sentences - 15.8);
    //int rounded_index = round(index);
    //printf("%f\n", index);

    if (index < 1){
        printf("Before Grade 1\n");
    }else if (index >= 16){
        printf("Grade 16+\n");
    }else{
        printf("Grade %i\n", index);
    }

    // printf("%i", letters);
    // printf("\n");
    // printf("%i", words + 1);
    // printf("\n");
    // printf("%i", sentence);
}