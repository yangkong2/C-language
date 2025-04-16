#include <stdio.h>
main()
{
	int money, c500, c100, c50=0, c10=0;
	
	printf(" ## 교환할 돈은? ");
	scanf_s("%d", &money);

	c500 = money / 500;
	money = money % 500;

	c100 = money / 100;
	money = money % 100;

	c500 = money / 50;
	money = money % 50;

	c500 = money / 10;
	money = money % 10;

	printf("\n오백 원짜리 ==> %d 개 \n", c500);
	printf("백 원짜리 ==> %d 개 \n", c100);
	printf("오십 원짜리 ==> %d 개 \n", c50);
	printf("십 원짜리 ==> %d 개 \n", c10);
	printf("바꾸지 못한 잔돈 ==> %d 원\n", money);
}