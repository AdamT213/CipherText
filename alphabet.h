#include <string> 
#include <vector>
#include <algorithm>
using namespace std; 

class alphabet { 
    vector<string> standard = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p", "q", "r", "s","t", "u", "v", "w", "x", "y", "z"}; 

    public:

    vector<string> cipherLetters(string keyword) { 
      for (string::iterator it = keyword.end(); it != keyword.begin(); it--) { 
        int * p
        p = std::find (standard.begin(), standard.end(), keyword[*it]);
        vector<string> cipherletters = standard;
        cipherletters.erase(p);
        cipherletters.push_front(keyword[*it]);
        return cipherletters;
     }
};