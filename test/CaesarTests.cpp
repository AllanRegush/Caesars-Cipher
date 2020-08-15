#include <gtest/gtest.h>

#include "../Caesar.hpp"

TEST( encryptLetterTests, HandlesCharIncrementLowerCase ) {
    const char letter = 'a';
    const int key = 1;
    const int asciiStart = 97;

    const char result = encryptLetter( letter, key, asciiStart );
    
    const char expect = 'b';

    EXPECT_EQ( result, expect );
}

TEST( encryptLetterTests, HandlesCharWrapAround ) {
    const char letter = 'z';
    const int key = 1;
    const int asciiStart = 97;

    const char result = encryptLetter( letter, key, asciiStart );
    
    const char expect = 'a';

    EXPECT_EQ( result, expect );
}

TEST( encryptLetterTests, HandlesCharUpperCase ) {
    const char letter = 'A';
    const int key = 26;
    const int asciiStart = 65;

    const char result = encryptLetter( letter, key, asciiStart );
    
    const char expect = 'A';

    EXPECT_EQ( result, expect );
}


TEST( caesarTests, HandlesSpaces ) {
    const std::string phrase = "What a string!";
    const int key = 5;

    const std::string result = caesar(phrase, key);

    const std::string expect = "Bmfy f xywnsl!";

    ASSERT_EQ( result, expect );
}

