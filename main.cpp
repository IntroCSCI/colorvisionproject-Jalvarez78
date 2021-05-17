//Author: Jason Alvarez
#include <iostream>
#include <fstream>
#include <vector>
#include "colorss.h"

using namespace std;

int main()
{
  colorss colorType;
  int colors;
  char letter;
  string paletteName;
  string whatColor;


  cout << "The main objective of this program is to create a colorblind safe\npalette from a select set of two colors.\n";

  // Asking the user how many colors they need in their file

  do {
     do{
		  cout << "From these options please choose your color combination \n"<< "* Blue and Red\n" << "* Green and Purple\n" << "* Yellow and Blue\n" << "Please type the full color combination ex: Yellow and Blue" << endl;
      getline(cin,whatColor);
    }
    while (whatColor != "Blue and Red" && whatColor != "Green and Purple" && whatColor != "Yellow and Blue" &&
      whatColor != "Red and Blue" && whatColor != "Purple and Green" && whatColor != "Blue and Yellow" &&whatColor != "blue and red" && whatColor != "green and purple" && whatColor != "yellow and blue" &&
      whatColor != "red and blue" && whatColor != "purple and green" && whatColor != "blue and yellow" && whatColor != "Blue and red" && whatColor != "Green and Purple" && whatColor != "Yellow and blue" &&
      whatColor != "Red and blue" && whatColor != "Purple and Green" && whatColor != "Blue and yellow");
    



    do{
		cout << "How many colors will be needed?\n"<< "(Please type a integer between 2 and 21)" << endl;
    cin >> colors;
    }while (colors < 2 && colors > 21);

		do {
		cout << "So " << colors << " colors will be needed from " << whatColor << "?\n";
    cout << "type (y/n)\n";
    cin >> letter;
		} while (letter != 'y' && letter != 'Y' && letter != 'n' && letter != 'N');

	} while (letter == 'n' || letter == 'N');

  if (letter == 'y' || letter == 'Y')
  { 
  cout << ""; 
  }

  // Asking the user for the name of their file

  cout << "What would you like to call your palette?: *please make it one word*\n";
  cin >> paletteName;

 // End of the Main Program

 // calling the functions that will create and put colors into the users file

  colorType.whichColorFile(whatColor);

  colorType.copyFile(colors, whatColor, paletteName);
  
  return 0;
}


