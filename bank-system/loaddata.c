#include "loaddata.h"

void load_data() {
	FILE* fp;
	fopen_s(&fp, "customer_data.txt", "r");
	if (fp == NULL) {
		printf("파일이 존재하지않습니다.");
		printf("파일을 생성하시겠습니까? (y/n): ");
		char select;
		select = getchar();
		if (select == 'y') {
			fopen_s(&fp, "customer_data.txt", "w");
			if (fp == NULL) {
				printf("파일을 생성하지 못했습니다.");
				exit(1);
			}
			else if (select == 'n') {
				printf("파일 생성을 취소하였습니다.");
				exit(1);
			}
			else {
				printf("파일을 생성했습니다.");
				fclose(fp);
			}
		}
		else {
			exit(1);
		}
	}
	else
	{
		printf("데이터를 로드했습니다.\n");
		printf("고객 정보\n");
		fprintf(fp, "이름: %s\n", c.name);
		fprintf(fp, "생년월일: %s\n", c.birth);
		fprintf(fp, "주소: %s\n", c.address);
	}
}