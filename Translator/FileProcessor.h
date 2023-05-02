/*  Nora Mirabal
    Student ID: 2370638
    Student Email: mirabal@chapman.edu
    CPSC 350-02
    Assignment 1: Robber Language Translation

    This assignment translates an english text file to the robber language and outputs
    it in the form of an html
*/

#ifndef FILEPROCESSOR_H
#define FILEPROCESSOR_H

#include "Translator.h"
#include <string>
using namespace std;

class FileProcessor {
public:
    //default constructor
    FileProcessor();
    //default destructor
    ~FileProcessor();
    //processFile method
    static void processFile(string inputFileName, string outputFileName);
};

#endif
