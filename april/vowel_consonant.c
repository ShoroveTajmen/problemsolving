#include<stdio.h>
int main()
{
    char str[100];
    int i,alphabet,vowel,consonant,word,ch;

    printf("Enter a string : ");
    gets(str);

    i=alphabet=vowel=consonant=word=0;
    while((ch=str[i])!= '\0')
    {
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
            alphabet++;

        else if(ch==' ')
            word++;

        else if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
                ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
                vowel++;
                else

            consonant++;
               i++;
    }
    word++;

    printf("Number of alphabet = %d\n", alphabet);
    printf("Number of word = %d\n", word);
    printf("Number of vowel = %d\n", vowel);
    printf("Number of consonant = %d\n",consonant);

    return 0;


}