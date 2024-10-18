#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main() {
    vector<int> a;
    vector<int> b(10);
    vector<int> c(5, -1);
    vector<int> d(c);

    vector<string> p;
    vector<string> q(3, "xyz");

    cout << q[0] << endl;
    cout << d[2] << endl;

    vector<string> words;

    words.push_back("Apple");
    words.push_back("Banana");
    words.push_back("Kiwi");
    cout << words.size() << endl;
    cout << words.at(2) << endl;

    for (size_t i = 0; i < words.size(); i++) {
        cout << words[i] << " ";
    }

    words.pop_back();
    cout << "\n" << words.size() << endl;
    for (size_t i = 0; i < words.size(); i++) {
        cout << words[i] << " ";
    }

    words.clear();
    cout << "\n" << words.size() << endl;
}
