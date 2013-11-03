#include <stdio.h>

int main() {
	int number;//番号

	do {

		//NTTの3桁番号を入力
		printf("NTTの3桁番号を入力してください");
		printf("(99の入力で終了します)：");
		scanf("%d", &number);

		//switch文でそれぞれの3桁番号の情報を表示する
		switch(number) {
			case 110:
				printf("警察への急報\n");
				break;
			case 119:
				printf("火事・救助・救急車\n");
				break;
		}
	} while(number != 99);
	printf("プログラムを終了します\n");

	return 0;
}
