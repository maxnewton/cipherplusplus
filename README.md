# Cipher++
Cipher++ is a C++ library of cryptographic functions that let you easily encode and decode text using popular historical cipher protocols, including:

* Substitution ciphers
  * Atbash cipher
  * Caesar cipher
  * ROT13 cipher
* Transposition ciphers
  * Columnar transposition cipher (not implemented yet)
  * Double transposition cipher (not implemented yet)

# What's the big deal?

I use my free time to create cool things and release them - for free - through my website, [www.aaronpowell.me](http://www.aaronpowell.me). These open projects come complete with the source files you need to remake them all on your own, including 3D files, image textures, videos, code, text documents, and more!

If you like what I do and want to see more, [consider becoming a Patreon supporter](https://www.patreon.com/aaronpowell). To give back to the community, 10% of your monthly support is donated to the amazing open-source initiatives that help make these projects happen.

# How to install

Cipher++ is designed to be a portable library that can be included in any project. To include Cipher++ in your project, simply download or clone this repository and copy the contents of the "include" folder into your own C++ project.

To download and compile the sample programs that come with Cipher++, choose from one of the following options. First, download or clone the repository:

    git clone https://github.com/maxnewton/cipherplusplus
    cd cipherplusplus

## How to build the main program

    cd src
    g++ main.cpp atbash.cpp caesar.cpp rot13.cpp ../include/*.cpp -o ../bin/main

## How to build the atbash cipher program

    cd src
    g++ main_atbash.cpp atbash.cpp ../include/*.cpp -o ../bin/atbash

## How to build the caesar cipher program

    cd src
    g++ main_caesar.cpp caesar.cpp ../include/*.cpp -o ../bin/caesar

## How to build the ROT13 cipher program

    cd src
    g++ main_rot13.cpp rot13.cpp ../include/*.cpp -o ../bin/rot13

Soon I will create a makefile that makes this whole process easier, but for now we have to all build it by hand.
