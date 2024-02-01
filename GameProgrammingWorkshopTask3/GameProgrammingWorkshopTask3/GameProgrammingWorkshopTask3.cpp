// GameProgrammingWorkshopTask3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    srand(time(0));
    printf("%s ", "Please enter an amount of dice like NdM... Example 4d10");
    string input;
    //int dice;
    cin >> input;
    size_t pos = input.find("d");
    int dice = stoi(input.substr(0, pos));
    int diceSize = stoi(input.substr(pos+1));
    int rolledValue = 0;
    for (size_t i = 0; i < dice; i++)
    {
        rolledValue += (rand() % diceSize)+1;
    }
    cout << "Your rolled value is: " << rolledValue << endl;
}
