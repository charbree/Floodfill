#include <iostream>
#include <fstream>
#include "board.h"

using namespace std;


void board::read_board(string board_name) {
    //Open file
    ifstream infile;
    infile.open(board_name.c_str());

    //If file does not exist
    if (infile.fail()) {
        cerr << "File does not exist." << endl;
        cerr << "Please exit the program and try again." << endl;
    }

    //Loop for array rows
    for (int i = 0; i < MAX; i++) {

        //Loop for array columns
        for (int j = 0; j < MAX; j++) {

            //Read in data from file to array
            infile.get(canvas[i][j]);
        }
        //Account for new line character
        infile.get();
    }

    //Close file
    infile.close();
}


void board::print() {
    //Loop for array rows
    for (int i = 0; i < MAX; i++) {

        //Loop for array columns
        for (int j = 0; j < MAX; j++) {

            //Print out array
            cout << canvas[i][j];
        }

        //Account for new line character
        cout << '\n';
    }

    cout << endl;
}

void board::floodfill(int x, int y, char fill_character) {
    //Checks array borders.
    if (x < 0 || x >= MAX || y < 0 || y >= MAX)
        return;
    
    //Verifies array location for 'X' and fill_character
    if (canvas[x][y] == 'X' || canvas[x][y] == fill_character)
        return;

    //Sets location to new character
    canvas[x][y] = fill_character;

    //Performs floodfill north, south, east, and west of location
    floodfill(x+1, y, fill_character);
    floodfill(x-1, y, fill_character);
    floodfill(x, y+1, fill_character);
    floodfill(x, y-1, fill_character);

}
