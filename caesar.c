#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


int main(int argc, string argv[])
{
    if (argc != 2)
    {
        return 1;
    }
    else
    {
        int key = atoi(argv[1]);
        printf("plaintext: ");
        string s = get_string();
        printf("ciphertext: ");

        for (int i = 0, n = strlen(s); i < n; i++)
        {
            if (isupper(s[i])){
                s[i] = s[i]-65;
                s[i] = ((s[i]+key)%26);
                s[i] = s[i] + 65;
                printf("%c", s[i]);
            }
            else if (islower(s[i])){
                s[i] = s[i] - 97;
                s[i] = ((s[i]+key)%26);
                s[i] = s[i] + 97;
                printf("%c", s[i]);
            }
        }
    printf("\n");
    }

}

