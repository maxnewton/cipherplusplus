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

#ifndef CIPHER_H
#define CIPHER_H

std::string atbash(std::string text);
std::string caesar(std::string text, int shift);
std::string rot13(std::string text);

#endif
