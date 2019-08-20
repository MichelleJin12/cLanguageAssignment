#include <stdio.h>

int main()
{
	int phone, year, result;

	printf("자신의 휴대폰 번호 뒷자리 4개를 입력해주세요. ");
	scanf_s("%d", &phone);
	printf("본인이 태어난 년도를 입력해주세요. ");
	scanf_s("%d", &year);

	result = (phone * 2 + 5) * 50 + 1769 -year;

	printf("결과는 %d\n", result);

	printf("휴대폰 번호는 %d, 나이는 %d 입니다.", (result/100), (result%100));

	return 0;
}