#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    string sentence = "Hello World from Cpp";
    stringstream ss(sentence);
    string word;
    vector<string> words;

    while(ss >> word) words.push_back(word);

    // Print words in reverse order
    for(int i = words.size() - 1; i >= 0; i--) {
        cout << words[i] << " ";
    }

    return 0;
}
