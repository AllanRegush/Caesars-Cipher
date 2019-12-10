#include <iostream>
#include <string>

#include "Caesar.hpp"

char encryptLetter(char letter, int key, int asciiStart)
{
  return ( ( ( (int) letter - asciiStart ) + key ) % 26) + asciiStart;
}

std::string caesar(std::string phrase, int key)
{
  std::string output = "";

  for (char letter : phrase)
  {
    if(! isalpha(letter))
    {
      output += letter;
    }

    if( isupper(letter) )
    {
      char newLetter = encryptLetter( letter, key, 65);
      output += newLetter;
    }

    if( islower(letter))
    {
      char newLetter = encryptLetter( letter, key, 97);
      output += newLetter;
    }
  }

  return output;
} 