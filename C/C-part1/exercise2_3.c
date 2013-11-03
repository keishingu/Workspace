#include <stdio.h>

int main() {
	int age;

	printf("何歳ですか？：");
	scanf("%d", &age);

	if(age > 25) {
		printf("衆議院議員総選挙、塗布県議会議員、市区町村議会議員、市区町村長");
		if(age > 30) {
			printf("、参議院議員通常選挙、都道府県知事");
		}
		printf("の被選挙権があります。\n");
	} else {
		printf("被選挙権はありません。\n");
	}

	return 0;
}
