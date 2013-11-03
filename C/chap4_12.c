#include <stdio.h>

int main() {
	int age;//年齢

	//年齢を尋ねる
	printf("年齢はいくつですか: ");
	scanf("%d", &age);

	//ブロックを利用したif-else if文
	if(age < 20) {
		printf("選挙権はありません\n");
	} else if(age < 25) {
		printf("選挙権はありますが、衆議院議員の被選挙権はありません\n");
	} else {
		printf("選挙権も衆議院議員の被選挙権もあります\n");
	}

	return 0;
}
