#include <stdio.h>

// Function to reverse the string
void reverseString(char* s, int sSize) {
    int i = 0, j = sSize - 1;

    while (i < j) {
        // Swap characters
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;

        i++;
        j--;
    }
}

// Main function to test
int main() {
    char s[] = {'h','e','l','l','o'};   // input array
    int size = sizeof(s) / sizeof(s[0]);

    reverseString(s, size);

    printf("Reversed string: ");
    for (int i = 0; i < size; i++) {
        printf("%c ", s[i]);
    }
    printf("\n");

    return 0;
}
