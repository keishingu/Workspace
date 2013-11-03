#include <stdio.h>

int main(){
	int age;//年齢

	//年齢を重ねる
	printf("年齢はいくつですか: ");
	scanf("%d", &age);

	//実行したい文が単文のif文
	if(age >= 18) printf("車の免許が取得できます\n");

	//実行したい文が複数のif文
	if(age >= 20){
		printf("飲酒することができます\n");
		printf("喫煙することができます\n");
		printf("選挙権があります\n");
	}

	return 0;
}
