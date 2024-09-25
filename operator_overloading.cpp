#include <iostream>
#include <string>

using namespace std;

// Kirby class
// It can suck things up and spit them out(<< and >> operators)
class kirby {
public:
    // called when a kirby object is created
    kirby() {
        cout << "Kirby is born!" << endl;
    }
    // called when a kirby object is destroyed
    ~kirby() {
        cout << "Kirby is dead!" << endl;
    }
    // << operator overloading
    kirby& operator<<(const string& s) {
        cout << "Kirby sucks up " << s << endl;
        // return the object(kirby) itself so that we can chain the operators
        return *this;
    }
    // >> operator overloading
    kirby& operator>>(const string& s) {
        cout << "Kirby spits out " << s << endl;
        return *this;
    }
};

int main() {
    // name is john, kirby is the species
    kirby john;
    // apple goes into(arrow operator) john
    john << "apple";
    // apple comes out of(arrow operator) john
    john >> "apple";
    return 0;
}