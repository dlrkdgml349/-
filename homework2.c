#include <stdio.h>
int main(void) {
	int cnt = 0;
	char s1[20];
	printf("���ڿ��� �Է��ϼ���: ");
	scanf_s("%s", s1, 20);
	while (s1[cnt] != '\0')
		cnt++;
	printf("\n�Էµ� ���ڿ���\n\"%s\"\n�Դϴ�.\n\n�Էµ� ���ڿ��� ���� = %d", s1, cnt);
	return 0;
}