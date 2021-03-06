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
# include "../include/cipher.h"
# include "atbash.h"
# include "caesar.h"
# include "rot13.h"

using namespace std;

const string version = "1.0";

int main() {
	cout << "Simple Cipher v" << version << endl;
	cout << "------------------" << endl;
	cout << "Pick a cipher:" << endl << endl;
	cout << "1. Atbash" << endl;
	cout << "2. Caesar" << endl;
	cout << "3. ROT13" << endl << endl;
	cout << ">: ";

	int select;
	cin >> select;
	cout << endl;

	switch(select) {
		case 1: runAtbash(); break;
		case 2: runCaesar(); break;
		case 3: runRot13(); break;
	}

	return 0;
}
