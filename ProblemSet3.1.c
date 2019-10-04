#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char* argv[])
{
    // Set 2nd argument as key
    int key = atoi(argv[2]);
    // Check that the number of arguments = 3
    if (argc == 3)
    {
        // Print plaintext
        char str [100];
        printf("plaintext: ");
        for (int i = 0, n = strlen(argv[1]); i < n; i++)
        {
            str[i] = argv[1][i]; // Initialize each element of str with corespending element from argv
            printf("%c", str[i]);      
        }
        printf("\n");
        
        // Encrypt plaintext, print cyphertext
        printf("cyphertext: ");
        for (int i = 0, n = strlen(argv[1]); i < n; i++)
        {
            str[i] = str [i] ^ key; // XOR operator on each individual element
            printf("%c", str[i]);      
        }
        printf("\n");

        // Un-encrypt cyphertext, print plaintext
        printf("plaintext: ");
        for (int i = 0, n = strlen(argv[1]); i < n; i++)
        {
            str[i] = str [i] ^ key;
            printf("%c", str[i]);      
        }
        printf("\n");
        return 0;    
    }
    else
    {
        return 1;
    }
    
}
