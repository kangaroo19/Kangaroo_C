#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int kangaroo_HP = 100;
	int y;
	srand((unsigned int)time(NULL));

	printf("Ļ�ŷ� �Ѹ����� �ֽ��ϴ�.\n");
	printf("Ļ�ŷ縦 �����ðڽ��ϱ�?(Ļ�ŷ��� HP=100)\n");
	printf("1)...YES\n");
	printf("2)...NO\n");
	scanf("%d", &y);
	if (y == 1) {
		for (int i = 1; i <= 3; i++) {
			printf("***%d��° ����***\n", i);
			printf("\n");

			int chance = rand() % 100; //0~99Ȯ��

			if (0 <= chance && chance <= 29) {
				printf("Ļ�ŷ簡 ���ݹ޾ҽ��ϴ�. (-30)\n");
				printf("\n");
				kangaroo_HP = kangaroo_HP - 30;
				if (kangaroo_HP <= 0) {
					printf("==>�����մϴ� Ļ�ŷ縦 ��ҽ��ϴ�<==\n");
					break;
				}

			}
			else if (30 <= chance && chance <= 49) {
				printf("Ļ�ŷ簡 ũ��Ƽ�÷� �¾ҽ��ϴ�.(-60)\n");
				printf("\n");
				kangaroo_HP = kangaroo_HP - 60;
				if (kangaroo_HP <= 0) {
					printf("==>�����մϴ� Ļ�ŷ縦 ��ҽ��ϴ�<==\n");
					break;
				}

			}
			else if (50 <= chance && chance <= 89) {
				printf("Ļ�ŷ簡 ���߽��ϴ�.\n");
				printf("\n");

			}
			else {
				printf("Ļ�ŷ簡 ����߽��ϴ�(-100)\n");
				printf("\n");
				kangaroo_HP = kangaroo_HP - 100;

				printf("\n\n======================================\n");
				printf("==>�����մϴ� Ļ�ŷ縦 ��ҽ��ϴ�<==\n");
				printf("======================================\n");
				break;

			}

			if (i == 3 && kangaroo_HP > 0) {
				printf("\n\n======================================\n");
				printf("Ļ�ŷ縦 ����ҽ��ϴ�...\n");
				printf("======================================\n");
			}
		}
	}
	printf("\n");
	if (y == 1 && kangaroo_HP > 0)
		printf("Ļ�ŷ��� ���� HP=%d\n", kangaroo_HP);
	if (y == 2)
		printf("Ļ�ŷ簡 ����� �׿����ϴ�.");
}