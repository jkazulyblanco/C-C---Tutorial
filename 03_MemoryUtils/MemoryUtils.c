#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#include <string.h>

int main()
{
	int32_t count = 32;

	// array need specify the length
	int32_t arrayA[32];
	int32_t arrayB[32];

	// Init arrrays
	for (int32_t i = 0; i < count; i++)
	{
		arrayA[i] = i * 11;
	}
	memset(arrayB, 0xFF, count * sizeof(int32_t));

	// Compared Arrays
	int32_t abEqual = memcmp(arrayA, arrayB, count * sizeof(int32_t)) == 0;
	printf("Arrays equal before copy: %i; ", abEqual);

	// Copy Arrays
	memcpy(arrayB, arrayA, count * sizeof(int32_t));

	// Compared Arrays
	abEqual = memcmp(arrayA, arrayB, count * sizeof(int32_t)) == 0;
	printf("Arrays equal after copy: %i", abEqual);
}