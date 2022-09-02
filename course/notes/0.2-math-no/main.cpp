
#include <iostream>
#include <string>

bool beats(std::string a1, std::string a2);
void prompt();
void intrepretation();

int main() {
	
	prompt();
	
	std::string sc = "SCISSOR";
	std::string pa = "PAPER";
	std::string st = "STONE";
	
	std::cout << "TRUE == " << true << std::endl;
	std::cout << "FALSE == " << false << std::endl;
	
	std::cout << std::endl;
	std::cout << "BEATS 	| SCISSOR 	PAPER		STONE " << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
	std::cout << "SCISSOR	| FALSE	  	TRUE		FALSE " << std::endl;
	std::cout << "PAPER 	| FALSE   	FALSE		TRUE  " << std::endl;
	std::cout << "STONE 	| TRUE 	  	FALSE		FALSE " << std::endl;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << "BEATS 	| SCISSOR 	PAPER 	STONE " << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
	std::cout << "SCISSOR	| "   << beats(sc, sc) << "		" << beats(sc, pa) << "		" << beats(sc, st) << "	" << std::endl;
	std::cout << "PAPER 	| " << beats(pa, sc) << "		" << beats(pa, pa) << "		" << beats(pa, st) << "	" << std::endl;
	std::cout << "STONE 	| " << beats(st, sc) << "		" << beats(st, pa) << "		" << beats(st, st) << "	" << std::endl;
	std::cout << std::endl;
	
	intrepretation();
	
	return (0);
}

bool beats(std::string a1, std::string a2) {
	
	if (a1 == "SCISSOR" && a2 == "SCISSOR") {
		return (false);
	} if (a1 == "SCISSOR" && a2 == "PAPER") {
		return (true);
	}if (a1 == "SCISSOR" && a2 == "STONE") {
		return (false);
	}if (a1 == "PAPER" && a2 == "SCISSOR") {
		return (false);
	}if (a1 == "PAPER" && a2 == "PAPER") {
		return (false);
	}if (a1 == "PAPER" && a2 == "STONE") {
		return (true);
	}if (a1 == "STONE" && a2 == "SCISSOR") {
		return (true);
	}if (a1 == "STONE" && a2 == "PAPER") {
		return (false);
	} if (a1 == "STONE" && a2 == "STONE") {
		return (false);
	} else {
		std::cout << "invalid entry" << std::endl;
		return (false);
	}
	
}



void prompt() {
	
	std::cout << "In a children’s game called Scissors–Paper–Stone, the two players simultaneously select a member of the set {SCISSORS, PAPER, STONE} and indicate their selections with hand signals. If the two selections are the same, the game starts over. If the selections differ, one player wins, according to the relation beats." << std::endl;
	
}


void intrepretation() {
	std::cout << "Sometimes describing predicates with sets instead of functions is more convenient." << std::endl;
	std::cout << "The predicate P : D−→ {TRUE, FALSE} may be written (D, S), " << std::endl;
	std::cout << "where S = {a ∈ D| P(a) = TRUE}, or simply S if the domain D is obvious from the context." << std::endl;
	std::cout << "Hence the relation beats may be written... " << std::endl;
	
	std::cout << "{(SCISSORS, PAPER), (PAPER, STONE), (STONE, SCISSORS)}." << std::endl;
}







