#include <stdio.h>

int main() {
	unsigned int i = 4224298493U;
	double d1 = 34.432223334433;
	double d2 = 0.000023;

	char c = 'z';
	char str[] = "Hello\n";


	int len;


	printf("8進数\n");
	printf("%%o = %o\n",i);
	printf("%%#o = %#o\n",i);

	printf("\n");//改行

	//10進数
	printf("10進数　符号あり\n");
	printf("%%d = %d\n",i);
	printf("10進数　符号無し\n");
	printf("%%u = %u\n",i);

	printf("\n");//改行

	//16進数
	printf("16進数\n");
	printf("%%x = %x\n",i);
	printf("%%X = %X\n",i);

	printf("%%#x = %#x\n",i);
	printf("%%#X = %#X\n",i);

	//16進数
	printf("16進数\n");
	printf("%%x = %x\n",i);
	printf("%%X = %X\n",i);

	printf("%%#x = %#x\n",i);
	printf("%%#X = %#X\n",i);

	printf("\n");//改行

	//文字
	printf("文字\n");
	printf("%%c = %c\n",c);

	printf("\n");

	//文字列
	printf("文字列\n");
	printf("%%s = %s",str);

	printf("\n");

	//浮動小数点
	printf("浮動小数点\n");
	printf("%%f = %f %f\n",d1,d2);
	printf("%%e = %e %e\n",d1,d2);
	printf("%%E = %E %E\n",d1,d2);
	printf("%%g = %g %g\n",d1,d2);
	printf("%%G = %G %G\n",d1,d2);

	printf("\n");

	//ポインタ
	printf("ポインタ\n");
	printf("%%p = %p\n", &i);

	printf("\n");

	//出力文字数
	printf("出力文字数\n");
	printf("12345%n\n",&len);
	printf("%%n = %d\n", len);

	printf("\n");

	//出力幅
	printf("出力幅\n");
	printf("%%20d = %20d\n",i);
	printf("%%30d = %30d\n",i);

	printf(" %%*d = %*d\n", 20, i);
	printf(" %%*d = %*d\n", 30, i);

	printf("\n");//改行

	//小数点以下の桁数
	printf("小数点以下の桁数\n");
	printf("%%.3f = %.3f\n",d1);

	printf("\n");//行数

	//左詰め
	printf("左詰め\n");
	printf("%%-30d = %-30d\n",i);
	printf("%%30d = %30d\n",i);

	printf("\n");

	//符号
	printf("符号\n");
	printf(" %%d = %d\n", 300);
	printf("%% d = % d\n",300);
	printf("%%+d = %+d\n",300);

	printf("\n");

	//先行0詰め
	printf("先行0詰め\n");
	printf("%%08d = %08d\n",300);

	printf("\n");

	return 0;
}
