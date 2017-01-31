# include <string>

std::string caesar(std::string text, int shift) {
	for (std::string::iterator i=text.begin(); i!=text.end(); ++i) {;
		if (std::isalpha(*i)) {
			char a;
			char z;
			if (islower(*i)) {
				a = 'a';
				z = 'z';
			}
			else {
				a = 'A';
				z = 'Z';
			}

			int s = (*i - a + shift) % 26;

			if (s < 0) *i = z + (s+1);
			else *i = a + s;
		}
	}
	return text;
}

std::string rot13(std::string text) {
	return caesar(text, 13);
}
