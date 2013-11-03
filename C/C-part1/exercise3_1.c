#include <stdio.h>

int main() {
	int number[10];
	int total = 0;
	int i;

	for (i = 0; i < 10; i++) {
		printf("%d回目：整数を入力してください：", i+1);
		scanf("%d", &number[i]);
		total += number[i];
	}

	printf("入力した数字：");
	for (i = 0; i < 10; i++) {
		printf("%d ", number[i]);
	}
	printf("\n合計値：%d", total);
	printf("\n平均値：%fl", total/10.0);

	return 0;
}
