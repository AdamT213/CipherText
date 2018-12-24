#include <string> 
#include <vector>
#include <algorithm>
using namespace std; 

class Alphabet { 
    vector<string> standard = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};

    public:

    vector<string> cipherLetters(string keyword) { 
      vector<string> cipherletters = standard;
      //first, get unique letters from keyword to be used in cipher alphabet
      vector<string> uniqueKey;
      for (string::iterator it = keyword.end(); it != keyword.begin(); it--) { 
        vector<string>::iterator p;
        p = find (uniqueKey.begin(), uniqueKey.end(), keyword[*it]);
        if (p == uniqueKey.end()) { 
          uniqueKey.push_back(keyword[*it]);
        }
      }
      for (string::iterator it = uniqueKey.end(); it != uniqueKey.begin(); it--) { 
        vector<string>::iterator p;
        p = find (standard.begin(), standard.end(), uniqueKey[*it]);
        cipherletters.erase(*p);
        cipherletters.push_front(uniqueKey[*it]);
     }
    return cipherletters;
  }
};