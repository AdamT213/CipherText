#include <iostream> 
#include <string>
#include <deque>
#include <algorithm>
#include "alphabet.h"

using namespace std; 

class Cipher {
  public:

  string keyword; 

  string decipheredText;

  deque<char> regAlphabet;

  deque<char> encipheredAlphabet; 

    static bool is_punctuation (char c) {
      return c ==  '.' || c == ',' || c == '!' || c == '\''|| c == '?' || c == ' ';
  }

  string encipher(string text) { 
    Alphabet a;
    regAlphabet = a.getStandard();
    encipheredAlphabet = a.cipherLetters(keyword);
    //to do: encipher each piece of text according to the enciphered alphabet, with the following rules: 
    // [x] all chars lowercase
    // [] all chars in blocks of five
    // [x] all punctuation omitted

    text.erase( remove_if(text.begin(), text.end(), is_punctuation), text.end() );

    for (auto & f: text) {
      f = tolower(f);
      deque<char>::iterator pos;
      pos = find (regAlphabet.begin(), regAlphabet.end(), f);
      int index = distance(regAlphabet.begin(), pos);
      f = encipheredAlphabet[index];
    }

    return text;
  }

};


