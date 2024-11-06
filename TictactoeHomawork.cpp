#include <iostream>
using namespace std;

void ArreyOfArea(char** field) {  // Function to create Area
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << field[i][j] << " ";
        }
        cout << endl;
    }
    

}

void CheckOfWin(int amountOfFreePlaces, char symbol, char** field) { //Function to check Win
    if (field[0][0] == field[0][1] && field[0][0] == field[0][2] && field[0][0] != '+') {
        cout << "Winner is: " << symbol << endl;
        /*break;*/
    }

    if (amountOfFreePlaces > 0) {
        /*continue*/
    }
    else {
        cout << "Draw" << endl;
        /*break*/;
    }
}

void main()
{
    

    char** field = new char* [3]; // announcement of arrey field.

    
    for (int i = 0; i < 3; i++) { 
        field[i] = new char[3];
    }

    for (int i = 0; i < 3; i++) { // initialization of arrey with +
        for (int j = 0; j < 3; j++) {
            field[i][j] = '+';
        }
    }

    

    bool isGameOver = false;
    char symbol = 'X';
    int countOfSteps = 1;
    int amountOfFreePlaces = 9;


    cout << "Tic-Tac-Toe Game" << endl;
    while (!isGameOver) {


        ArreyOfArea(field);
        cout << "<------------>" << endl;

        if (countOfSteps % 2 == 0) {
            symbol = '0';
        }
        else {
            symbol = 'X';

        }
        countOfSteps++;
        

        int x, y;
        cout << "Enter a row of place: " << endl;
        cin >> x;
        cout << "<------------------------>" << endl;
        cout << "Enter a column of place: " << endl;
        cin >> y;
        cout << "<------------------------>" << endl;

        /*while (field[x][y] != '+') {
            cout << "Enter a row of place: ";
            cin >> x;
            cout << endl << "Enter a column of place: ";
            cin >> y;
        }*/

        field[x][y] = symbol;
        amountOfFreePlaces--;

        
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << field[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < 3; i++) {
        delete[] field[i];
    }

    delete[] field;
    field = nullptr;
}