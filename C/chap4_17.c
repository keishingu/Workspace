#include <stdio.h>

int main() {
	int number;

	while(1) {
		printf("NTTの3桁番号を入力してください");
		printf("(99の入力出終了します)：");
		scanf("%d", &number);

		if(number == 99) break;

		switch(number) {
			case 110:
				printf("警察への急報\n");
				break;
			case 119:
				printf("火事・救助・救急車\n");
				break;
			default:
				printf("NTTの3桁番号サービスには");
				printf("その番号はありません\n");
		}
	};
	printf("プログラムを終了します\n");

	return 0;
}
