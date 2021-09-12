#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	char str;
	str = NULL;
	srand((unsigned int)time(NULL));

	printf("주사위를 굴리시겠습니까?  (Y or N)");
	scanf("%c", &str);

	switch (str) {

	case 'Y':
	case 'y':
		for (int i = 1; i <= 10; i++) {

			printf("[%d]번째 주사위==>>>  [%d] (이)가 나왔습니다.\n\n", i, 1 + (rand() % 6));

		}
		break;
	case 'N':
	case 'n':
		break;
	default:
		break;
	}
	printf("프로그램을 종료합니다.");
	return 0;
}