/* ***** CREATIVE COMMONS LICENSE BLOCK *****
 *
 * This program is licensed under a Creative Commons Attribution 4.0
 * International License (CC BY 4.0). You are free to share (copy and
 * redistribute the material in any medium or format) and adapt (remix,
 * transform, and build upon the material) for any purpose, even
 * commercially, as long as you give appropriate credit, provide a link
 * to the license, and indicate if changes were made. You may do so in
 * any reasonable manner, but not in any way that suggests the licensor
 * endorses you or your use.
 */

# include <iostream>
# include <string>

std::string atbash(std::string text) {
	for (std::string::iterator i=text.begin(); i!=text.end(); ++i) {
		if (std::isalpha(*i) && std::islower(*i)) *i = 'a' + ('z' - *i);
		else if (std::isalpha(*i) && std::isupper(*i)) *i = 'A' + ('Z' - *i);
	}
	return text;
}

std::string caesar(std::string text, int shift) {
	for (std::string::iterator i=text.begin(); i!=text.end(); ++i) {
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
