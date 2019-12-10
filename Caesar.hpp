#pragma once
#ifndef Caesar_hpp

char encryptLetter(char letter, int key, int asciiStart);

std::string caesar(std::string phrase, int key);

#define Caesar_hpp
#endif 