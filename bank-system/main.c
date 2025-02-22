#include <stdio.h>
#include <string.h>
#include <Windows.h>

void create_account() {
	system("cls");
	printf("Create Account\n");
	char name[100];
	printf("Enter your name: ");
	scanf_s("%s", name, 100);
	char address[100];
	printf("Enter your address: ");
	scanf_s("%s", address, 100);
	char phone[100];
	printf("Enter your phone: ");
	scanf_s("%s", phone, 100);
	char email[100];
	printf("Enter your email: ");
	scanf_s("%s", email, 100);
	printf("Account created successfully\n");
}

void deposit() {
	system("cls");
	printf("Deposit\n");
	char account_number[100];
	printf("Enter your account number: ");
	scanf_s("%s", account_number, 100);
	char amount[100];
	printf("Enter the amount: ");
	scanf_s("%s", amount, 100);
	printf("Amount deposited successfully\n");
}

void withdraw() {
	system("cls");
	printf("Withdraw\n");
	char account_number[100];
	printf("Enter your account number: ");
	scanf_s("%s", account_number, 100);
	char amount[100];
	printf("Enter the amount: ");
	scanf_s("%s", amount, 100);
	printf("Amount withdrawn successfully\n");
}

void display_account() {
	system("cls");
	printf("Display Account\n");
	char account_number[100];
	printf("Enter your account number: ");
	scanf_s("%s", account_number, 100);
	printf("Account details\n");
}

void admin_mode() {
	system("cls");
	printf("Admin Mode\n");
	printf("1. Display all accounts\n");
	printf("2. Delete account\n");
	printf("3. Exit\n");

	int choice;

	printf("Enter your choice: ");
	scanf_s("%d", &choice);

	switch (choice)
	{
	case 1:
		printf("Display all accounts\n");
		break;
	case 2:
		printf("Delete account\n");
		break;
	case 3:
		printf("Exit\n");
		break;
	default:
		printf("Invalid choice\n");
		break;
	}
}

int main() {
	printf("--- Bank System ---\n");
	printf("1. Create Account\n");
	printf("2. Deposit\n");
	printf("3. Withdraw\n");
	printf("4. Display Account\n");
	printf("5. Exit\n");

	int choice;

	printf("Enter your choice: ");
	scanf_s("%d", &choice);

	switch (choice)
	{
	case 1:
		printf("Create Account\n");
		create_account();
		break;
	case 2:
		printf("Deposit\n");
		deposit();
		break;
	case 3:
		printf("Withdraw\n");
		withdraw();
		break;
	case 4:
		printf("Display Account\n");
		display_account();
		break;
	case 5:
		printf("Exit\n");
		break;
	case 6:
		printf("admin mode\n");
		admin_mode();
		break;
	default:
		printf("Invalid choice\n");
		break;
	}
}