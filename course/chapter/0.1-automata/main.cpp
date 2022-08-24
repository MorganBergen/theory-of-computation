#include <iostream>

int func2(int i, int j);

int main(){
	
	std::cout << "\ng : ℤ₄ x ℤ₄ → ℤ₄\n" << std::endl;
	
	std::cout << "\ng(i, j) = (i + j) mod 4\n" << std::endl;
	
	std::cout << "      j j j j " << std::endl;
	std::cout << "  g | 0 1 2 3 " << std::endl;
	std::cout << "-------------" << std::endl;
	std::cout << "i 0 | 0 1 2 3 " << std::endl;
	std::cout << "i 1 | 1 2 3 0 " << std::endl;
	std::cout << "i 2 | 2 3 0 1 " << std::endl;
	std::cout << "i 3 | 3 0 1 2 " << std::endl;
	std::cout << std::endl;
	
	int i, j;
	
	for (int k = 0; k < 16; k++) {
		std::cout << "i: ";
		std::cin >> i;
		std::cout << "j: ";
		std::cin >> j;
		
		std::cout << "g(" << i << ", " << j << ") = ";
		std::cout << func2(i, j) << std::endl;
	}
	
	return (0);
}

int func2(int i, int j) {

	int result = (i + j) % 4;
	
	return (result);
	
}
