#include <string>
#include <iostream>

#include "Caesar.hpp"

char encryptLetter(char letter, int key, int asciiStart)
{
  return ( ( ( (int) letter - asciiStart ) + key ) % 26) + asciiStart;
}