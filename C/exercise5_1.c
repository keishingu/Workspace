#include <stdio.h>

int main() {
	//10個の整数を格納する配列
	int number[10];

	int total = 0;

	int i;

	for(i = 0; i < 10; i++) {
		printf("%d回目：整数を入力してください：", i + 1);
		scanf("%d", &number[i]);
		total += number[i];
	}
	printf("\n");//改行

	//入力した数字を表示する
	printf("入力した数字：");
	for(i = 0; i < 10; i++){
		printf("%d",number[i]);
	}
	printf("\n");


	printf("合計値：%d\n", total);
	printf("平均値：%f\n", total / 10.0);

	return 0;
}
