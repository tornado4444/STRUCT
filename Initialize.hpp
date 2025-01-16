/*
 ▄         ▄  ▄▄▄▄▄▄▄▄▄▄▄  ▄▄▄▄▄▄▄▄▄▄▄       ▄▄▄▄▄▄▄▄▄▄▄  ▄▄▄▄▄▄▄▄▄▄▄  ▄            ▄▄▄▄▄▄▄▄▄▄▄
▐░▌       ▐░▌▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌     ▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░▌          ▐░░░░░░░░░░░▌
▐░▌       ▐░▌▐░█▀▀▀▀▀▀▀█░▌▐░█▀▀▀▀▀▀▀█░▌     ▐░█▀▀▀▀▀▀▀▀▀  ▀▀▀▀█░█▀▀▀▀ ▐░▌          ▐░█▀▀▀▀▀▀▀▀▀
▐░▌       ▐░▌▐░▌       ▐░▌▐░▌       ▐░▌     ▐░▌               ▐░▌     ▐░▌          ▐░▌
▐░█▄▄▄▄▄▄▄█░▌▐░█▄▄▄▄▄▄▄█░▌▐░█▄▄▄▄▄▄▄█░▌     ▐░█▄▄▄▄▄▄▄▄▄      ▐░▌     ▐░▌          ▐░█▄▄▄▄▄▄▄▄▄
▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌     ▐░░░░░░░░░░░▌     ▐░▌     ▐░▌          ▐░░░░░░░░░░░▌
▐░█▀▀▀▀▀▀▀█░▌▐░█▀▀▀▀▀▀▀▀▀ ▐░█▀▀▀▀▀▀▀▀▀      ▐░█▀▀▀▀▀▀▀▀▀      ▐░▌     ▐░▌          ▐░█▀▀▀▀▀▀▀▀▀
▐░▌       ▐░▌▐░▌          ▐░▌               ▐░▌               ▐░▌     ▐░▌          ▐░▌
▐░▌       ▐░▌▐░▌          ▐░▌               ▐░▌           ▄▄▄▄█░█▄▄▄▄ ▐░█▄▄▄▄▄▄▄▄▄ ▐░█▄▄▄▄▄▄▄▄▄
▐░▌       ▐░▌▐░▌          ▐░▌               ▐░▌          ▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌
 ▀         ▀  ▀            ▀                 ▀            ▀▀▀▀▀▀▀▀▀▀▀  ▀▀▀▀▀▀▀▀▀▀▀  ▀▀▀▀▀▀▀▀▀▀▀

*/

#pragma once

#include <iostream>
#include <fstream>

using std::ofstream;

// the struct of Footballers, for initialize for GLOBAL the footbalers arguments
struct Footballers {
	std::string surname;
	signed age;
	int count_games;
	int count_goals;
};

// THE STRUCT FOR INITIALIZE THE PLAYERS FOR SEARCH ARGUMENTS
struct Players {
	// AMLUA(SIZE)
	static const int amplua = 5;

	Footballers play[amplua]; // massive the footballers
	ofstream textfiles; // for the write .txt files(THE FILE THREAT)
	void myInitialize();
	bool textFile(const char* filename);
	void lessPlaying();
	/*void theBestPlayer() const;*/ // NOT CORRECT, BECAUSE WE SPECIFY THIS FUNCTION FURTHER DOWN
	void theBestPlayer();

	// DESTRUCTOR FOR CLOSE THE FILE
	~Players() {
		if (textfiles.is_open()) { // For the open File
			textfiles.close(); // just close the file
		}
	}
};