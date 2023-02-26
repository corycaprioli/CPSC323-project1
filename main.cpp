#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "input.txt"
//#include "output.txt"

//void lexer() {}
/* Keyword, Seperator, Identifier, Operator, Real, Integer */

int main() {

  /*std::vector<std::string> keywords{"if", "for", "while", "do", "int", "double", "float", "bool", };
  std::vector<std::string> operators{"+", "-", "*", "/", "++", "%", "--", "=", "+=", "-=", "*=", "/=", "%=", "==", "!=", ">", "<", ">=", "<=", "&&", "||", "!", "&", "|", "^", "~", "<<", ">>"};
  std::vector<std::string> seperators{"(", ")", ";", "{", "}", };
  
  int token;*/

  std::fstream fs("input.txt"); 
    char c; 
    while (fs >> c) 
    { 
        std::cout << c; 
    }  

  return 0;
}
