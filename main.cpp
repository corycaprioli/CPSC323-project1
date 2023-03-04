#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include "lexer.h"

int main() {
  std::string filename;
	std::string line;

  std::ifstream in_file;
	std::ofstream out_file("output.txt");

	do {
    //ask for filename
		std::cout << "Enter an input file name or \"stop\" to exit program: ";
		std::cin >> filename;

    if (filename != "stop") {
      in_file.open(filename); //open file

      //check if file is open
      if (!in_file.is_open()) {
        throw std::invalid_argument("file does not exist");
        return 0;
      }

			out_file << "lexer output:\n";
			out_file << std::left << std::setw(20) << "Token" << std::setw(20) << "Lexeme" << std::endl << std::endl;

      Lexer analize; //construct lexer

      while (!in_file.eof()) {
        analize.lexer(in_file);

				//print if lexeme doesnt = EOF
				if (analize.getLexeme() != "EOF") {
					out_file << std::left << std::setw(20) << analize.getToken() << std::setw(20) << analize.getLexeme() << std::endl;
				}
      }

      in_file.close();
			out_file << std::endl;
      std::cout << "\noutput is in \"output.txt\"\n\n";
    }
  } while (filename != "stop");

	out_file.close();
  std::cout << "\nlexical analizer is done\n\n";
  return 0;
}
