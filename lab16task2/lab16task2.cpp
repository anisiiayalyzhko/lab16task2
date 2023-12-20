// lab16task2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>  
#include <cmath> 

int main() {
	int n;
	printf("Enter n (size of a matrix NxN):");
	scanf_s("%d", &n);
	int** array = new int* [n];
	for (int i = 0; i < n; i++) {
		array[i] = new int[n];
		printf("Enter row with index %d:\n", i);
		for (int j = 0; j < n; j++) {
			scanf_s("%d", &array[i][j]);
		}
	}
	int result = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			result *= array[i][j];
		}
	}
	printf("Result of multiplication = %d", result);
	return 0;
}
