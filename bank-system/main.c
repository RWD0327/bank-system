#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"
#include "loaddata.h"

void k_menu() {
	int select;

	printf("---------------------------\n");
	printf("JW���࿡ ���Ű� ȯ���մϴ�.\n");
	printf("---------------------------\n");
	printf("1. ���� ����\n");
	printf("2. ���� ��ȸ\n");
	printf("3. �Ա�\n");
	printf("4. ���\n");
	printf("5. ����\n");
	printf("---------------------------\n");
	printf("> ");
	select = getchar();
	switch (select)
	{
	case '1':
		printf("���� ����\n");
		k_create_account();
	case '2':
		printf("���� ��ȸ\n");
		break;
	case '3':
		printf("�Ա�\n");
		break;
	case '4':
		printf("���\n");
		break;
	case '5':
		printf("����\n");
		break;
	case '6':
		system("cls");
		printf("������ ��忡 �����Ͽ����ϴ�.\n");
		load_data();
		break;
	default:
		printf("�߸��� �Է��Դϴ�.\n");
		break;
	}
}

void k_create_account() {
	printf("---------------------------\n");
	printf("���� ����\n");
	printf("---------------------------\n");
	printf("�̸�: ");
	printf("�������: ");
	printf("�ּ�: ");
}

void k_view_account() {
	printf("---------------------------\n");
	printf("���� ��ȸ\n");
	printf("---------------------------\n");
}

void k_deposit() {
	printf("---------------------------\n");
	printf("�Ա�\n");
	printf("---------------------------\n");
}

void k_withdraw() {
	printf("---------------------------\n");
	printf("���\n");
	printf("---------------------------\n");
}

void k_exit() {
	printf("---------------------------\n");
	printf("����\n");
	printf("---------------------------\n");
	exit(0);
}

int main() {
	while (1)
	{
		k_menu();
	}
	return 0;
}