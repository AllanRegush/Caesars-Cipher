#include <gtest/gtest.h>

#include "../Caesar.hpp"

TEST( encryptLetterTests, HandlesCharIncrementLowerCase ) {
    char letter = 'a';
    int key = 1;
    int asciiStart = 97;

    char result = encryptLetter( letter, key, asciiStart );
    
    char expect = 'b';

    EXPECT_EQ( result, expect );
}

TEST( encryptLetterTests, HandlesCharWrapAround ) {
    char letter = 'z';
    int key = 1;
    int asciiStart = 97;

    char result = encryptLetter( letter, key, asciiStart );
    
    char expect = 'a';

    EXPECT_EQ( result, expect );
}

TEST( encryptLetterTests, HandlesCharUpperCase ) {
    char letter = 'A';
    int key = 26;
    int asciiStart = 65;

    char result = encryptLetter( letter, key, asciiStart );
    
    char expect = 'A';

    EXPECT_EQ( result, expect );
}
