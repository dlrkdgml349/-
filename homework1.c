#include <stdio.h>
int main(void) {
	char* ptr[4] = {"Korea", "Seoul", "Mapo", "152���� 2/3"};
	for (int i = 0; i < 4; i++) {
		printf("%s\n", ptr[i]);
	}
	ptr[2] = "Jongno";
	for (int i = 0; i < 4; i++) {
		printf("%s\n", ptr[i]);
	}
	return 0;
}