#include <iostream> 
#include <string>
#include "alphabet.h"

using namespace std; 

class Cipher { 
  public:

  string keyword; 

  string decipheredText;

  deque<string> encipheredAlphabet;

  string encipher(string text) { 
    Alphabet a;
    encipheredAlphabet = a.cipherLetters(keyword);
    //to do: encipher each piece of text according to the enciphered alphabet, with the following rules: 
    // all chars lowercase 
    // all chars in blocks of five 
    // all punctuation omitted

    
    string::iterator it;
    for (it = text.begin(); it != text.end(); it++) { 
      if (text[*it] == '.'|| text[*it] == ',' || text[*it] == '!' || text[*it] == '''|| text[*it] == '?' || text[*it] == ' ') {
        cout << f;
        text.erase(*it);
      }
      f = tolower(f);
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

  // for (auto f: encipheredText) { 
  //   cout << f;
  // }

  return 0;

}

