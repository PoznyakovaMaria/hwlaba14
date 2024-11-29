#define _CRT_SECURE_NO_WARNINGS     
#include <stdio.h>     
#include <locale.h>     
#define _USE_MATH_DEFINES     
#include <math.h>

//����������� ������� ����������� ������ �������� �� ������� �
int find1(int* array, int size, int A) {
	for (int i = 0; i < size; i++) {
		if (array[i] != A) {
			return i; //���������� ������ ������� ��������, �� ������� �
		}
	}
	return -1; //���� ��� �������� ����� �, ������� -1
}

int main() {
	setlocale(LC_ALL, "RUS");
	int array[] = { 1,2,3,4,5,3,2,1 };
	int size = sizeof(array) / sizeof(array[0]);
	int A;

	printf("������� �������� �: ");
	scanf("%d", &A);

	int index = find1(array, size, A);
	if (index != -1) {
		printf("������ ����������� ����� �������� �� ������� %d: %d\n", A, index);
		printf("�������� ��������: %d\n", array[index]);
	}
	else {
		printf("��� �������� ����� %d\n", A);
	}
	return 0;
}