#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// Get values into array
	int nums[5], numsLength = sizeof(nums) / sizeof(int);

	for (int x = 0; x < numsLength; x++) {
		printf("Insert a number: ");
		scanf("%d", &nums[x]);
	}

	// Combine values
	int combinedNums = 0, position = 10000; // position in tens, hundreds, etc

	for (int x = 0; x < numsLength; x++) {
		combinedNums += nums[x] * position;
		position = position / 10;
	}

	printf("Combined number: %d\n", combinedNums);
	
	// Separate values into variables
	int num1 = combinedNums / 10000;
	int num2 = combinedNums / 1000 % 10;
	int num3 = combinedNums / 100 % 10;
	int num4 = combinedNums / 10 % 10;
	int num5 = combinedNums / 1 % 10;

	printf("%d => %d,%d,%d,%d,%d\n", combinedNums, num1, num2, num3, num4, num5);

	return 0;
}