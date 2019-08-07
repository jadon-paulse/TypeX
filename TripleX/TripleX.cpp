#include <iostream>

void PrintIntroduction()
{
	//Prints welcome messages
	std::cout << "\nYou are part of a hacker group trying too access government secrets...\n";
	std::cout << "Enter the right access code to continue onto new secrets...\n\n";
}

void PlayGame()
{

	PrintIntroduction();

	//Declaring 3 number code 
	const int CodeA = 4;
	const int CodeB = 6;
	const int CodeC = 2;

	const int CodeSum = CodeA + CodeB + CodeC;

	const int CodeProduct = CodeA * CodeB * CodeC;

	//Prints sum and product too terminal 
	std::cout << std::endl;
	std::cout << "There are 3 numbers in the code\n";
	std::cout << "\nThe codes add-up to: " << CodeSum;
	std::cout << "\nThe codes multiply to give: " << CodeProduct << std::endl;

	//Store player guess
	std::cout << "Enter your codes: \n";

	int GuessA, GuessB, GuessC;

	std::cin >> GuessA >> GuessB >> GuessC;

	//Prints product and sum of player's guess too the terminal
	int GuessProduct = GuessA * GuessB * GuessC;

	int GuessSum = GuessA + GuessB + GuessC;

	//Check if players guess is correct
	if (GuessSum == CodeSum && GuessProduct == CodeProduct)
	{
		std::cout << "Access Granted!\n";
		std::cout << "Classified file #001: We have been tracking a hacker group who has been exposing us for a while now.";
	}
	else
	{
		std::cout << "\nAccess Denied!";
	}
}

int main()  
{   
	while (true) 
	{
		PlayGame();

		std::cin.clear();

		std::cin.ignore();
	}
	
	return 0;          
}
