//������ �Է� �޾Ƽ� �������� Ȯ���ϴ� ���α׷� �ۼ�

#include <stdio.h>

int main()
{
	int year;

	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &year);
	if (year % 4 == 0 && year % 100 != 0)
		printf("%d���� �����Դϴ�.\n", year);
	else if (year % 400 == 0)
		printf("%d���� �����Դϴ�.\n", year);
	else
		printf("%d���� ������ �ƴմϴ�.\n", year);


	return 0;
}