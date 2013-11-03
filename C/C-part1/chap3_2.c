# include <stdio.h>

int main() {
	int id;
	char name[30];
	char address[100];
	char tel[20];

	printf("社員IDを入力してください：");
	scanf("%d",&id);

	printf("名前を入力してください：");
	scanf("%s",name);

	printf("住所を入力してください：");
	scanf("%s",address);

	printf("電話番号を入力してください：");
	scanf("%s",tel);

	printf("\n");

	printf("社員ID：%d\n", id);
	printf("社員名：%s\n", name);
	printf("住所：%s\n", address);
	printf("電話番号：%s\n", tel);

	return 0;
}
