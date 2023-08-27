#include <stdio.h>

int main() {
		int x;
		int y;
		
		printf("Primeiro valor:");
		scanf("%d", &x);
		
		printf("Segundo valor:");
		scanf("%d", &y);
		
        int z = x * y;
		printf("%d * %d = %d", x, y, z);
}
