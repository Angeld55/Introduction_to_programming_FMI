#include<iostream>

void splitWords(const char* str, char words[64][64], size_t& wordsCount) {
	size_t wStart = 0;
	size_t wEnd = 0;
	bool metSymb = false;
	size_t cnt = 0;

	const char* it = str;

	size_t currentWordIndex = 0;

	while (*it != '\0') {
		if (*it != ' ' && metSymb == false) {
			metSymb = true;
			wStart = cnt;
		}
		else if (*it == ' ' && metSymb) {
			metSymb = false;
			wEnd = cnt;

			for (size_t i = wStart, j = 0; i < wEnd; i++, j++)
				words[currentWordIndex][j] = str[i];

			++currentWordIndex;
		}

		++cnt;
		++it;
	}

	if (metSymb) {
		wEnd = cnt;
		for (size_t i = wStart, j = 0; i < wEnd; i++, j++)
			words[currentWordIndex][j] = str[i];
		
		++currentWordIndex;
	}

	wordsCount = currentWordIndex;
}

int main() {
	char words[64][64] = {};
	
	size_t wordsCount = 0;
	splitWords(" Just     a    sample text !!! ! !  Last_word", words, wordsCount);

	for (size_t i = 0; i < wordsCount; i++)
		std::cout << words[i] << std::endl;
}
