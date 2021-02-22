/*
 * Converts distance in miles to kilometers.
 */

#include <stdio.h>
#include "lib.h"
#define KMS_PER_MILE 1.609



int main(void) {
	double miles,
			kms;

	printf("Enter the distance in miles > ");
	scanf("%lf",&miles);
	// getchar();

	kms = KMS_PER_MILE * miles;

	printf("That equalf %f kilometers.\n", kms);
	printNum(5);
	char letter1, letter2, letter3;
	printf("Scan 3 characters > \n");
	scanf(" %c%c%c", &letter1, &letter2, &letter3);
	printf("%c%c%c\n", letter1, letter2, letter3);
	printf("3rd letter is %c\n",letter1);
	return (0);
}