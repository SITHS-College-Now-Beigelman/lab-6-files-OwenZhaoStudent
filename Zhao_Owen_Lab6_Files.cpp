//Group: Owen, Michelle
//10/15/24
//Lab #6: Files

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    //Making variables
    int num1;
    int num2;
    int sum;
    char char1;
    char char2;
    string string1;

    ifstream inFile;
    ofstream outFile;

    //Getting input from inData and outputs from outData
    inFile.open("inData.txt");
    outFile.open("outData.txt");

    cout << "Program to review streams..... " << endl;

    //Calculating sum of numbers from input file
    inFile >> num1 >> num2;
    sum = num1 + num2;
    outFile << "Sum of numbers: " << sum << endl;

    //Calculating next char after the one in input file
    inFile >> char1;
    char2 = char1 + 1;
    outFile << "Next Character: " << char2 << endl;;

    //Getting string from input file
    inFile >> string1;
    outFile << "String: " << string1;

    inFile.close();
    outFile.close();

return 0;
}

/*
inData:
45 50
Y
Hello!

outData:
Sum of numbers: 95
Next Character: Z
String: Hello!
*/