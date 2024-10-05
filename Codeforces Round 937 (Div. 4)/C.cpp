#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
 
int main() {
    int t;
    std::cin >> t;
    std::cin.ignore(); // Ignore the newline character after the number of test cases
 
    for (int i = 0; i < t; ++i) {
        std::string s;
        std::getline(std::cin, s); // Read the entire line, including times like "00:00"
 
        int hh = std::stoi(s.substr(0, 2)); // Extract hours and convert to integer
        std::string mm = s.substr(3, 2);    // Extract minutes as a string
        std::string period;
 
        if (hh == 0) {
            period = "AM";
            hh = 12;
        } else if (hh == 12) {
            period = "PM";
        } else if (hh > 12) {
            hh -= 12;
            period = "PM";
        } else {
            period = "AM";
        }
 
        // Format the hour to ensure leading zeros
        std::ostringstream oss;
        oss << std::setw(2) << std::setfill('0') << hh << ":" << mm << " " << period;
 
        std::cout << oss.str() << std::endl;
    }
 
    return 0;
}