#include <stdio.h>

int main()
{
	int phone, year, result;

	printf("�ڽ��� �޴��� ��ȣ ���ڸ� 4���� �Է����ּ���. ");
	scanf_s("%d", &phone);
	printf("������ �¾ �⵵�� �Է����ּ���. ");
	scanf_s("%d", &year);

	result = (phone * 2 + 5) * 50 + 1769 -year;

	printf("����� %d\n", result);

	printf("�޴��� ��ȣ�� %d, ���̴� %d �Դϴ�.", (result/100), (result%100));

	return 0;
}