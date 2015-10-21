/**
* CS50 Problem Set 2, Vigenere
* Michael Frazis
* michaelfrazis@gmail.com
*/

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc ==  1 || argc > 2)
    {
        printf("wrong number of arguments\n");
        return 1;
    }                                
        string y = argv[1];
        {
            for (int i = 0; i < strlen(y); i++)
            {
                if(isalpha(y[i]) == 0)
                {
                    printf("wrong cipher format\n");
                    return 1;
                }
            }
        }               
        string s = GetString();            // sets sting s as input                
        for (int i = 0; i < strlen(s); i++)      // iterates i for each letter of string s
        {
            int e = i % strlen(y);                   // give the number (ie a mod)
            int w = tolower(y[e]);      //encrypting integer        
            int f = s[i];               // encrypted integer  
            if (isupper(s[i]))
            {
                printf("%c", (w-97 +f - 65) %26 + 65);
            }
            else if (islower(s[i]))
            {
                printf("%c" , (w-97 +f - 97) %26 + 97);
            }
            else
            {
                printf("%c", f);
            }
        }
    printf("\n");  
}
