#include <iostream>
#include <set>
#include <string>
#include <deque>
#include <algorithm>
using namespace std;

class Alphabet {
    deque<char> standard = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    public: 

    deque<char> getStandard() { 
      return standard;
    }

    deque<char> cipherLetters(string keyword) {
      
      deque<char> letters = standard;
      set<char> char_set;
      deque<char> uniqueLetters;
      
      for (auto f: keyword) {
        set<char>::iterator it; 
        it = char_set.find(f);
        if (it == char_set.end()) {
          char_set.insert(f);
          uniqueLetters.push_front(f);
        }
      }
      
      for(auto f : uniqueLetters) { 
        deque<char>::iterator p;
        p = find(letters.begin(), letters.end(), f);
        letters.erase(p);
        letters.push_front(f);
      }

      return letters;
    }
};
