#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>


int main() {
	int rsp;//rock Scissors paper
	int cpu_rsp;//kangaroo
	srand((unsigned int)time(NULL));
	printf("=====캥거루와 함께 가위 바위 보=====\n");
	printf("1).....가위\n");
	printf("2).....바위\n");
	printf("3).......보\n");
	printf("------------------------------------\n");
	printf("무엇을 선택하시겠습니까?? :");
	scanf_s("%d", &rsp);
	printf("------------------------------------\n");
	printf("\n\n\n");
	if (rsp == 1)
		printf("당신은 [가위]를 선택하셨습니다.\n");
	else if (rsp == 2)
		printf("당신은 [바위]를 선택하셨습니다.\n");
	else if (rsp == 3)
		printf("당신은 [보]를 선택하셨습니다.\n");
	else
		printf("잘못된 입력입니다\n");

	printf("\n\n\n");
	cpu_rsp = rand() % 100;

	if (0 <= cpu_rsp && cpu_rsp <= 29) {
		Sleep(3000);
		printf("캥거루는 [가위]를 선택했습니다\n");
		printf("\n\n");
		Sleep(1000);
		if (rsp == 1)
			printf("비겼습니다\n");
		else if (rsp == 2)
			printf("캥거루를 죽였습니다\n");
		else if (rsp == 3)
			printf("캥거루가 당신을 물어죽였습니다\n.");
	}
	else if (30 <= cpu_rsp && cpu_rsp <= 69) {
		Sleep(3000);
		printf("캥거루는 [바위]를 선택했습니다.\n");
		printf("\n\n");
		Sleep(1000);
		if (rsp == 1)
			printf("캥거루가 당신을 물어죽였습니다\n");
		else if (rsp == 2)
			printf("비겼습니다\n");
		else if (rsp == 3)
			printf("캥거루를 죽였습니다\n");


	}
	else {
		Sleep(3000);
		printf("캥거루는 [보]를 선택했습니다.\n");
		printf("\n\n");
		Sleep(1000);
		if (rsp == 1)
			printf("캥거루를 죽였습니다\n");
		else if (rsp == 2)
			printf("캥거루가 당신을 물어죽였습니다\n");
		else if (rsp == 3)
			printf("비겼습니다.\n");
	}
}