#include <iostream>

int main()
{
	int size{}, cnt{};
	std::cout << "Введите размер массива: ";
	std::cin >> size;
	int* arr = new int[size]();
	for (int i = 0; i < size; ++i)
	{
		std::cout << "arr[" << i << "] = ";
		std::cin >> cnt;
		arr[i] = cnt;
	}
	std::cout << "Введенный массив: ";
	for (int j = 0; j < size; ++j)
	{
		std::cout << arr[j] << ' ';
	}
	delete[] arr;
	return EXIT_SUCCESS;

}
