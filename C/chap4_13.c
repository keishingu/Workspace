#include <stdio.h>

int main() {
	int number;//番号

	//NTTの3桁番号を入力
	printf("NTTの3桁番号を入力してください: ");
	scanf("%d", &number);

	//switch文でそれぞれの3桁番号の情報を表示する
	switch(number) {
		case 100:
			printf("100版通話 通話料金を通知\n");
			break;
		case 110:
			printf("警察への急報\n");
			break;
		case 119:
			printf("火事・救助・救急車\n");
			break;
		default:
			printf("NTTの3桁番号サービスにはその番号はありません\n");
	}
	return 0;
}
