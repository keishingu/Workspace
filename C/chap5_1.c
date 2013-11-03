#include <stdio.h>

int main(){
	int output[] = {234,879,548,453,234};
	int input[5];

	int i;

	//output配列の内容を表示する
	for(i = 0;i < 5;i++){
		printf("output[%d] = %d\n", i, output[i]);
	}
	printf("\n");//改行

	//input配列にキーボードから値を代入する
	for(i = 0;i < 5;i++){
		printf("%dつ目の値を入力してください：", i + 1);
		scanf("%d", &input[i]);
	}
	printf("\n");//改行

	//input配列の内容を表示する
	for(i = 0;i < 5;i++){
		printf("input[%d] = %d\n", i, input[i]);
	}

	return 0;
}
