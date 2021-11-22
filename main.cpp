#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

//Constants for Processor Execution Time
int FP_ADDER_EXECUTION_COUNT = 2; 
int FP_MULTIPLIER_EXECUTION_COUNT = 10;
int FP_DIVIDER_EXECUTION_COUNT = 40;
int FP_Integer_UNIT_EXECUTION_COUNT = 1;

//Global Variables: Registers
float Fp_Registers[32];
int Int_Registers[32];




//ConvertTextToVector: Converts text file to vector containing each lines string
vector<string> ConvertTextToVector(){
    vector<string> text_file_lines;

    //Import text file
    string filename, line_text;
    filename = "input.txt";
    ifstream file(filename);
    
    //Itterate through text file and store lines in vector
    while (getline(file, line_text)){
        text_file_lines.push_back(line_text);
    }

    return text_file_lines;
}
///////////////////////////////////////////////////////////////////////////////



//Main Funciton
int main(){

    //Call ConvertTextToVector function to get vector of text file.
    vector<string> text_file_lines = ConvertTextToVector();

    //Test Print Vector with iterator
    for(vector<string>::iterator it = text_file_lines.begin(); it != text_file_lines.end(); ++it){
        cout << *it <<endl;

    }



return 0;
}