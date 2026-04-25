#include <iostream>
#include <fstream>
#include <string>

// This function checks if a Thief is in your database
void check_target(std::string target) {
    std::ifstream blacklist("blacklist.txt");
    std::string line;
    bool found = false;

    // If the file doesn't exist, we create a blank one for 'Number One'
    if (!blacklist.is_open()) {
        std::cout << "[!] No blacklist.txt found. Creating one now..." << std::endl;
        std::ofstream create("blacklist.txt");
        return;
    }

    while (std::getline(blacklist, line)) {
        if (line == target) {
            found = true;
            break;
        }
    }

    if (found) {
        std::cout << "\n[!] SHIELD ALERT: '" << target << "' is a KNOWN THIEF." << std::endl;
        std::cout << "[!] RECOMMENDATION: DISCONNECT IMMEDIATELY." << std::endl;
    } else {
        std::cout << "\n[+] Status: Clear. Target not found in the 'Lies' database." << std::endl;
    }
}

int main() {
    std::string input;
    std::cout << "--- STRICT DEFENSE: FACEBOOK VERIFIER ---" << std::endl;
    std::cout << "Enter suspicious Profile ID or IP: ";
    std::cin >> input;

    check_target(input);

    return 0;
}
