#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

char *generate_password()
{
    char *password = malloc((PASSWORD_LENGTH + 1) * sizeof(char));

    if (password == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < PASSWORD_LENGTH; i++) {
        int random_char = rand() % 94 + 33;  // Generate a random character between ASCII 33 ('!') and 126 ('~')
        password[i] = (char)random_char;
    }

    password[PASSWORD_LENGTH] = '\0';  // Null-terminate the password string

    return password;
}

int main(void)
{
    srand(time(NULL));  // Initialize the random number generator

    char *password = generate_password();
    printf("%s\n", password);
    free(password);

    return 0;
}
