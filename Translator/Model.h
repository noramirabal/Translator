/*  Nora Mirabal
    Student ID: 2370638
    Student Email: mirabal@chapman.edu
    CPSC 350-02
    Assignment 1: Robber Language Translation

    This assignment translates an english text file to the robber language and outputs
    it in the form of an html
*/

#ifndef MODEL_H
#define MODEL_H

#include <string>
using namespace std;


class Model {
public:
    //default constructor
    Model();    
    //default destructor    
    ~Model();
    //method declaration for consonant translation
    static string translateSingleConsonant(char consonant);
    //method declaration for vowel translation
    static string translateSingleVowel(char vowel);      
};

#endif