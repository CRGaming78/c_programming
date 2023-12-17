#include <stdio.h>
#include <math.h>
int isPrime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i <= sqrt(num); i++) if (num % i == 0) return 0;
    return 1;
}
void categorizeNumbers(FILE *input, FILE *even, FILE *odd, FILE *prime) {
    int num;
    while (fscanf(input, "%d", &num) != EOF) {
        fprintf((num % 2 == 0) ? even : odd, "%d\n", num);
        if (isPrime(num)) fprintf(prime, "%d\n", num);
    }
}
int main() {
    FILE *input = fopen("input.txt", "r");
    FILE *even = fopen("even.txt", "w");
    FILE *odd = fopen("odd.txt", "w");
    FILE *prime = fopen("prime.txt", "w");
    if (!input || !even || !odd || !prime) {
        printf("Error opening files.\n");
        return 1;
    }
    categorizeNumbers(input, even, odd, prime);
    fclose(input);
    fclose(even);
    fclose(odd);
    fclose(prime);
    printf("Numbers categorized and written to files successfully.\n");
    return 0;
}