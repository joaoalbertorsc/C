#include <stdlib.h>
#include <stdio.h>

int main() {
    int num;
    int total;
    int mult = 0;
    printf("Quam tab vc deseja?\n");
    scanf("%d", &num);
    while (mult < 11) {
        total = num * mult;
        printf("%d x %d = %d\n", num, mult, total);
        mult++;
    }
    return 0;
}