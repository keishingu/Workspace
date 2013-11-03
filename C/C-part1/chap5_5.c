#include <stdio.h>

//変数の値を交換する(座っピンツ)関数
void swap(int *x, int*y);

int main() {
	int x, y;
	int *px, *py;

	x = 100; y = 200;
	px = &x; py = &y;

	//swap関数を呼び出す前に値を表示
	printf("x = %d y = %d\n", x, y);

	//ポインタを利用
	//swap関数でxとyの値を交換
	swap(px,py);

	//変数の値が交換されているか確認
	printf("x = %d y = %d\n", x, y);

	//&関数を利用
	//swap関数でxとyの値を交換
	swap(&x, &y);

	//変数の値が交換されているか確認
	printf("x = %d y = %d\n", x, y);

	return 0;
}

//変数の値を交換する(スワッピング)関数
//関数がポインタなので参照渡しになる

void swap(int *px, int *py) {
	int tmp;

	//関数側で変数を入れ替えている
	//ポインタを利用して呼び出し元の変数の
	//記憶領域を直接変更しているので
	//呼び出し元の変数に反映される
	tmp = *px;
	*px = *py;
	*py = tmp;

	return;
}
