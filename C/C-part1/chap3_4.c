#include <stdio.h>

int main() {
	char days[7][10] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
	int i;

	for(i = 0; i < 7; i++) {
		printf("%s\n",days[i]);
	}

	return 0;
}
