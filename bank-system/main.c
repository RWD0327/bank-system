#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"
#include "loaddata.h"

void k_menu() {
	int select;

	printf("---------------------------\n");
	printf("JW은행에 오신걸 환영합니다.\n");
	printf("---------------------------\n");
	printf("1. 계좌 생성\n");
	printf("2. 계좌 조회\n");
	printf("3. 입금\n");
	printf("4. 출금\n");
	printf("5. 종료\n");
	printf("---------------------------\n");
	printf("> ");
	select = getchar();
	switch (select)
	{
	case '1':
		printf("계좌 생성\n");
		k_create_account();
	case '2':
		printf("계좌 조회\n");
		break;
	case '3':
		printf("입금\n");
		break;
	case '4':
		printf("출금\n");
		break;
	case '5':
		printf("종료\n");
		break;
	case '6':
		system("cls");
		printf("관리자 모드에 진입하였습니다.\n");
		load_data();
		break;
	default:
		printf("잘못된 입력입니다.\n");
		break;
	}
}

void k_create_account() {
	printf("---------------------------\n");
	printf("계좌 생성\n");
	printf("---------------------------\n");
	printf("이름: ");
	printf("생년월일: ");
	printf("주소: ");
}

void k_view_account() {
	printf("---------------------------\n");
	printf("계좌 조회\n");
	printf("---------------------------\n");
}

void k_deposit() {
	printf("---------------------------\n");
	printf("입금\n");
	printf("---------------------------\n");
}

void k_withdraw() {
	printf("---------------------------\n");
	printf("출금\n");
	printf("---------------------------\n");
}

void k_exit() {
	printf("---------------------------\n");
	printf("종료\n");
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