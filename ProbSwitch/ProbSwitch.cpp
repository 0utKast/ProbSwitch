#include <iostream>

int main()
{
    switch (2)
    {
    case 1: // No coincide
        std::cout << 1 << '\n'; // saltado
    case 2: // ¡Coincide!
        std::cout << 2 << '\n'; // Ejecución comienza aquí
    case 3:
        std::cout << 3 << '\n'; // Esta es también ejecutada
    case 4:
        std::cout << 4 << '\n'; // Esta es también ejecutada
    default:
        std::cout << 5 << '\n'; // Esta es también ejecutada
    }

    return 0;
}