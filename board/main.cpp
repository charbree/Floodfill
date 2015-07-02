#include <iostream>
#include <fstream>
#include "board.h"

using namespace std;

int main()
{
   //Variable Declarations
   string file_name;
   char fill_character;
   int row, column = 0;

   //Prompt for file name/file path
   cout << "Enter filename: ";
   cin >> file_name;
   cout << "Starting Image" << endl;

   //Board object declaration
   board board1;
   board1.read_board(file_name);
   board1.print();

   //Prompt for array coordinates and new character
   cout << "Enter x (column): ";
   cin >> column;
   cout << "Enter y (row): ";
   cin >> row;
   cout << "Enter character to fill in grid: ";
   cin >> fill_character;

   //Execute floodfill alorithum
   board1.floodfill(column, row, fill_character);
   board1.print();

   return 0;
}
