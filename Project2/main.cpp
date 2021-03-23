#include <iostream>
#include<ctime>

int main() {
    std::srand(time(nullptr));
    std::cout << "game \n";
    int max = 7;
    int given;
    int toguess = 69;
    bool didit = false;
    toguess = std::rand() % 100; 
    for (int i = 1; i <= max; i++)
    {

    std:: cout << "Give your " << i << " guess" << std::endl; // Type a number and press enter

    std::cin >> given; // Get user input from the keyboard
 

    if (given < toguess)
    {
        std::cout << "smaller " << std::endl;
    }
    else if (given > toguess)
    {
        std::cout << "bigger " << std::endl;
    }
    else
    {
    didit = true;
    break ;
        
    }
    }

    std::cout << (didit ? "Nice Bitch!" : "Looser") << std::endl;
    return 0;
}