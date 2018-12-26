#include <iostream> 
#include <string>
#include "alphabet.h"

using namespace std; 

class Cipher { 
  public:

  string keyword; 

  vector<string> encipheredAlphabet;

  string encipher(string text) { 
    Alphabet a;
    encipheredAlphabet = a.cipherLetters(keyword);
    //to do: encipher each piece of text according to the enciphered alphabet
  }

};

int main() {

  Cipher c; 

  cout << "Enter a keyword for encipering text: " << endl; 

  cin >> c.keyword; 

  Alphabet a;  

  vector<string> encipheredAlpha = a.cipherLetters(c.keyword); 

  for (vector<string>::iterator it = encipheredAlpha.begin(); it != encipheredAlpha.end(); it++) { 
    cout << encipheredAlpha[*it] << " ";
  }

  return 0;

}

