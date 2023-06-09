#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
	Source by GeeksForGeeks (https://www.geeksforgeeks.org)
	Modified For Learn by RK
	I.D.E : VS2022
*/

int main() {
	int arr[2], i;
	int* ptr = arr;
	int* ptr_new;

	arr[0] = 10;
	arr[1] = 20;

	// penggunaan yang salah dari new_ptr: perilaku tidak terdefinisi
	ptr_new = (int*)realloc(ptr, sizeof(int) * 3);
	*(ptr_new + 2) = 30;

	for (i = 0; i < 3; i++) {
		printf("%d ", *(ptr_new + i));
	}
		
	_getch();
	return 0;
}
