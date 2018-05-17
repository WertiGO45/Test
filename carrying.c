#include <stdio.h>
#include <conio.h>
#include <stdafx.h>
#include <Windows.h>
#include <iostream>
#include <clocale>
#include <math.h>


int main(void) {
	setlocale(LC_CTYPE, "rus");
	int V, M, PMM;
	int CM, MT, Carrying;


	puts("Расчёт грузоподъемности автомобиля!");

	printf("--------------------------------------------------------- \n");

	printf("Введите объём топливного бака: V =  ");
	getline ("%d", &V);
	printf(" \n");
	fflush(stdin);

	while (V <= 0) {
		printf("Вы велли не корректное значение. Повторите ввод \n");
		printf(" \n");
		printf("Введите объём топливного бака: V =  ");
		scanf_s("%d", &V);

	}

	printf("Введите массу без нагрузки: M = ");
	scanf_s("%d", &M);
	printf(" \n");
	fflush(stdin);

	while (M < 1000) {
		printf("Вы велли не корректное значение. Повторите ввод \n");
		printf(" \n");
		printf("Введите массу без нагрузки: M = ");
		scanf_s("%d", &M);
	}

	printf("Введите Разрешенную max массу: PMM =  ");
	scanf_s("%d", &PMM);
	printf(" \n");
	fflush(stdin);

	while (PMM <= 0) {
		printf("Вы велли не корректное значение. Повторите ввод \n");
		printf(" \n");
		printf("Введите Разрешенную max массу: PMM =  ");
		scanf_s("%d", &PMM);
	}

	MT = V * 0.7 * 0.9;
	CM = M + MT + 75;
	Carrying = PMM - CM;
	printf("Масса топлива: MT = %d кг. \n", MT);
	printf(" \n");
	printf("Снаряжённая масса: CM = %d кг. \n", CM);
	printf(" \n");
	printf("Грузоподъёмность: Carrying = %d кг. \n", Carrying);
	printf(" \n");

	system("pause");
	return 0;
}