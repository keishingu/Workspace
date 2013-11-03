#include <stdio.h>

int main() {
	int age;


	printf("何歳ですか：");
	scanf("%d", &age);



	if(age < 18){
		printf("18歳未満です\n");
	} else {
		printf("18歳以上です\n");
	}
	return 0;
}
