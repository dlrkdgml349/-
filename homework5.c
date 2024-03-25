#include <stdio.h>

void hanoi(int n, char start, char work, char target) { //n : ���� ����, start : ������, work : ������, target : ������
	if (n == 1) {
		printf("%c���� ���� %d��(��) %c�� �ű�\n", start, n, target);
		return;
	}
	
	hanoi(n - 1, start, target, work); //���(�� �� ������ ������ ������)�� work(������)�� �̵�
	printf("%c���� ���� %d��(��) %c�� �ű�\n", start, n, target);
	hanoi(n - 1, work, start, target); //
	
}

int main(void) {
	hanoi(3, 'A', 'B', 'C');
}