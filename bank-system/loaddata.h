#ifndef LOADDATA_H
#define LOADDATA_H

#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

typedef struct customer {
	char name[20];
	char birth[20];
	char address[20];
} customer;

customer c;

void load_data();

#endif // !LOADDATA_H
