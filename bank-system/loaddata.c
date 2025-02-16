#include "loaddata.h"

void load_data() {
	FILE* fp;
	fopen_s(&fp, "customer_data.txt", "r");
	if (fp == NULL) {
		printf("������ ���������ʽ��ϴ�.");
		printf("������ �����Ͻðڽ��ϱ�? (y/n): ");
		char select;
		select = getchar();
		if (select == 'y') {
			fopen_s(&fp, "customer_data.txt", "w");
			if (fp == NULL) {
				printf("������ �������� ���߽��ϴ�.");
				exit(1);
			}
			else if (select == 'n') {
				printf("���� ������ ����Ͽ����ϴ�.");
				exit(1);
			}
			else {
				printf("������ �����߽��ϴ�.");
				fclose(fp);
			}
		}
		else {
			exit(1);
		}
	}
	else
	{
		printf("�����͸� �ε��߽��ϴ�.\n");
		printf("�� ����\n");
		fprintf(fp, "�̸�: %s\n", c.name);
		fprintf(fp, "�������: %s\n", c.birth);
		fprintf(fp, "�ּ�: %s\n", c.address);
	}
}