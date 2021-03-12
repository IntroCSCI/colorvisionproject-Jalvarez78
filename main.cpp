//Author: Jason Alvarez
#include <iostream>
#include <fstream>
using namespace std;


int main()
{

  int colors;
  char letter;
  fstream reader;
  string paletteName;
  string line;
  string fileName = "colors.txt";

  cout << "The main objective of this\n" << "program is to create\n" << "a palette with\n" << "your ammout of colors needed\n" << "and to minimize\n" << "problematic color combos\n";
 
 
  do {
    cout << "How many colors will be needed?\n"<< "(Please type a integer bigger than 1)" << endl;
    cin >> colors;
  }
  while (colors <= 2 && colors >= 100);
    
  do {
     cout << "So " << colors << " colors will be needed?" << endl;
    cout << "type y/n\n";
    cin >> letter;
  } 
  while ( letter != 'y' && letter != 'Y' && letter != 'n' && letter != 'N');
  
  
  if (letter == 'y' || letter == 'Y'){
  }

  cout << "What would you like to call your palette?:\n";
  cin >> paletteName;
 
  ofstream outfile;

  outfile.open(paletteName);

  outfile << "Here are your colors " << colors;

  outfile.close();
  
  return 0;
}
