#include <iostream>
#include <ctime>
#include <random>
int main() {
	setlocale(LC_ALL, "Russian");
	const int x = 10;
	int mx[x][x];
	int sum{}, counter{}, n{};
	srand(time(NULL));
	std::cout << "Первоначальный массив:";
	for (int i = 0; i < x; i++){
		std::cout << '\n';
		for (int j = 0; j < x; j++){
			mx[i][j] = rand() % 100;
			std::cout << mx[i][j] << '\t';
		}
	}
	std::cout << "\n\n";
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < x; j++) {
			sum += mx[i][j];
		}
		std::cout << "Сумма " << counter << " рядa = " << sum << '\n';
		counter++;
		sum = 0;
	}
	std::cout << "\nВведите номер ряда для сортировки(от 0 до 9) -> \n";
	std::cin >> n;
	for (int i = x - 1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (mx[n][j] > mx[n][j + 1]) {
				std::swap(mx[n][j], mx[n][j + 1]);
			}
		}
	}
	for (int i = 0; i < x; i++) {
		std::cout << mx[n][i] << '\t';
	}

	return 0;
}