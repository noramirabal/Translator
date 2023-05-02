/*  Nora Mirabal
    Student ID: 2370638
    Student Email: mirabal@chapman.edu
    CPSC 350-02
    Assignment 1: Robber Language Translation

    This assignment translates an english text file to the robber language and outputs
    it in the form of an html
*/

#include "Model.h"
#include <iostream>

//default constructor 
Model::Model(){}

//destructor
Model::~Model(){}

//translates a single consonant from english to ROV, takes in a character and returns a string
string Model::translateSingleConsonant(char consonant){
    //initializes a new empty string to hold the translated consonant
    string newConsonant;
    //adds the consonant to the empty string
    newConsonant.push_back(consonant);
    //adds an o to the end of the string
    newConsonant.push_back('o');
    //enters if statement if the consonant passed through the method is uppercase
    if (isupper(consonant)){
        //enters the if and adds the consonant as a lowercase to the string
        newConsonant.push_back(tolower(consonant));
    //enters the else if the consonant was lowercase
    } else {
        //adds the consonant to the string
        newConsonant.push_back(consonant);        
    }
//returns the translated consonant as a string
return newConsonant;  
}

//translating a single vowel to ROV, takes in a character and returns a string
string Model::translateSingleVowel(char vowel){
    //initializes an empty string to hold to translated vowel
    string newVowel;
    //converts the vowel character to a string
    newVowel.push_back(vowel);
//returns the translated vowel as a string
return newVowel;
}
