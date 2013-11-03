#include <stdio.h>

//社員情報を管理する構造体
typedef struct employee {
	int id;
	char name[30];
	char address[100];
	char tel[20];
} Employee;

//構造体を値渡しする関数
void display_value(Employee emp);

//構造体を参照渡しする関数
void display_ref(Employee *emp);

int main() {
	struct employee emp = {1, "山下達夫", "東京都杉並区", "03-5555-5555"};

	//値渡しする関数を呼び出す
	display_value(emp);

	printf("\n");//改行

	//参照渡しする関数を呼び出す
	display_ref(&emp);

	return 0;
}

//構造体を値渡ししする関数
void display_value(Employee emp) {
	printf("社員ID:%d\n", emp.id);
	printf("社員名：%s\n", emp.name);
	printf("住所：%s\n", emp.address);
	printf("電話番号：%s\n", emp.tel);

	return;
}

//構造体ｗ参照渡しする関数
void display_ref(Employee *emp) {
	printf("社員ID:%d\n", emp->id);
	printf("社員名：%s\n", emp->name);
	printf("住所：%s\n", emp->address);
	printf("電話番号：%s\n", emp->tel);

	return;
}
