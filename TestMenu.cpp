#include <iostream>
#include <fstream>
#include <vector>
#include <ncurses.h>
using namespace std;

int main() {
    // Initialize ncurses
    initscr();
    cbreak();
    noecho();
    keypad(stdscr, TRUE);

    // Read the menu options from the text file
    ifstream file("applications.txt");
    if (!file.is_open()) {
        cerr << "Error opening applications.txt" << endl;
        endwin(); // Close ncurses properly
        return 1;
    }

    vector<string> options;
    string line;
    while (getline(file, line)) {
        options.push_back(line);
    }
    file.close();

    // Display the menu
    int choice = 0;
    int highlight = 0;

    while (true) {
        clear();
        for (int i = 0; i < options.size(); i++) {
            if (i == highlight) {
                attron(A_REVERSE);
            }
            mvprintw(i + 1, 1, options[i].c_str());
            if (i == highlight) {
                attroff(A_REVERSE);
            }
        }

        choice = getch();
        switch (choice) {
            case KEY_UP:
                highlight--;
                if (highlight < 0) {
                    highlight = options.size() - 1;
                }
                break;
            case KEY_DOWN:
                highlight++;
                if (highlight == options.size()) {
                    highlight = 0;
                }
                break;
            case 10: // Enter key
                // You can perform the action associated with the selected menu item here.
                // For example, print the selected option:
                mvprintw(options.size() + 2, 1, ("You selected: " + options[highlight]).c_str());
                refresh();
                getch();
                break;
        }
    }

    // Clean up ncurses
    endwin();

    return 0;
}
