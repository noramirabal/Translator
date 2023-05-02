#include "FileProcessor.h"
#include <iostream>

using namespace std;

int main(int argc,char** argv){
    //instantiate a fileprocessor
    FileProcessor obj1;
    //translate the provided input file to ROV using the file processor
    obj1.processFile(argv[1],argv[2]);
    return 0;
}
