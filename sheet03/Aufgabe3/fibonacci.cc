#include <iostream>

long int fibonacci_iter (int number)
{
	long int f1 = 0;
	long int f2 = 1;
	long int fn;

	std::cout << "Die Folgen-Elemente sind: " << 0 << " ";

	if (number <= 1) {
		std::cout << std::endl;
		return 0;
	}

	std::cout << 1 << " ";
	
	for (int i = 1; i < number; i++) {
		fn = f1 + f2;
		f1 = f2;
		f2 = fn;
		std::cout << f2 << " ";
	}

	std::cout << std::endl;

	return f2;
}

long int fibonacci_rec (int number)
{
	if (number == 1 or number == 0)
		return number;
	else
	return fibonacci_rec(number - 1) + fibonacci_rec(number - 2);
}


int main()
{
	int n;
	std::cout << "N: " << std::flush;
	std::cin >> n;
	
	int result = fibonacci_iter(n);			// gibt output in der Funktion aus
	std::cout << "iterative Lösung: " << result << std::endl;
	std::cout << "rekursive Lösung: " << fibonacci_rec(n) << std::endl;

	return 0;
}