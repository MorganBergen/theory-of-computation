# automata introduction

![problems](https://user-images.githubusercontent.com/65584733/188155688-078945ed-2bfe-4fa5-8474-9d421bb67ac6.png)
<img width="832" alt="ex0 8" src="https://user-images.githubusercontent.com/65584733/188155764-61d2b4e4-e33f-4fae-893c-8440d7c18ac3.png">

main.cpp
```
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
```
makefile
```
main: main.o
	g++ -std=c++11 -g -Wall main.o -o main

main.o: main.cpp
	g++ -std=c++11 -g -Wall -c main.cpp

clean: 
	rm *.o main

```

console output
```
g++ -std=c++11 -g -Wall main.o -o main
owner@morgan 0.1-automata % ./main 

g(i, j) = (i + j) mod 4

      j j j j 
  g | 0 1 2 3 
-------------
i 0 | 0 1 2 3 
i 1 | 1 2 3 0 
i 2 | 2 3 0 1 
i 3 | 3 0 1 2 

i: 0
j: 0
g(0, 0) = 0
i: 0
j: 1
g(0, 1) = 1
i: 0
j: 2
g(0, 2) = 2
i: 0
j: 3
g(0, 3) = 3
i: 1
j: 0
g(1, 0) = 1
i: 1
j: 1
g(1, 1) = 2
i: 1
j: 2
g(1, 2) = 3
i: 1
j: 3
g(1, 3) = 0
i: 2
j: 0
g(2, 0) = 2
i: 2
j: 1
g(2, 1) = 3
i: 2
j: 2
g(2, 2) = 0
i: 2
j: 3
g(2, 3) = 1
i: 3
j: 0
g(3, 0) = 3
i: 3
j: 1
g(3, 1) = 0
i: 3
j: 2
g(3, 2) = 1
i: 3
j: 3
g(3, 3) = 2
owner@morgan 0.1-automata % 

```
