#include <stdio.h>

int main() {
    int x = 1;
    int y = 1;
    int z = 0;
    int sum = 0;
    while (z < 4000000) {
        z = x + y;
        if ( z % 2 == 0) {
            sum = sum + z;
        }
        x = y;
        y = z;
    }
    printf("%d", sum);

}
