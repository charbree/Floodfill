#ifndef BOARD_H
#define BOARD_H

using namespace std;

//Size of 2d array
const int MAX = 30;

class board {
/*
 * Purpose:
 *    The board class stores the information from a file into a 2d array.  The class uses a
 *    floodfill alorithum to replaces spaces with a fill_character.
 */

    private:
    char canvas[MAX][MAX];
    int rows;
    int columns;


    public:
    void read_board(string board_name);
    /*
     * Description:
     *   Takes the name of the text file as input and reads the "image" into the 2D array.
     *
     *
     * Inputs:
     *   string board_name
     *      File name read in from user.
     *
     * Return:
     *   None
     */


    void floodfill(int x, int y, char fill_character);
    /*
     * Description:
     *   Performs the flood-fill algorithm starting at point (x, y).
     *
     *
     * Inputs:
     *   int x
     *      Integer read in from user that represents row location in 2d array.
     *
     *   int y
     *      Integer read in from user that represents column location in 2d array.
     *
     *   char fill_character
     *      Character read in from user that is used to fill 'spaces' in 2d array.
     *
     *
     * Return:
     *   None
     */


    void print();
    /*
     * Description:
     *   Prints the text-based image that is currently in memory.
     *
     * Inputs:
     *   None
     *
     * Return:
     *   None
     */

};

#endif // BOARD_H
