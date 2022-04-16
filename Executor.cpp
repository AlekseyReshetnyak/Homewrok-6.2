#include "Executor.h"

int* create()
{
	int* arr = new int[12];
	for (int i = 0; i < 12; i++)
		arr[i] = rand() % 50;
	return arr;
}

void swap(int* arr)
{
	int help;
	for (int i = 0; i < 12; i += 2) {
		help = arr[i];
		arr[i] = arr[i + 1];
		arr[i + 1] = help;
	}
}

void out(int arr[])
{
	for (int i = 0; i < 12; i++)
		std::cout << arr[i] << " ";
	std::cout << "\n";
}
