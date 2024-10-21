#include <stdio.h>

int main() {
    char A_start, A_end, B_start, B_end, letter;
    scanf_s(" %c %c %c %c %c", &A_start, 1, &A_end, 1, &B_start, 1, &B_end, 1, &letter, 1);

    int inA = (letter >= A_start && letter <= A_end) ||
        (letter >= A_start + 32 && letter <= A_end + 32);

    int inB = (letter >= B_start && letter <= B_end) ||
        (letter >= B_start - 32 && letter <= B_end - 32);

    printf("%s, ", inA || inB ? "true" : "false");
    printf("%s, ", inA && inB ? "true" : "false");
    printf("%s, ", inA && !inB ? "true" : "false");
    printf("%s\n", (inA || inB) && !(inA && inB) ? "true" : "false");

    return 0;
}
