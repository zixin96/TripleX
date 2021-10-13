#include <iostream>

void PrintIntroduction(int Difficulty)
{
    // print welcome messages to the terminal
    std::cout << "\n\nYou are a secret agent breaking into a level " << Difficulty;
    std::cout << " secure server room...\nYou need to enter the correct codes to continue...\n\n";
}

bool PlayGame(int Difficulty)
{
    PrintIntroduction(Difficulty);

    const int CodeA = rand();
    const int CodeB = rand();
    const int CodeC = rand();

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // print sum and product to the terminal
    std::cout << "+ There are 3 numbers in the code";
    std::cout << "\n+ The codes add-up to: " << CodeSum;
    std::cout << "\n+ The codes multiply to give: " << CodeProduct << std::endl;

    // store player guess
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    // check if the players guess is correct
    if(GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "\n*** Well done agent! You have extracted a file! keep going! ***";
        return true;
    }
    else 
    {
        std::cout << "\n*** You entered the wrong code! Careful agent! try again! ***";
        return false;
    }
}


int main()
{
        std::cout << R"(           
           __________                                 
         .'----------`.                              
         | .--------. |                             
         | |########| |       __________              
         | |########| |      /__________\             
.--------| `--------' |------|    --=-- |-------------.
|        `----,-.-----'      |o ======  |             | 
|       ______|_|_______     |__________|             | 
|      /  %%%%%%%%%%%%  \                             | 
|     /  %%%%%%%%%%%%%%  \                            | 
|     ^^^^^^^^^^^^^^^^^^^^                            | 
+-----------------------------------------------------+)" << '\n' << '\n';

    int LevelDifficulty = 1;
    const int MaxLevel = 5;
    while(LevelDifficulty <= MaxLevel) // loop game until all levels completed
    {
        bool bLevelComplete = PlayGame(LevelDifficulty); 
        std::cin.clear(); // clears any errors
        std::cin.ignore(); // discards the buffer

        if (bLevelComplete)
        {
            ++LevelDifficulty;
        }
        
    }
    std::cout << "\n*** Great work agent! You got all the files! Now get out of there! " << '\n';
    return 0;
}