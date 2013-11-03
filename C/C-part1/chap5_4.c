#include <stdio.h>

//値渡しを調べるための関数
void func(int x);

int main() {
	//引数として利用する関数
	int a;

	a = 10;

	//aを引数としてfunc関数を呼び出す
	func(a);

	//func関数の中で引数の値が2oに変更されている
	//変数aとfunc関数の引数xは別々の記憶領域
	//なので一方の値を変更しても、他方に影響しない。
	//したがって、10が表示られる。
	printf("a = %d\n", a);
	int b;
	b = func(30);
	printf("%d\n", b);

	return 0;
}

//値渡しを調べるための関数
//戻り値：void
//関数名：func
//引数ｘ：値渡しを調べるための引数、関数の中で変更する
void func(int x) {
	//xを20に変更する
	x = 20;
	return;
}
