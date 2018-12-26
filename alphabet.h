#include <iostream>
#include <set>
#include <string> 
#include <deque>
#include <algorithm>
using namespace std;

class Alphabet {
    deque<string> standard = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};

    public: 

    deque<string> getStandard() { 
      return standard;
    }

    deque<string> cipherLetters(string keyword) {
      
      deque<string> letters = standard;
      set<string> string_set;
      deque<string> uniqueLetters;
      
      for (auto f: keyword) {
        set<string>::iterator it; 
        it = string_set.find(string{f});
        if (it == string_set.end()) {
          string_set.insert(string{f});
          uniqueLetters.push_front(string{f});
        }
      }
      
      for(auto f : uniqueLetters) { 
        deque<string>::iterator p;
        p = find(letters.begin(), letters.end(), f);
        letters.erase(p);
        letters.push_front(f);
      }

      return letters;
    }
};
