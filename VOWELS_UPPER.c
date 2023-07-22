#include <stdio.h>
int main()
 {
    char sentence[100];
    int i;
    printf("Enter a sentence: ");
    gets(sentence);
    for (i = 0; sentence[i] != '\0'; i++)
    {
        if (sentence[i] == 'a' || sentence[i] == 'e' || sentence[i] == 'i' || sentence[i] == 'o' || sentence[i] == 'u')
            {
            sentence[i] = sentence[i] -32;
        }
    }
    printf("%s\n",sentence);
    return 0;
}
