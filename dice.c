#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	char str;
	str = NULL;
	srand((unsigned int)time(NULL));

	printf("�ֻ����� �����ðڽ��ϱ�?  (Y or N)");
	scanf("%c", &str);

	switch (str) {

	case 'Y':
	case 'y':
		for (int i = 1; i <= 10; i++) {

			printf("[%d]��° �ֻ���==>>>  [%d] (��)�� ���Խ��ϴ�.\n\n", i, 1 + (rand() % 6));

		}
		break;
	case 'N':
	case 'n':
		break;
	default:
		break;
	}
	printf("���α׷��� �����մϴ�.");
	return 0;
}