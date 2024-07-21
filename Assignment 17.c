String Basics in C Language

1. Write a program to calculate the length of the string. (without using built-in method)
2. Write a program to count the occurrence of a given character in a given string.
3. Write a program to count vowels in a given string
4. Write a program to convert a given string into uppercase
5. Write a program to convert a given string into lowercase
6. Write a program to reverse a string.
7. Write a program in C to count the total number of alphabets, digits and special
characters in a string.
8. Write a program in C to copy one string to another string.
9. Write a C program to sort a string array in ascending order.
10. Write a program in C to Find the Frequency of Characters.

Solution:-

1. #include <stdio.h>

int stringLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    gets(str);
    
    printf("The length of the string is: %d\n", stringLength(str));
    
    return 0;
}

2. #include <stdio.h>

int countCharacter(char str[], char ch) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    return count;
}

int main() {
    char str[100], ch;
    
    printf("Enter a string: ");
    gets(str);
    
    printf("Enter the character to count: ");
    scanf("%c", &ch);
    
    printf("The character '%c' occurs %d times.\n", ch, countCharacter(str, ch));
    
    return 0;
}

3. #include <stdio.h>

int countVowels(char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            count++;
        }
    }
    return count;
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    gets(str);
    
    printf("The number of vowels in the string is: %d\n", countVowels(str));
    
    return 0;
}

4. #include <stdio.h>

void toUpperCase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    gets(str);
    
    toUpperCase(str);
    
    printf("The string in uppercase is: %s\n", str);
    
    return 0;
}

5. #include <stdio.h>

void toLowerCase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    gets(str);
    
    toLowerCase(str);
    
    printf("The string in lowercase is: %s\n", str);
    
    return 0;
}

6. #include <stdio.h>

void reverseString(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    gets(str);
    
    reverseString(str);
    
    printf("The reversed string is: %s\n", str);
    
    return 0;
}

7. #include <stdio.h>

void countCharacters(char str[], int *alphabets, int *digits, int *special) {
    *alphabets = *digits = *special = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            (*alphabets)++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            (*digits)++;
        } else {
            (*special)++;
        }
    }
}

int main() {
    char str[100];
    int alphabets, digits, special;
    
    printf("Enter a string: ");
    gets(str);
    
    countCharacters(str, &alphabets, &digits, &special);
    
    printf("Alphabets: %d, Digits: %d, Special characters: %d\n", alphabets, digits, special);
    
    return 0;
}

8. #include <stdio.h>

void copyString(char destination[], char source[]) {
    int i = 0;
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';
}

int main() {
    char source[100], destination[100];
    
    printf("Enter the source string: ");
    gets(source);
    
    copyString(destination, source);
    
    printf("The copied string is: %s\n", destination);
    
    return 0;
}

9. #include <stdio.h>
#include <string.h>

void sortString(char str[]) {
    int n = strlen(str);
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    gets(str);
    
    sortString(str);
    
    printf("The sorted string is: %s\n", str);
    
    return 0;
}

10. #include <stdio.h>

void frequencyOfCharacters(char str[]) {
    int freq[256] = {0};
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }
    printf("Character frequencies:\n");
    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("%c: %d\n", i, freq[i]);
        }
    }
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    gets(str);
    
    frequencyOfCharacters(str);
    
    return 0;
}
