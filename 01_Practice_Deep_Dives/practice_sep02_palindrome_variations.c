// Practice September 2: Alphanumeric Sentence Palindrome (ignoring non-alphanumeric and case).
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int isPalindromeSentence(const char *s) {
    int left = 0, right = strlen(s) - 1;

    while (left < right) {
        while (left < right && !isalnum((unsigned char)s[left])) left++;
        while (left < right && !isalnum((unsigned char)s[right])) right--;

        if (tolower((unsigned char)s[left]) != tolower((unsigned char)s[right])) {
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}

int main() {
    const char *test1 = "A man, a plan, a canal: Panama";
    const char *test2 = "race a car";

    printf("\"%s\" -> %s\n", test1, isPalindromeSentence(test1) ? "Palindrome" : "Not Palindrome");
    printf("\"%s\" -> %s\n", test2, isPalindromeSentence(test2) ? "Palindrome" : "Not Palindrome");
    return 0;
}

/*
Execution Output:
"A man, a plan, a canal: Panama" -> Palindrome
"race a car" -> Not Palindrome

*/

