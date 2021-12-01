#include <stdio.h> 
void print_array(int pa[][3], int size) {
	int i, j;
	for (i = 0; i < size; i++)
		for (j = 0; j < 3; j++)
			printf("%d ", *(pa[i] + j));
}
int max_array(int* pa, int size)
{
	int i, j, max;
	max = *pa;
	for (i = 0; i < size; i++)
		for (j = 0; j < 3; j++)
			if (max < *(pa + j + i * 3))
				max = *(pa + j + i * 3);

	return max;
}
int sum_array(int* pa, int size)
{
	int i, j, sum;
	sum = 0;
	for (i = 0; i < size; i++)
		for (j = 0; j < 3; j++)
			sum = sum + *(pa + j + i * 3);

	return sum;
}
int main(void)
{
	int array[][3] = { {1, 22, 70}, {23, 80, 34}, {90, 20, 4}, {40, 99, 30} };
	int rowNb = sizeof(array) / sizeof(array[0]);
	print_array(array, rowNb);
	printf("\n���� ū ���� %d\n", max_array(array, rowNb));
	printf("\n������Ʈ���� ���� %d\n", sum_array(array, rowNb));
}