# Hexadecimal Color Value File Converter

## Description

The main objective of this program is to create a palette from a set of two colors with your ammout needed and to minimize problematic color combos.

### v0.2 Updates

I fixed an issue with the "type y/n" part of the program. I also added new options for the user to pick from. I also added two new functions.

### v1.0 Updates

I added a class to organize my functions. I also added a new return type and fixed the coding so it's easier to read and removed random semicolons.


## Developer

Jason Alvarez

## Example

To run the program, give the following commands:

```
g++ --std=c++11 *.cpp -o cvp
./cvp
```

Here is an example of the program running: 

```
The main objective of this program is to create a colorblind safe
palette from a select set of two colors.
From these options please choose your color combination 
* Blue and Red
* Green and Purple
* Yellow and Blue
Please type the full color combination ex: Yellow and Blue
Brown and gray
From these options please choose your color combination 
* Blue and Red
* Green and Purple
* Yellow and Blue
Please type the full color combination ex: Yellow and Blue
Blue and Red
How many colors will be needed?
(Please type a integer between 2 and 21)
7
So 7 colors will be needed from Blue and Red?
type (y/n)
y
What would you like to call your palette?: *please make it one word*
test
```
Here's the output file: **test** from the example.

```
Here are your 7 colors:
#005ab5
#0b58ae
#1656a6
#21549f
#2c5297
#375090
#424e88
```

Give an explanation

When the user enters `Brown and Gray` the program detects that `Brown and Gray` is not part of the three options available so the program repeats the three options until `Blue and Red` is detected then the program continues. The program then sees that `7` colors will be needed which is between 2 and 21 so the program continues. The program then asks the user to name their file.




## C++ Guide

### Variables and Data Types
I have used the integer, character, and string data types to save user input such as the number of colors they will need or if they want to continue with the correct amount of colors. I also used an fstream variable get the correct color file open.

### Console Input and Output
I used multiple user input to get the right file to open, to get the amount of colors the user needs, to have the user confirm the correct amount of colors, to get the name of the users file.

### Decisions
I used two `if` statements one being at the end of the first `do while` loop so that if the user enters `Y` or `y` the program will continue the other `if` statement is in one of the functions.The `if` statement is determining if the "color.txt" file is open.

### Iteration

!!Give examples of what the loops do and why they need to loop!!

I used three `do while` loops and one `for` loop. The first `do while` loop is making sure the user enters one of the three pre selected color combinations, the second `do while` loops is making sure the user types a integer between 2 and 21, and the last `do while` loops is getting confirmation that the program detected the correct amount of colors the user needs. The `for` loop is used in the function to index the array until it reaches zero.

### File Input and Output
I allowed the user to create their own file then displayed their inputs in the file.

### Arrays/Vectors
I created an `array` using the amount of colors the user needed.

### Functions

The first function is string and is returning the "whatColor" to the correct file name based on the users input. The second function is a void function. This function is opening the color file and creating the users file then putting the amount of hexadecimal color values the user requires from "color.txt" in the user file.

### Classes
The class I created is called "colorss" and only includes public members in "colorss.h". In "colorss.cpp" I have two functions I've used before.  !!Rephrase this sentence to make sense.!!
