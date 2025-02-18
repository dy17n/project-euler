#include <stdio.h>

int main() {
    int i = 0;
    int sum = 0;
    // Write C code here
    while (i < 1000) {
        if (i % 3 == 0) {
            sum = sum + i;
        }
        else if (i % 5 == 0) {
            sum = sum + i;
        }
        i++;
    }
    printf("%d", sum);
}
