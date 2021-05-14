#include "colorss.h"
#include <string>
#include <vector>
#include <fstream>

using namespace std;

string colorss::whichColorFile(string &colorFile)
{
if (colorFile == "Blue and Red" || colorFile == "Blue and red" || colorFile == "blue and red" || colorFile == "Red and Blue" || colorFile == "Red and blue"){
colorFile = "zblue&red";
}

else if (colorFile == "Green and Purple" || colorFile == "Green and purple" || colorFile == "green and purple" || colorFile == "Purple and Green" || colorFile == "Purple and green"){
colorFile = "zgreen&purple";
}

else if (colorFile == "Yellow and Blue" || colorFile == "Yellow and blue" || colorFile == "yellow and blue" || colorFile == "Blue and Yellow" || colorFile == "Blue and yellow"){
colorFile = "zyellow&blue";
}
return colorFile;
}

void colorss::copyFile(int color, string colorFile, string nameOf){

string colorList [color];
fstream reader;
string filename = colorFile;
string line = "";



reader.open(filename, ios:: in );

ofstream outfile;

outfile.open(nameOf);

outfile << "Here are your " << color << " colors:" << endl;

if ( reader.is_open() )
{
for (int i=0; i< (sizeof(colorList)/sizeof(colorList[0])); i++)
{
getline(reader,line);
outfile << line << endl;
}
}
outfile.close();
}