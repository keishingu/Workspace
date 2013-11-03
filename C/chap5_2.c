#include <stdio.h>

int main(){
	int id;//社員ID
	char name[30];//名前
	char address[100];//住所
	char tel[20];//電話

	//個人情報を入力
	printf("社員IDを入力してください：");
	scanf("%d",&id);

	printf("名前を入力してください：");
	scanf("%s",name);

	printf("住所を入力してください：");
	scanf("%s",address);

	printf("電話番号を入力してください：");
	scanf("%s",tel);

	printf("\n");//改行

	//入力した情報を表示
	printf("社員ID : %d\n", id);
	printf("社員名 : %s\n", name);
	printf("住所 : %s\n", address);
	printf("電話番号 : %s\n", tel);

	return 0;
}
