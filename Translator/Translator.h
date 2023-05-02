/*  Nora Mirabal
    Student ID: 2370638
    Student Email: mirabal@chapman.edu
    CPSC 350-02
    Assignment 1: Robber Language Translation

    This assignment translates an english text file to the robber language and outputs
    it in the form of an html
*/

#ifndef TRANSLATOR_H
#define TRANSLATOR_H

#include "Model.h"
#include <string>
using namespace std;

class Translator {
public:
    //default constructor
    Translator();  
    //default destructor
    ~Translator();
    //method declaration for translating a single english word
    static string translateEnglishWord(string eWord);
    //method declaration for translating a single english sentence
    static string translateEnglishSentence(string eSentence);

private:
    //method declartion for checking if a letter is a vowel or a consonant or punctuation and translates the individual char
    static string letterType(char letter);

};

#endif