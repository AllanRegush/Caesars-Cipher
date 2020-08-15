#include <iostream>
#include <string>

#include "Caesar.hpp"

char encryptLetter(const char letter, const int key, const int asciiStart)
{
  return ( ( ( (int) letter - asciiStart ) + key ) % 26) + asciiStart;
}

std::string caesar(const std::string phrase, const int key)
{
  std::string output = "";

  for (const char letter : phrase)
  {
    if(! isalpha(letter))
    {
      output += letter;
    }

    if( isupper(letter) )
    {
      const char newLetter = encryptLetter( letter, key, 65);
      output += newLetter;
    }

    if( islower(letter))
    {
      const char newLetter = encryptLetter( letter, key, 97);
      output += newLetter;
    }
  }

  return output;
} 