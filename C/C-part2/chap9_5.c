#include <stdio.h>

//ポインタ形式で定義
//int型の配列の内容を表示する
void display_int(int *test_score, int size);

//ポインタ形式で定義
//文字列を表示する
void display_string(char *str);

int main() {
	int test_score[] = { 13,45,65,79,34 };
	char str[] = "World";

	//int型の配列を引数に関数を呼び出す
	display_int(test_score, 5);

	//文字列を引数に関数を呼び出す
	display_string("Hello");
	display_string(str);

	return 0;
}

//ポインタ形式で定義
//int型の配列の内容を表示する
void display_int(int *test_score, int size) {
	int i;

	for(i = 0; i < size; i++) {
		printf("test_score[%d] = %d\n", i, *test_score);
		test_score++;
	}
	return;
}

//ポインタ形式で定義
//文字列を表示する
void display_string(char *str) {
	printf("%s\n", str);
}
