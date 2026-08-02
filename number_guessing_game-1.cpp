#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    int b;
    srand(time(0));
    while (1) {
        cout << "🎮 Welcome to number guessing game.\nEnter '1' to play.\nEnter '0' to exit." << endl;
        cin >> b;
        if (b == 1) {
            int a;
            int secret = rand() % 100 + 1;
            int attempt;
            for (attempt = 1; attempt <= 10; attempt++) {
                cout << "🎯Enter your guess" << endl;
                cin >> a;
                if(a<0 || a>100){
                    cout<<"invalid output!😵"<<endl;
                }
              else  if (a < secret) {
                    cout << "Guess is Too Low!🔻" << endl;
                }
                else if (a == secret) {
                    cout << "congratulations! 👏" << endl;
                    break;
                }
                else {
                    cout << "Guess is Too High!🔺" << endl;
                }
            }
            int score = 100 - ((attempt - 1) * 10);
            cout << "score=" << score << endl;
            if (score < 0) {
                score = 0;
                cout << "score=" << score << endl;
            }
            if (attempt == 1) {
                cout << "perfect 🏆🏆🏆\n" << endl;
            }
            else if (attempt <= 3) {
                cout << "performance=excellent 🏆🏆\n" << endl;
            }
            else if (attempt >= 4 && attempt < 7) {
                cout << "performance= good🏆\n" << endl;
            }
            else if (attempt >= 7 && attempt <= 10) {
                cout << "performance= not bad😏\n" << endl;
            }
            else {
                cout << "game over!🙂" << endl;
                cout << "correct answer is=" << secret << endl;
            }

        }
        else {
            cout << "thanks for opening!😊\n" << endl;
        }
    }
    return 0;
}
