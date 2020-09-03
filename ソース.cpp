#include<conio.h>
#include<stdio.h>
#define FIELD_WIDTH 64
#define FIELD_HEIGHT 64


int main() {
	for (int y = 0; y < FIELD_HEIGHT; y++) {
		for (int x = 0; x < FIELD_WIDTH; x++)
			printf("D");
		printf("\n");
	}
	_getch();
}