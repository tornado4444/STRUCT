/*
 ▄▄▄▄▄▄▄▄▄▄▄  ▄         ▄  ▄▄▄▄▄▄▄▄▄▄▄  ▄▄▄▄▄▄▄▄▄▄▄       ▄▄▄▄▄▄▄▄▄▄▄  ▄▄▄▄▄▄▄▄▄▄▄  ▄▄▄▄▄▄▄▄▄▄▄       ▄▄▄▄▄▄▄▄▄▄▄  ▄▄▄▄▄▄▄▄▄▄▄  ▄            ▄▄▄▄▄▄▄▄▄▄▄
▐░░░░░░░░░░░▌▐░▌       ▐░▌▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌     ▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌     ▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░▌          ▐░░░░░░░░░░░▌
 ▀▀▀▀▀█░█▀▀▀ ▐░▌       ▐░▌▐░█▀▀▀▀▀▀▀▀▀  ▀▀▀▀█░█▀▀▀▀      ▐░█▀▀▀▀▀▀▀▀▀ ▐░█▀▀▀▀▀▀▀█░▌▐░█▀▀▀▀▀▀▀█░▌     ▐░█▀▀▀▀▀▀▀▀▀  ▀▀▀▀█░█▀▀▀▀ ▐░▌          ▐░█▀▀▀▀▀▀▀▀▀
	  ▐░▌    ▐░▌       ▐░▌▐░▌               ▐░▌          ▐░▌          ▐░▌       ▐░▌▐░▌       ▐░▌     ▐░▌               ▐░▌     ▐░▌          ▐░▌
	  ▐░▌    ▐░▌       ▐░▌▐░█▄▄▄▄▄▄▄▄▄      ▐░▌          ▐░▌          ▐░█▄▄▄▄▄▄▄█░▌▐░█▄▄▄▄▄▄▄█░▌     ▐░█▄▄▄▄▄▄▄▄▄      ▐░▌     ▐░▌          ▐░█▄▄▄▄▄▄▄▄▄
	  ▐░▌    ▐░▌       ▐░▌▐░░░░░░░░░░░▌     ▐░▌          ▐░▌          ▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌     ▐░░░░░░░░░░░▌     ▐░▌     ▐░▌          ▐░░░░░░░░░░░▌
	  ▐░▌    ▐░▌       ▐░▌ ▀▀▀▀▀▀▀▀▀█░▌     ▐░▌          ▐░▌          ▐░█▀▀▀▀▀▀▀▀▀ ▐░█▀▀▀▀▀▀▀▀▀      ▐░█▀▀▀▀▀▀▀▀▀      ▐░▌     ▐░▌          ▐░█▀▀▀▀▀▀▀▀▀
	  ▐░▌    ▐░▌       ▐░▌          ▐░▌     ▐░▌          ▐░▌          ▐░▌          ▐░▌               ▐░▌               ▐░▌     ▐░▌          ▐░▌
 ▄▄▄▄▄█░▌    ▐░█▄▄▄▄▄▄▄█░▌ ▄▄▄▄▄▄▄▄▄█░▌     ▐░▌          ▐░█▄▄▄▄▄▄▄▄▄ ▐░▌          ▐░▌               ▐░▌           ▄▄▄▄█░█▄▄▄▄ ▐░█▄▄▄▄▄▄▄▄▄ ▐░█▄▄▄▄▄▄▄▄▄
▐░░░░░░░▌    ▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌     ▐░▌          ▐░░░░░░░░░░░▌▐░▌          ▐░▌               ▐░▌          ▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌
 ▀▀▀▀▀▀▀      ▀▀▀▀▀▀▀▀▀▀▀  ▀▀▀▀▀▀▀▀▀▀▀       ▀            ▀▀▀▀▀▀▀▀▀▀▀  ▀            ▀                 ▀            ▀▀▀▀▀▀▀▀▀▀▀  ▀▀▀▀▀▀▀▀▀▀▀  ▀▀▀▀▀▀▀▀▀▀▀

*/

#include "Initialize.hpp"

// THE TEXT FILE
bool Players::textFile(const char* filename) {
	textfiles.open(filename);
	if (!textfiles.is_open()) {
		std::cout << "ERROR TO CREATE FILES!";
		return false;
	}
	return true;
}

void Players::myInitialize() {
	for (int i = 0; i < amplua; i++) {
		std::cout << "Write the surname to the footballer " << i + 1 << ": ";
		std::cin >> play[i].surname;

		// DO THIS, IF THE CIN WHAT THE PLAYER'S AGE LESS THAN 18
		do {
			std::cout << "Write the age: ";
			std::cin >> play[i].age;

			if (play[i].age < 18)
				std::cout << "THE PLAYER'S AGE, MUST BE OVER 18!!!" << std::endl;
		} while (play[i].age < 18);
		std::cout << "Write the count games: ";
		std::cin >> play[i].count_games;
		std::cout << "Write the count goals: ";
		std::cin >> play[i].count_goals;

		// WRITE THIS FILES
		if (textfiles.is_open()) {
			textfiles << "Player " << i + 1 << ":\n"
				<< "Surname: " << play[i].surname << "\n"
				<< "Age: " << play[i].age << "\n"
				<< "Games: " << play[i].count_games << "\n"
				<< "Goals: " << play[i].count_goals << "\n"
				<< "------------------------\n";
		}
	}
}

void Players::lessPlaying() {
	std::cout << "Players who have played fewer games: ";
	if (textfiles.is_open()) {
		textfiles << "\nPlayers who have played fewer games: ";
	}

	bool found = false;
	for (int i = 0; i < amplua; i++) {
		if (play[i].count_games < 5) {
			if (found) {
				std::cout << ", ";
				if (textfiles.is_open())
					textfiles << ", ";
			}
			std::cout << play[i].surname;
			if (textfiles.is_open())
				textfiles << play[i].surname;
			found = true;
		}
	}

	std::cout << std::endl;
}

// SEARCH THE BEST PLAYER
void Players::theBestPlayer() {
	int maxGoals = play[0].count_goals;
	int bestPlayer = 0;

	// SEARCH THE BEST PLAYER
	for (int i = 1; i < amplua; i++) {
		if (play[i].count_goals > maxGoals) {
			maxGoals = play[i].count_goals;
			bestPlayer = i;
		}
	}

	std::cout << "\nThe best striker is: " << play[bestPlayer].surname
		<< "\nGoals: " << play[bestPlayer].count_goals
		<< "\nGames: " << play[bestPlayer].count_games
		<< "\nAge: " << play[bestPlayer].age << std::endl;

	// WRITE ON TEXTFILES
	textfiles << "\nThe best striker is: " << play[bestPlayer].surname
		<< "\nGoals: " << play[bestPlayer].count_goals
		<< "\nGames: " << play[bestPlayer].count_games
		<< "\nAge: " << play[bestPlayer].age << std::endl;
}