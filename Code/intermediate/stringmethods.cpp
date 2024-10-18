#include <iostream>

using namespace std;

int main() {
    string name;

    cout << "Enter Name: ";
    getline(cin, name);

    /*
    name.length()

    if (name.length() > 12) {
        cout << "Your name can't be over 12 characters" << endl;
    }
    else {
        cout << "Welcome " << name << endl; 
    }
    */

    /* 
    name.empty()

    if(name.empty()) {
        cout << "You didn't enter your name" << endl;
    }
    else{
        cout << "Welcome " << name << endl;
    }
    */

    /*
    name.clear()

    name.clear();
    cout << "Welcome " << name << endl;
    */

    /*
    name.append()
    cout << "Your username is now " << name.append("@gmail.com") << endl;
    */

    /* 
    name.at()

    cout << name.at(0) << endl;
    cout << name.at(1) << endl;
    cout << name.at(2) << endl;
    cout << name.at(3) << endl;
    */

    /* 
    name.insert()

    cout << name.insert(0,"@");
    */
    
    /* 
    name.find()
    
    cout << name.find('Z') << endl;
    */
   
    /*
    name.erase()

    cout << name.erase(0, 3) << endl;
    */
    return 0;
}