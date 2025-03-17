#include <stdio.h>

void print_combination(int n, int start, int *combination) {
    if (n == 0) {
        for (int i = 0; i < 9; i++) {
            if (combination[i] != 0) {
                printf("%02d", combination[i]);
            }
        }
        printf(", ");
        return;
    }
    
    for (int i = start; i <= 9 - n; i++) {
        combination[9 - n] = i + 1;
        print_combination(n - 1, i + 1, combination);
    }
}

void ft_print_combn(int n) {
    if (n <= 0 || n > 9) return; // Ensure n is within the correct range

    int combination[9] = {0}; // Array to store combinations
    print_combination(n, 0, combination);
    
    // Remove the last comma and space
    printf("\b\b\n");
}

int main() {
    ft_print_combn(2); // Test with n = 2
    return 0;
}
