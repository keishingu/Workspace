#include <stdio.h>

int main() {
	int i;
	int total = 0;
	for(i = 1; i <= 100; i++) {
		total += i;
		//continue以下の命令は実行せずにfor文を続ける
		if(i % 10 != 0) continue;

		
		printf("%dまでの合計値 = %d\n", i, total);
	}

	return 0;
}
