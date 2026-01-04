#include <iostream>

int** create_two_dim_array(int rows, int cols);
void fill_two_dim_array(int** arr, int rows, int cols);
void print_two_dim_array(int** arr, int rows, int cols);
void delete_two_dim_array(int** arr, int rows, int cols);

int main()
{
	int rows{}, cols{};
	std::cout << "Введите количество строк: ";
	std::cin >> rows;
	std::cout << "Введите количество столбцов: ";
	std::cin >> cols;
	std::cout << "Таблица умножения: " << '\n';
	int** arr = create_two_dim_array(rows, cols);
	fill_two_dim_array(arr, rows, cols);
	print_two_dim_array(arr, rows, cols);
	delete_two_dim_array(arr,  rows,  cols);

	return EXIT_SUCCESS;
}

int** create_two_dim_array(int rows, int cols)
{
	int** arr = new int* [rows];
	for (int i = 0; i < rows; ++i)
	{
		arr[i] = new int[cols];
	}
	return arr;
}

void fill_two_dim_array(int** arr, int rows, int cols)
{
	for (int k = 1; k <= cols; ++k)
	{
		arr[0][k] = k;
	}
	for (int k = 1; k <= rows; ++k)
	{
		arr[0][k] = k;
	}
	for (int i = 1; i <= rows; ++i)
	{
		for (int j = 1; j <= cols; ++j)
		{
			arr[i][j] = arr[0][j] * arr[i][0];
		}
	}
}

void print_two_dim_array(int** arr, int rows, int cols)
{
	for (int i = 0; i <= rows; ++i)
	{
		for (int j = 0; j <= cols; ++j)
		{
			std::cout << arr[i][j];
		}
		std::cout << '\n';
	}
}

void delete_two_dim_array(int** arr, int rows, int cols)
{
	for (int i = 0; i < rows; ++i)
	{
		delete[] arr[i];
	}
	delete[] arr;
}