/*  Nora Mirabal
    Student ID: 2370638
    Student Email: mirabal@chapman.edu
    CPSC 350-02
    Assignment 1: Robber Language Translation

    This assignment translates an english text file to the robber language and outputs
    it in the form of an html
*/

#include "FileProcessor.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//default constructor
FileProcessor::FileProcessor(){}

//default destructor
FileProcessor::~FileProcessor(){}

//takes in and reads a txt file and outputs an html file, takes in two strings for the names of these two files
void FileProcessor::processFile(string inputFileName, string outputFileName){
    //initializes a string to hold the value of a line from the text file
    string tempString;
    //initializes a string to hold the original text from the text file
    string originalText;
    //initializes a string to hold the translate text from the text file
    string translatedText;
    //creates an fstream for the input file
    fstream inputFile;
    //opens the file to read in from the input file
    inputFile.open(inputFileName,ios::in);
    //enters if the file is open
    if (inputFile.is_open()){
        //reads through the text file line by line
        while(getline(inputFile, tempString)){
            //adds the line of the text file to the original text string
            originalText += tempString + "<br>";
            //translates the line of the text file to ROV and adds it to the translated string
            translatedText += Translator::translateEnglishSentence(tempString) + "<br>";
        }
    }
    //closes the input file
    inputFile.close();
    //creates on ofstream for the output file
    ofstream outputFile;
    //opens the outputfile
    outputFile.open(outputFileName);
    //creates an HTML file that prints out the original text in bold, a line break, and the translated text in italics
    outputFile << "<!DOCTYPE html><html><body><p><b>" << originalText << "</b></p><br><p><i>" << translatedText << "</i></p></body></html>";
    //closes the file
    outputFile.close();
}
