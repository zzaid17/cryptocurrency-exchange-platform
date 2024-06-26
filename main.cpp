#include <iostream>
#include <map>

// Prototypes
void printMenu();
int getUserOption();
void processUserOption(int userOption);

// Global
int continueRunning = 1;

// Main
int main() {
    while(continueRunning) {
        printMenu();
        int userOption = getUserOption();
        processUserOption(userOption);
    }
    return 0;
}

// Print menu options
void printMenu() {
    std::cout << "0: Exit" << std::endl;
    std::cout << "1: Print help" << std::endl;
    std::cout << "2: Print exchange stats" << std::endl;
    std::cout << "3: Make an offer" << std::endl;
    std::cout << "4: Make a bid" << std::endl;
    std::cout << "5: View my wallet" << std::endl;
    std::cout << "6: Continue" << std::endl;
    std::cout << "=============" << std::endl;
    std::cout << "Type in 1-6" << std::endl;
}

// Get user input
int getUserOption() {
    int userOption;
    std::cin >> userOption;
    std::cout << "You chose: " << userOption << std::endl;
    return userOption;
}

// Print functions
void exitProgram() {
    std::cout << "Exiting program." << std::endl;
    continueRunning = 0;
}

void printHelp() {
    std::cout << "Your aim is to make money. Analyze the market and make bids and offers." << std::endl;
}

void printStats() {
    std::cout << "Market looks good." << std::endl;
}

void makeOffer() {
    std::cout << "Make an offer - enter the amount." << std::endl;
}

void makeBid() {
    std::cout << "Make a bid - enter the amount." << std::endl;
}

void seeWallet() {
    std::cout << "Your wallet is empty." << std::endl;
}

void nextTimeframe() {
    std::cout << "Going to next timeframe." << std::endl;
}

void invalidInput() {
    std::cout << "Invalid choice. Choose a number from 1-6" << std::endl;
}

// Process user input
void processUserOption(int userOption) {
    printMenu();
    if (userOption == 0) exitProgram();
    if (userOption < 0 || userOption > 6) invalidInput();
    if (userOption == 1) printHelp();
    if (userOption == 2) printStats();
    if (userOption == 3) makeOffer();
    if (userOption == 4) makeBid();
    if (userOption == 5) seeWallet();
    if (userOption == 6) nextTimeframe();
}