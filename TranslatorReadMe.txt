Identifying Information:
    - Nora Mirabal
    - Email: mirabal@chapman.edu

Source Files:
    - Model.h
    - Model.cpp
    - Translator.h 
    - Translator.cpp
    - FileProcessor.h 
    - FileProcessor.cpp
    - main.cpp

Errors/Deviations/Limitations/Specifications:
    - No known runtime errors
    - Translator class includes a private method letterType that checks if a character is a 
        vowel, consonant, or a symbol and translates them accordingly (used in the translateEnglishWord method)

References:
    - StringStream idea from office hours (Erik Linstead)
    - StringStream syntax: https://www.softwaretestinghelp.com/stringstream-class-in-cpp/
    - input file syntax: https://www.tutorialspoint.com/how-to-read-a-text-file-with-cplusplus
    - output file syntax: https://stackoverflow.com/questions/11206604/create-html-reports-using-c
    - HTML syntax: https://html.com/#Creating_Your_First_HTML_Webpage 

Instructions:
    - navigate to the file using cd and appropriate directory names
    - compile with "g++ Model.cpp Translator.cpp FileProcessor.cpp main.cpp"
    - run ./a.out "txt file name" "html name" (Do not enter .txt, .html or file path, only file name)

