#include <iostream>

int main()
{
    std::string questions[] = {"1. What year was C++ created?: ",
                              "2. who invented C++?: ",
                              "3. What is the predecessor of C++?: ",
                              "4. is the Earth REALLY flat?: "};

    std::string options[][4] = {{"A. 1964", "B. 1969", "C. 1985", "D. 1989"},
                               {"A. Guido van Rossum", "B. Bjarne Stroustrup", "C. Michael Jordan", "D. Mark Zuckerberg"},
                               {"A. C", "B. C+", "C. B/+", "D. B++"},
                               {"A. Yes", "B. No", "C. Maybe", "D. What's Earth??"}}; // add a sub-set of the options for each questions

    char answerKey[] = {'C', 'B', 'A', 'B'};
    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score;

    for(int i = 0; i < size; i+=1) // continue the question
    {
        std::cout << "===================" << '\n';
        std::cout << questions[i] << '\n';
        std::cout << "===================" << '\n';

        for(int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j+=1) // continue the answer
        {
            std::cout << options[i][j] << '\n';
        }
        
        std::cin >> guess;
        guess = toupper(guess); // will capitalize the character the user enters in

        if(guess == answerKey[i]) // check the answers
        {
            std::cout << "CORRECT!\n";
            score++; // couting the score +1
        }
        else
        {
            std::cout << "WRONG!\n";
            std::cout << "Answer: " << answerKey[i] << '\n';
        }
    }
    // conclude:
    
    std::cout << "===================" << '\n';
    std::cout << "     RESULTS     \n";
    std::cout << "===================" << '\n';
    std::cout << "CORRECT GUESSES: " << score << '\n';
    std::cout << "# of Questions: " << size << '\n';
    std::cout << "SCORE: " << (score/(double)size)*100 << "%"; 
    
    return 0;
}