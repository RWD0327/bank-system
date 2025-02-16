#pragma once
#ifndef MAIN_H
#define MAIN_H

typedef struct {
	char name[50];
	char address[100];
	char phone[15];
	char email[50];
	char account_number[20];
} Account;

void k_menu();
void k_create_account();
void k_view_account();
void k_deposit();
void k_withdraw();
void k_exit();


#endif // !main.h
