// #include "alphabet.h" 
#include "cipher.h" 

int main() {

  Cipher c; 

  cout << "Enter a keyword for encipering text: " << endl; 

  getline (cin, c.keyword);

  Alphabet a;  

  deque<char> encipheredAlpha = a.cipherLetters(c.keyword); 

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