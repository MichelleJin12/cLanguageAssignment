//연도를 입력 받아서 윤년인지 확인하는 프로그램 작성

#include <stdio.h>

int main()
{
	int year;

	printf("연도를 입력하세요 : ");
	scanf_s("%d", &year);
	if (year % 4 == 0 && year % 100 != 0)
		printf("%d년은 윤년입니다.\n", year);
	else if (year % 400 == 0)
		printf("%d년은 윤년입니다.\n", year);
	else
		printf("%d년은 윤년이 아닙니다.\n", year);


	return 0;
}