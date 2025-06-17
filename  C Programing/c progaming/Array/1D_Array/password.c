#include <stdio.h>
#include <string.h>

int main() {
    char password[20];
    char correctPassword[] = "OpenAI123"; // You can set your own password here

    printf("Enter password: ");
    scanf("%s", password);

    if (strcmp(password, correctPassword) == 0) {
        printf("Access granted.\n");
    } else {
        printf("Access denied.\n");
    }

    return 0;
}
