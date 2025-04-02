#include <stdio.h>

main()
{
	int a, b, c, result;
	char k;

	printf("연산 선택 (+ 또는 *) =>");
	scanf_s("%c", &k, 1);

	printf("첫 번째 값 => ");
	scanf_s("%d", &a, 1);
	printf("두 번째 값 => ");
	scanf_s("%d", &b, 1);
	printf("세 번째 값 => ");
	scanf_s("%d", &c, 1);

	if (k == '+') {
		result = a + b + c;
		printf("%d + %d + %d = %d\n", a, b, c, result);
	}

	if (k == '*') {
		result = a * b * c;
		printf("%d * %d * %d = %d\n", a, b, c, result);
	}

}