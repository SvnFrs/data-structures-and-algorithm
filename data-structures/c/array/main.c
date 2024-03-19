#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>

int startProgram();
void printMenu();
int chooseOption();

int main() {
    initscr();
    printw("Welcome to the program!\n");
    startProgram();
    endwin();
    return 0;
}

int startProgram() {
    int option;
    printMenu();
    option = chooseOption();
    // Handle option here
    return 0;
}

void printMenu() {
    printw("Array practice in C\n");
    printw("1. Add item\n");
    printw("2. Remove item\n");
    printw("3. Update item\n");
    printw("4. Exit\n");
    refresh();
}

int chooseOption() {
    int option;
    printw("Choose one wisely: ");
    refresh();
    scanw("%d", &option);
    return option;
}
