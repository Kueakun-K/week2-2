#include<stdio.h>
int main() {
	int x;
	scanf_s("%d", &x);
	if (x > 31 or x <= 0)
		printf("Invalid date.");
	else if (x % 2 != 0 and x % 3 == 0)
		printf("Cactus Y");
	else if (x % 2 == 0 and x % 3 != 0)
		printf("Cactus X");
	else if (x % 2 != 0 and x % 3 != 0)
		printf("Nothing.");
	else if (x % 2 == 0 and x % 3 == 0)
		printf("Both of them.");
	else
		printf("Invalid date.");
	return 0;
}