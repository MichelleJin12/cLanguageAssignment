#include <stdio.h>

int main()
{
	int sum = 0 , score;

	score = 10;
	sum = sum + score;

	printf("ù ��° �� : %d, ��� : %d\n", score, sum);


	score = 20;
	sum = sum + score;

	printf("�� ���� �� : %d, ��� : %d\n", score, sum);

	score = -8;
	sum = sum + score;

	printf("�� ��° �� : %d, ��� : %d\n", score, sum);

	score = 5;
	sum = sum - score;

	printf("�� ��° �� : %d, ��� : %d\n", score, sum);

}