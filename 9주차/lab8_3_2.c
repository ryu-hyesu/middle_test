#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int stringEqual(const char* s1, const char* s2)
{
	while (*s1 || *s2) {
		if (*s1 != *s2)
			return 1;
		s1++;
		s2++;
	}

	return 0;
}

void main()
{
	char string1[50];
	char string2[50];
	printf("Enter the first string:");
	scanf("%s", string1);
	printf("Enter the second string:");
	scanf("%s", string2);
	if (stringEqual(string1, string2) == 0)
		printf("�ΰ��� ���ڿ��� ����\n");
	else
		printf("�ΰ��� ���ڿ��� �ٸ���\n");
}