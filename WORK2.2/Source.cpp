#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int loop = 0,loop2 = 0;
int min , max,a;
int number[2000];
int main() {
		scanf("%d", &a);
		for (loop = 0; loop < a; loop++) {
			scanf("%d", &number[loop]);
		}
		min = number[0];
		max = number[0];
		for (loop = 0; loop < a; loop++) {

			if (min > number[loop]) {
				min = number[loop];
			}
			else if (max < number[loop]) {
				max = number[loop];
			}
		}
	
		printf("%d", min);
		printf("\n%d", max);
}
