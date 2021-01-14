// #include is a Standard library and the <iostream> is a header file
#include <iostream>
#include <string>
#include <ctime>
void PrintIntroduction(int Difficulty)
{
    // Printing Out A Text To The Output Also Known As Expression Statements
    std::cout << "\n\nYou Are Being Chased By A Dinosaur Your Level Is: " << Difficulty;
    std::cout << "\n";
    std::cout << " You Need To Run As Quickly As Possible\n\n";
    std::cout << "\n";
}
bool PlayGame(int Difficulty)
{
     PrintIntroduction(Difficulty);

    
    // This is Where We Declare Our Variables and Making The Variables value randomize so we used rand() and we also made the difficulty harder
    // so we put % Difficulty + Difficulty
    const int CodeA = rand() % Difficulty + Difficulty;
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;
    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // This Is Where We Print Our Variables Values
    std::cout << "\n";
    std::cout << "\n+ There Are 3 Numbers In The Code";
    std::cout << "\n+ The Sum Is Adding A Number: " << CodeSum;
    std::cout << "\n+ The Product Is Multiplying The 3 Numbers: "<< CodeProduct;
    std::cout << "\n";

    // This Is Where We Declare Our Guess Variables
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;
    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;
    float Health = 100;
    std::cout << "Your Guess Is: " << GuessA << GuessB << GuessC << std::endl;
    // Checking if GuessSum and CodeSum Are Equal and Checking GuessProduct And CodeProduct Are Equal Also
    if(GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "\nCongratulation! You Win!\n";
        return true;
    }
    
    // Checking If The Condition Of The If Statement Is False If The If Statement Is False The Else Statement Will Print This
    // To The Terminal You Lose!!! Better Luck Next Time!
    else
{
    std::cout << "\nYou Lose!!! Better Luck Next Time!\n";
    std::cout << "You Have " << --Health << " Left";
    return false;
}

}

// This Is A Main Fuction This Is Where Your Code Starts
int main()
{
    srand(time(NULL));
    int LevelDifficulty = 1;
    int const MaxLevel = 20; 
   while(LevelDifficulty <= MaxLevel)
   {
      bool bLevelCompleted = PlayGame(LevelDifficulty);
       std::cin.clear(); // Clears Any Errors
       std::cin.ignore(); // Discards The Buffer

       if (bLevelCompleted)
       {
           ++LevelDifficulty;
           
          
       }
       
   }
   std::cout << "Congratz! You Completed All The Levels! You Lost The Dinosaur!";
    return 0;
}