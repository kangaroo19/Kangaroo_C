#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>


int main() {
	int rsp;//rock Scissors paper
	int cpu_rsp;//kangaroo
	srand((unsigned int)time(NULL));
	printf("=====Ļ�ŷ�� �Բ� ���� ���� ��=====\n");
	printf("1).....����\n");
	printf("2).....����\n");
	printf("3).......��\n");
	printf("------------------------------------\n");
	printf("������ �����Ͻðڽ��ϱ�?? :");
	scanf_s("%d", &rsp);
	printf("------------------------------------\n");
	printf("\n\n\n");
	if (rsp == 1)
		printf("����� [����]�� �����ϼ̽��ϴ�.\n");
	else if (rsp == 2)
		printf("����� [����]�� �����ϼ̽��ϴ�.\n");
	else if (rsp == 3)
		printf("����� [��]�� �����ϼ̽��ϴ�.\n");
	else
		printf("�߸��� �Է��Դϴ�\n");

	printf("\n\n\n");
	cpu_rsp = rand() % 100;

	if (0 <= cpu_rsp && cpu_rsp <= 29) {
		Sleep(3000);
		printf("Ļ�ŷ�� [����]�� �����߽��ϴ�\n");
		printf("\n\n");
		Sleep(1000);
		if (rsp == 1)
			printf("�����ϴ�\n");
		else if (rsp == 2)
			printf("Ļ�ŷ縦 �׿����ϴ�\n");
		else if (rsp == 3)
			printf("Ļ�ŷ簡 ����� �����׿����ϴ�\n.");
	}
	else if (30 <= cpu_rsp && cpu_rsp <= 69) {
		Sleep(3000);
		printf("Ļ�ŷ�� [����]�� �����߽��ϴ�.\n");
		printf("\n\n");
		Sleep(1000);
		if (rsp == 1)
			printf("Ļ�ŷ簡 ����� �����׿����ϴ�\n");
		else if (rsp == 2)
			printf("�����ϴ�\n");
		else if (rsp == 3)
			printf("Ļ�ŷ縦 �׿����ϴ�\n");


	}
	else {
		Sleep(3000);
		printf("Ļ�ŷ�� [��]�� �����߽��ϴ�.\n");
		printf("\n\n");
		Sleep(1000);
		if (rsp == 1)
			printf("Ļ�ŷ縦 �׿����ϴ�\n");
		else if (rsp == 2)
			printf("Ļ�ŷ簡 ����� �����׿����ϴ�\n");
		else if (rsp == 3)
			printf("�����ϴ�.\n");
	}
}