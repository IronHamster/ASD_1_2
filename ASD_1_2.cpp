#include <iostream>

int main() {
    int liczba, minimum, miejsce = 1, pozycja = 1;

    std::cin >> minimum;

    if (minimum == 0) {
        return 0;
    }

    while (true) {
        std::cin >> liczba;

        if (liczba == 0) {
            break;
        }
        miejsce++;

        if (liczba <= minimum) {
            minimum = liczba;
            pozycja = miejsce;
        }
    }

    std::cout << minimum << std::endl;
    std::cout << pozycja << std::endl;

    return 0;
}
