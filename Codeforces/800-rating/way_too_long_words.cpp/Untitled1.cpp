#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;                  // Number of words
    cin >> n;

    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;

        if (word.length() > 10) {          // Check if word is too long
            int middle = word.length() - 2; // Number of letters between first and last
            cout << word[0] << middle << word[word.length() - 1] << endl;
        } else {
            cout << word << endl;           // Print word as is
        }
    }

    return 0;
}
