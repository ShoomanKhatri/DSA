#include <stdio.h>
#include <string.h>

void ReverseString(char str[]) {
    int n = strlen(str);
    for (int i = 0; i < n / 2; i++) {
        // Swap characters at the start and end of the string
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
}

int main() {
    char str[] = "Hello";
    
    printf("Original string: %s\n", str);
    
    reverseString(str);
    
    printf("Reversed string: %s\n", str);  
    
    return 0;
}
