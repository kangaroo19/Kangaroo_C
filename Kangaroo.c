#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int kangaroo_HP = 100;
	int y;
	srand((unsigned int)time(NULL));

	printf("캥거루 한마리가 있습니다.\n");
	printf("캥거루를 때리시겠습니까?(캥거루의 HP=100)\n");
	printf("1)...YES\n");
	printf("2)...NO\n");
	scanf("%d", &y);
	if (y == 1) {
		for (int i = 1; i <= 3; i++) {
			printf("***%d번째 도전***\n", i);
			printf("\n");

			int chance = rand() % 100; //0~99확률

			if (0 <= chance && chance <= 29) {
				printf("캥거루가 공격받았습니다. (-30)\n");
				printf("\n");
				kangaroo_HP = kangaroo_HP - 30;
				if (kangaroo_HP <= 0) {
					printf("==>축하합니다 캥거루를 잡았습니다<==\n");
					break;
				}

			}
			else if (30 <= chance && chance <= 49) {
				printf("캥거루가 크리티컬로 맞았습니다.(-60)\n");
				printf("\n");
				kangaroo_HP = kangaroo_HP - 60;
				if (kangaroo_HP <= 0) {
					printf("==>축하합니다 캥거루를 잡았습니다<==\n");
					break;
				}

			}
			else if (50 <= chance && chance <= 89) {
				printf("캥거루가 피했습니다.\n");
				printf("\n");

			}
			else {
				printf("캥거루가 즉사했습니다(-100)\n");
				printf("\n");
				kangaroo_HP = kangaroo_HP - 100;

				printf("\n\n======================================\n");
				printf("==>축하합니다 캥거루를 잡았습니다<==\n");
				printf("======================================\n");
				break;

			}

			if (i == 3 && kangaroo_HP > 0) {
				printf("\n\n======================================\n");
				printf("캥거루를 못잡았습니다...\n");
				printf("======================================\n");
			}
		}
	}
	printf("\n");
	if (y == 1 && kangaroo_HP > 0)
		printf("캥거루의 남은 HP=%d\n", kangaroo_HP);
	if (y == 2)
		printf("캥거루가 당신을 죽였습니다.");
}