#include <iostream> 
#include <string>
#include "alphabet.h"

using namespace std; 

class Cipher { 
  string keyword; 

  vector<string> encipheredAlphabet;

  string encipher(string text) { 
    encipheredAlphabet = alphabet::cipherLetters(keyword); 
    //to do: encipher each piece of text according to the enciphered alphabet
  }

};