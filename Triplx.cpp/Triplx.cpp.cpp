#include <iostream>

int main()
{
	// This is where we define the string and the output of what we want the user to experience. 
	std::cout << "You are a secret agent breaking into a secure server room";
	std::cout << std::endl;
	std::cout << "You need to enter the correct codes to continue...";

	//  Declare 3 number code. CONST is when the variable can not be manipulated after the declaration, which is after we define the variable. 
	const int CodeA = 3;
	const int CodeB = 3;
	const int CodeC = 2;

	// This is where we create the equation of what we are wanting 
	const int CodeSum = CodeA + CodeB + CodeC;
	const int CodeProduct = CodeA * CodeB * CodeC;
	 
	// Print sum and product to the terminal
	std::cout << std::endl;
	std::cout << "There are 3 numbers in the code" << std::endl;
	std::cout << "The codes add-up to: " << CodeSum << std::endl;
	std::cout << "The codes multiply to: " << CodeProduct << std::endl;

	int GuessA, GuessB, GuessC;

	std::cin >> GuessA;
	std::cin >> GuessB;
	std::cin >> GuessC;
	
	int GuessSum = GuessA + GuessB + GuessC;
	int GuessProduct = GuessA * GuessB * GuessC;

	if (GuessSum == CodeSum && GuessProduct == CodeProduct)
	{
		std::cout << " You Win!";
	}
	else
	{
		std::cout << " You Lose!";
	}

	return 0;
}