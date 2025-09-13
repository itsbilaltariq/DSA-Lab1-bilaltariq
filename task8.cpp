#include <iostream>
using namespace std;
int searchWord(string sentence, string word) {
    if (word.empty()) return 0; 
    for (int i = 0; i <= sentence.size() - word.size(); i++) {
        int j = 0;
        while (j < word.size() && sentence[i + j] == word[j]) {
            j++;
        }
        if (j == word.size()) 
        return i; 
    }
    return -1; }
int main() {
    // Case 1: Word is in the middle of the sentence
     string textOne = "Bilal is learning programming";
      string wordOne = "learning";
        cout << "Case 1: " << searchWord(textOne, wordOne) << endl;

    // Case 2: Word appears at the end of the sentence
    string textTwo = "We are writing simple code";
       string wordTwo = "code";
        cout << "Case 2: " << searchWord(textTwo, wordTwo) << endl;

    // Case 3: Word does not exist in the sentence
    string textThree = "Computer science is fun";
     string wordThree = "math";
     cout << "Case 3: " << searchWord(textThree, wordThree) << endl;

    // Case 4: Checking with an empty word
    string textFour = "Bilal loves C++";
     string wordFour = "";
    cout << "Case 4: " << searchWord(textFour, wordFour) << endl;
    return 0;
}
