#include <iostream>

int main() {
    int N, sum = 0;

    std::cout << "Введите число N: ";
    std::cin >> N;

    for (int i = 1; i <= N; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }

    std::cout << "Сумма всех чисел от 1 до " << N << ", которые делятся на 3 или 5: " << sum << std::endl;

    return 0;
}