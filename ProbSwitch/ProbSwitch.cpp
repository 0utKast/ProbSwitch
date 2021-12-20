#include <iostream>

void hazAlgo(int x)

{
	switch (x)
	{
		int a;
		
		
		

	case 1:
	{
		int x{ 8 };
		//y = 4;
		a = 6;
		std::cout << (a);
		break;
	}

	case 2:
		int y;
		y = 5;
		a = 7;
		std::cout << (y + a);
		break;

	case 3:
		y = 1;
		a = 4;
		std::cout << (y + a);
	    break;

	default:
		std::cout << "esto es desde default";
	}
	
}

int main()
{
	hazAlgo(3);

}





/*switch (1)
{
case 1:
{ // observa que hemos añadido un bloque explícito aquí
	int x{ 4 }; // correcto, las variables pueden ser inicializadas dentro de un bloque aplicado a un case
	std::cout << x;
	break;
}
default:
	std::cout << "default case\n";
	break;
}*/





















/*bool hazAlgo()

{

	switch (3)
	{
		int a; // correcto: declaración está permitida antes de las etiquetas case
		int b{ 5 }; // ilegal: inicialización no está permitida antes de las etiquetas case

	case 1:
		int y; // correcto pero mala práctica: declaración está permitidca dentro de un case
		y = 4; // correcto: asignación está permitida
		int z{ 4 };
		break;

	case 2:
		y = 5; // correcto: "y" fue declarada arriba, así que podemos usarla aquí también		
		break;

	case 3:
		// ilegal: inicialización no está permitida dentro de un case
	   //z = 3;
		break;
	}

}*/


































/*switch (1)
{
case 1:
{ // note addition of explicit block here
	int x{ 4 }; // okay, variables can be initialized inside a block inside a case
	std::cout << x;
	break;
}
default:
	std::cout << "default case\n";
	break;
}*/

























/*#include <iostream>

void foo()
{
	//HAZ ALGO
}
int main()
{
	int x{ };

	if (x > 10)
		std::cout << x << " es mayor de 10\n"; // esta línea está dentro de un bloque (implícito)





	switch (1)
	{
	case 1: // no crea un bloque implícito
		foo(); // esto es parte del alcance switch, no un alcance implícito para case 1
		break; // esto es parte del alcance switch, no un alcance implícito para case 1
	default:
		std::cout << "default case\n";
		break;
	}


}*/



















/*#include <iostream>

bool esVocal(char c)
{
	switch (c)
	{
	case 'a': // si c es 'a'
	case 'e': // o si c es  'e'
	case 'i': // o si c es  'i'
	case 'o': // o si c es  'o'
	case 'u': // o si c es  'u'
	case 'A': // o si c es  'A'
	case 'E': // o si c es  'E'
	case 'I': // o si c es  'I'
	case 'O': // o si c es  'O'
	case 'U': // o si c es  'U'
		return true;
	default:
		return false;
	}
}
int main()
{
	std::cout << "escribe una letra \n";
	char y{};
	std::cin >> y;
	bool x = esVocal(y);
	if (x)
		std::cout << "la letra " << y << " es una vocal";
	else
		std::cout <<  "la letra " << y << " es una consonante";
	
}*/










	/*int main()
	{


		switch (1)
		{
			int a; // correcto: declaración está permitida antes de las etiquetas case
			int b{ 5 }; // ilegal: inicialización no está permitida antes de las etiquetas case

		case 1:
			int y; // correcto pero mala práctica: declaración está permitidca dentro de un case
			y = 4; // correcto: asignación está permitida
			break;

		case 2:
			y = 5; // correcto: "y" fue declarada arriba, así que podemos usarla aquí también
			break;

		case 3:
			int z{ 4 }; // ilegal: inicialización no está permitida dentro de un case
			break;
		}
	}*/




	/*#include <iostream>

	void foo() {
		//haz algo
	}
	int main()
	{
		int x{};

		if (x > 10)
			std::cout << x << " es mayor de 10\n"; // esta línea implícitamente se considera que está dentro de un bloque

		switch (1)
		{
		case 1: // no crea un bloque implícito
			foo(); // esto es parte del alcance switch, no un bloque implícito para case 1
			break; // esto es parte del alcance switch, no un bloque implícito para case 1
		default:
			std::cout << "default case\n";
			break;
		}
	}*/










	/*bool esVocal(char c)
	{
		return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
			c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
	}*/

	/*bool esVocal(char c)
	{
		switch (c)
		{
		case 'a': // si c es 'a'
		case 'e': // o si c es  'e'
		case 'i': // o si c es  'i'
		case 'o': // o si c es  'o'
		case 'u': // o si c es  'u'
		case 'A': // o si c es  'A'
		case 'E': // o si c es  'E'
		case 'I': // o si c es  'I'
		case 'O': // o si c es  'O'
		case 'U': // o si c es  'U'
			return true;
		default:
			return false;
		}
	}*/
























	/*#include <iostream>

	int main()
	{
		switch (2)
		{
		case 1:
			std::cout << 1 << '\n';
			break;
		case 2:
			std::cout << 2 << '\n'; // Ejecución empieza aquí
			[[fallthrough]]; // fallthrough intencional. Observa
							//el punto y coma para indicar la declaración null
		case 3:
			std::cout << 3 << '\n'; // Este es también ejecutado
			break;
		}

		return 0;
	}*/

























	/*#include <iostream>

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
	}*/



