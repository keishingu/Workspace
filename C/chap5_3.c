#include <stdio.h>

int main(){
	int data[3][5] = { {54, 36, 43, 34, 34}, {4, 3, 789, 51, 90}, {3, 2, 34, 44, 4} };
	int i;//外側のループの変数
	int j;//内側のループの変数

	//外側のループ
	for(i = 0; i < 3; i++){
		//内側のループ
		for(j = 0; j < 5; j++){
			printf("%d ",data[i][j]);
		}
		printf("\n"); //改行
	}

	return 0;
}
