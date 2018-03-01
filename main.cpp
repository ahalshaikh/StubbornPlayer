#include "SecretDoor/SecretDoor.h"
#include <iostream>

using namespace std;

int main()
{
        SecretDoor game;

        int gamesRepeat = 0;

        int gamesWon = 0;

        char input;

        cout<<"How many times would you like to play?"<<endl;
        cin>>gamesRepeat;

        for(int i = 0; i < gamesRepeat; i++)
        {
                game.newGame();

                game.guessDoorC();
                game.guessDoorC();


                if( game.isWinner() == true)
                {
                        gamesWon++;
                }
        }

        cout<<"You won "<<gamesWon<<" times."<<endl;


        return 0;
}
