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

  deque<string> regAlphabet;

  deque<string> encipheredAlphabet; 

    static bool is_punctuation (char c) {
      return c ==  '.' || c == ',' || c == '!' || c == '\''|| c == '?' || c == ' ';
  }

  string encipher(string text) { 
    Alphabet a;
    regAlphabet = a.getStandard();
    encipheredAlphabet = a.cipherLetters(keyword);
    //to do: encipher each piece of text according to the enciphered alphabet, with the following rules: 
    // all chars lowercase
    // all chars in blocks of five
    // all punctuation omitted

    text.erase( remove_if(text.begin(), text.end(), is_punctuation), text.end() );
    
    string::iterator it;
    for (it = text.begin(); it != text.end(); it++) {
      *it = tolower(*it);
      deque<string>::iterator pos;
      pos = find (regAlphabet.begin(), regAlphabet.end(), *it);
      *it = encipheredAlphabet[pos];
    }

    return text;
  }

};

int main() {

  Cipher c; 

  cout << "Enter a keyword for encipering text: " << endl; 

  getline (cin, c.keyword);

  Alphabet a;  

  deque<string> encipheredAlpha = a.cipherLetters(c.keyword); 

  for (auto f : encipheredAlpha) { 
        cout << f;
      } 

  cout << "Enter a block of text you would like to encipher: " << endl; 

  getline (cin, c.decipheredText);

  string encipheredText = c.encipher(c.decipheredText); 

  for (auto f: encipheredText) { 
    cout << f;
  }

  return 0;

}

