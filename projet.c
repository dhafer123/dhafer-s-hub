#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure pour représenter un livre
struct Book {
    int bookID;
    char title[100];
    char author[100];
    char department[20];
    int isIssued;
    int studentID;
};

// Fonction pour afficher le menu principal
void mainmenu();

// Fonctions pour gérer les livres
void addbooks();
void deletebooks();
void editbooks();
void searchbooks();
void issuebooks();
void viewbooks();
void issuerecord();
void selectCategory();

// Fonction pour vérifier si l'ID du livre existe
int checkid(int);

int main() {
    mainmenu();
    return 0;
}

void mainmenu() {
    int choice;

    do {
        printf("\n=== Library Management System ===\n");
        printf("1. Add Books\n");
        printf("2. Delete Books\n");
        printf("3. Edit Books\n");
        printf("4. Search Books\n");
        printf("5. Issue Books\n");
        printf("6. View Books\n");
        printf("7. Issue Record\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addbooks();
                break;
            case 2:
                deletebooks();
                break;
            case 3:
                editbooks();
                break;
            case 4:
                searchbooks();
                break;
            case 5:
                issuebooks();
                break;
            case 6:
                viewbooks();
                break;
            case 7:
                issuerecord();
                break;
            case 0:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 0);
}

void addbooks() {
    selectCategory();
}

void deletebooks() {
     selectCategory();
}

void editbooks() {
    // Implementation for editing book details in the file
    // ...
}

void searchbooks() {
    // Implementation for searching books in the file
    // ...
}

void issuebooks() {
    // Implementation for listing all issued books
    // ...
}

void viewbooks() {
    // Implementation for listing all books in the library
    // ...
}

void issuerecord() {
    // Implementation for keeping track of issued books
    // ...
}

int checkid(int bookID) {
    // Implementation for checking if the book ID exists
    // ...
}
void selectCategory() {
    int selectedCategory;

    printf("\n=== Select Category ===\n");
    printf("1. Fiction\n");
    printf("2. Mystery\n");
    printf("3. Science Fiction\n");
    printf("4. History\n");
    printf("5. Biography\n");
    printf("6. Self-Help\n");
    printf("7. Poetry\n");

    printf("Enter the number corresponding to your desired category: ");
    scanf("%d", &selectedCategory);

    // Validate the user input
    if (selectedCategory < 1 || selectedCategory > 7) {
        printf("Invalid category. Please select a number between 1 and 7.\n");
        // Recursive call to try again
        return selectCategory();
    }

    return selectedCategory;
}