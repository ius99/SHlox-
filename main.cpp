#include <iostream>
#include <sysexits.h> //exit status
#include <fstream>
#include <sstream>
#include <string>
using namespace std;


int main(char argc, char* argv[]) {

    void runFile(const string &filepath);


    void runREPL();

    int size = argc - 1; //SHlox++ will be the first argument

    if(size > 1) { //greater than 1> neither in repl nor filepath mode
        cout<<"Shlox++ can only be used in REPL or with a filepath."<<endl;
        return 64;
    } else if(size == 1) {
        //filepath mode
        //example: Shlox++ [filepath]
        runFile(argv[1]);
    } else {
        //REPL mode
        runREPL();
    }



    return 0;
}