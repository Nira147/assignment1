//read a string 
//check whether is a palindrone
//conver the string to uppercase

#include <stdio.h>

int main() {
    char str[100];
    int i = 0, length = 0;
    int isPalindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Calculate length manually (without strlen)
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    // Convert to uppercase manually
    for (i = 0; i < length; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  // Convert to uppercase using ASCII
        }
    }

    // Check palindrome
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    printf("Uppercase string: %s\n", str);

    if (isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
