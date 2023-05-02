/*  Nora Mirabal
    Student ID: 2370638
    Student Email: mirabal@chapman.edu
    CPSC 350-02
    Assignment 1: Robber Language Translation

    This assignment translates an english text file to the robber language and outputs
    it in the form of an html
*/

#include "Translator.h"
#include <iostream>
#include <sstream>

//default constructor 
Translator::Translator(){}

//destructor
Translator::~Translator(){}

//translates a single english word to ROV, takes in a string
string Translator::translateEnglishWord(string eWord){
    //initializes an empty string to hold the translated word
    string translatedEWord;
    //iterates through the length of the word
    for (int i = 0; i < eWord.length(); i++){
        //creates a character type to hold the letter of the word in the loop
        char tempChar = eWord.at(i);
        //passes each letter through the translated letter method
        translatedEWord += letterType(tempChar);
    }
//returns the translated word    
return translatedEWord;
}

//translates a single english sentence to ROV, takes in a string.
string Translator::translateEnglishSentence(string eSentence){
    //initializing string to hold each individual word
    string word;
    //initializing string to hold the translated sentence
    string translatedESentence;
    //creating a string stream
    istringstream ss(eSentence);
    //itterating through the sentence word by word
    while (ss >> word){
        //translating and storing the sentence in the translated sentence string
        translatedESentence += translateEnglishWord(word) + " ";
    }
//returning the translated sentence
return translatedESentence;
}

string Translator::letterType(char letter){
    //creating a string to hold the translated letter
    string translatedLetter;
    //enters if statement if the character is in the alphabet
    if (isalpha(letter)){
        //enters if statement if the character is a vowel (uppercase or lowercase)
        if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' || letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U'){
            //passes the character through the translateSingleVowel method and sets the translated vowel equal to the translation
            translatedLetter = Model::translateSingleVowel(letter);
        //enters the else if the character was in the alphabet but is not a vowel
        } else{
            //passes the character through the translateSingleConsonant method and sets the translated consonant equal to the translation
            translatedLetter = Model::translateSingleConsonant(letter);
        }
    //enters the else if the character is not in the alphabet
    } else{
        //sets the translated letter to the letter
        translatedLetter = letter;
    }
//returns the translated letter as a string
return translatedLetter;
}
