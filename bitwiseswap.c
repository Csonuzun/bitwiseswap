#include <stdio.h>

int main() {
	int x, y;
	printf("insert two numbers \n");
	scanf("%d%d", &x, &y);
	printf("x = %d\ny = %d\n", x, y);
	x ^= y ^= x ^= y;
	printf("swapped values \nx = %d\ny = %d\n", x, y);

}
