#include <stdio.h>

main()
{
	int a, b, result;

	printf("## 두 수 나누기 ##\n");
	printf("첫 번째 값 => ");
	scanf_s("%d", &a);
	printf("두 번째 값 => ");
	scanf_s("%d", &b);

	if (b != 0) {
		result = a / b;
		printf("%d / %d = %d", a, b, result);
	}
	else {
		printf("다시 입력하세요.");
		printf("두 번째 값 => ");
		scanf_s("%d", &b);
	}
	if (b != 0) {
		result = a / b;
		printf("%d / %d = %d", a, b, result);
	}
	else {
		printf("0를 세 번 입력 했습니다. 종료합니다");
	}
}