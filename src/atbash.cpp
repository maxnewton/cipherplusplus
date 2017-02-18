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

using namespace std;

void runAtbash() {
	string text;

	cout << "Enter string: ";
	getline(cin, text);
	
	cout << atbash(text) << endl;
}
