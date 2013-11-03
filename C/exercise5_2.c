#include <stdio.h>

int main() {
	//3つの配列を初期化する
	char str1[] = "sicposoit";
	char str2[] = "oprlt";
	char str3[] = "munmfcrasyseems";

	//入れ替える時に一時文字を格納
	char tmp;

	//str1[0]とstr3[0]を交換する
	tmp = str1[0];
	str1[0] = str3[0];
	str3[0] = tmp;

	
	printf("str1[0]とstr3[0]を交換する\n");
	printf("%s\n%s\n%s\n\n", str1, str2, str3);


	tmp = str1[7];
	str1[7] = str3[4];
	str3[4] = tmp;


	printf("str1[7]とstr3[4]を交換する\n");
	printf("%s\n%s\n%s\n\n", str1, str2, str3);


	tmp = str1[3];
	str1[3] = str2[2];
	str2[2] = tmp;


	printf("str1[3]とstr2[2]を交換する\n");
	printf("%s\n%s\n%s\n\n", str1, str2, str3);

	return 0;
}
