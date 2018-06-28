#include <iostream>

using namespace std;

class FirstClass { //Class with questions and statements
public:

    void IQFinder (int x) { //Ask for name

        cout << endl << endl << "Bitte geben Sie Ihren geschätzten IQ ein:" << endl;
        cin >> x ;

        if (x < 10) {
            //statement(s) will execute if the boolean expression is true, here if 30 years are not over yet
            cout << "Gute Schätzung, vielleicht hast du sogar ein IQ mehr als du denkst !";

        } else if (x < 20) {

            cout << "Leicht überschätzt... Versuchs mal mit Minus 7.";
            IQFinder(x);

        } else if (x < 30) {

            cout << "Leicht überschätzt... Versuchs mal mit Minus 16.";
            IQFinder(x);

        } else if (x < 40) {

            cout << "Leicht überschätzt... Versuchs mal mit Minus 26.";
            IQFinder(x);

        }
        else if (x < 50) {

            cout << "Leicht überschätzt... Versuchs mal mit Minus 36.";
            IQFinder(x);

        }
        else if (x < 60) {

            cout << "Leicht überschätzt... Versuchs mal mit Minus 45.";
            IQFinder(x);

        }
        else if (x < 70) {

            cout << "Leicht überschätzt... Versuchs mal mit Minus 53.";
            IQFinder(x);

        }
        else if (x < 80) {

            cout << "Leicht überschätzt... Versuchs mal mit Minus 64.";
            IQFinder(x);

        }
        else if (x < 90) {

            cout << "Leicht überschätzt... Versuchs mal mit Minus 76.";
            IQFinder(x);

        }
        else if (x < 100) {

            cout << "Leicht überschätzt... Versuchs mal mit Minus 86.";
            IQFinder(x);
        }
        else {
            cout << "Komplett überschätzt... Versuchs mal mit Minus 95.";
            IQFinder(x);
        }
    }

    };

int main() {

    int IQ;
    FirstClass lol;
    lol.IQFinder(IQ);

    return 0;
}