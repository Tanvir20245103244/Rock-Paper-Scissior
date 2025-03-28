#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
// computer move
char getComputerMove()
{
    int move = rand() % 3;

    if (move == 0)
    {
        return 'r';
    }
    else if (move == 1)
    {
        return 'p';
    }
    return 's';
}
// function for getting the result

int getresult(char player, char computer)
{
    if (player == computer)
    {
        return 0;
    }

    if (player == 'r' && computer == 's')

    {
        return 1;
    }

    if (player == 's' && computer == 'r')

    {
        return -1;
    }

    if (player == 'r' && computer == 'p')

    {
        return -1;
    }

    if (player == 'p' && computer == 'r')

    {
        return 1;
    }

    if (player == 's' && computer == 'p')

    {
        return 1;
    }

    if (player == 'p' && computer == 's')

    {
        return -1;
    }

    return 0;
}

int main()

{
    char playermove;

    cout << " WEELCOME TO THE GAME " << endl;

    cout << "Enter r for rock" << endl;
    cout << "Enter p for paper" << endl;
    cout << "Enter s for scissor" << endl;

    cout << "Enter your move: " << endl;

    srand(time(0));

    while (true)
    {

        cin >> playermove;

        if (playermove == 'r' || playermove == 'p' || playermove == 's')
        {
            break;
        }

        cout << "Invalid input. Try again." << endl;
    }
    
    //computer move

    char computermove = getComputerMove();

    int result = getresult(playermove, computermove);
//showing moves 
    cout << "Computer move:" << computermove << endl;
    cout << "Player move:" << playermove << endl;
//results
    if (result == 0)
    {
        cout << "The game is tie" << endl;
    }

    if (result == 1)
    {
        cout << "Congratulation you win" << endl;
    }
    else
    {

        cout << "You lose the game " << endl;
    }

    return 0;
}
