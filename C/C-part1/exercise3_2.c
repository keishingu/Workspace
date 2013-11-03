#include <stdio.h>

int main() {
	char str1[20] = "sicposoit";
	char str2[20] = "oprlt";
	char str3[20] = "munmfcrasyseems";

	char tmp;

	tmp = str1[0];
	str1[0] = str3[0];
	str3[0] = tmp;
	printf("%s %s %s\n", str1, str2, str3);

	tmp = str1[7];
	str1[7] = str3[4];
	str3[4] = tmp;
	printf("%s %s %s\n", str1, str2, str3);
	
	tmp = str1[3];
	str1[3] = str2[2];
	str2[2] = tmp;
	printf("%s %s %s\n", str1, str2, str3);

	tmp = str2[0];
	str2[0] = str3[7];
	str3[7] = tmp;
	printf("%s %s %s\n", str1, str2, str3);

	tmp = str2[4];
	str2[4] = str3[11];
	str3[11] = tmp;
	printf("%s %s %s\n", str1, str2, str3);

	return 0;
}
