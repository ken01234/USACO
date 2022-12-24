//N is supposed to be the size of the line but I am not sure what to do with it, since I completed the sample input without N. 
#include <iostream>
#include <vector>
#include <sstream>
#include <string>
using namespace std;
void format(int N, int K, string input) {
    int count = 0;
    int a = 0;
    vector<string> word;
    vector<string> ans;
    stringstream s(input);
    while (getline(s, input, ' ')) {
        word.push_back(input);
      }//splits the words up
    for (int i = 0; i < word.size(); i++) {//determines whether the word is less, equal or more than K
        if (word[0].size() == K) {
            cout << word[i] << endl;
        } else if (word[i].size() < K) {
            a += word[i].size();
            if (a + word[i+1].size() > K) {
                cout << word[i] << endl;
                a = 0;
            } else {
                cout << word[i] << " ";
            }
        } else {
            cout<< " Word longer than specified width.";
        }
    }
}


int main() {
 format(10,7,"hello my name is Bessie and this is my essay");
}
