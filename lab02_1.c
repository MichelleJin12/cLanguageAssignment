#include <stdio.h>

int main()
{
	int sum = 0 , score;

	score = 10;
	sum = sum + score;

	printf("첫 번째 값 : %d, 결과 : %d\n", score, sum);


	score = 20;
	sum = sum + score;

	printf("두 번쨰 값 : %d, 결과 : %d\n", score, sum);

	score = -8;
	sum = sum + score;

	printf("세 번째 값 : %d, 결과 : %d\n", score, sum);

	score = 5;
	sum = sum - score;

	printf("네 번째 값 : %d, 결과 : %d\n", score, sum);

}