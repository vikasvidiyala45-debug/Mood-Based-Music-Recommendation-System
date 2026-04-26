#include <iostream>
#include "music_system.h"
using namespace std;

int main() {
    int lang, mood;

    cout << "=====================================\n";
    cout << "     SONG RECOMMENDER SYSTEM\n";
    cout << "=====================================\n";

    while (true) {

        showLanguageMenu();
        cout << "Enter choice: ";
        cin >> lang;

        if (lang == 0) {
            cout << "\nGoodbye!\n";
            break;
        }

        if (lang < 1 || lang > 3) {
            cout << "Invalid choice!\n";
            continue;
        }

        showMoodMenu();
        cout << "Enter mood: ";
        cin >> mood;

        if (mood < 1 || mood > 6) {
            cout << "Invalid mood!\n";
            continue;
        }

        showSongs(lang, mood);
    }

    return 0;
}