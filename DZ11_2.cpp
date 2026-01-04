#include <iostream>

double* create_array(int size);

int main()
{
	int size{};
	std::cout << "Введите размер массива: ";
	std::cin >> size;
	std::cout << "Массив: ";
	double* external_array = create_array(size);
	for (int i = 0; i < size; ++i)
	{
		std::cout << external_array[i] << ' ';
	}
	delete[] external_array;
	return EXIT_SUCCESS;
}

double* create_array(int size)
{
	return new double[size]();

}
