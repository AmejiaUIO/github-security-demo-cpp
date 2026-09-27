#include <cstring>
#include <cstdlib>
#include <iostream>
#include <string>
#include <zlib.h>

// VULNERABLE: classic stack buffer overflow, no bounds checking.
// CodeQL flags this as "cxx/uncontrolled-format-string"-adjacent /
// unbounded strcpy (CWE-120 / CWE-787).
void processInput(const char* userInput) {
    char buffer[16];
    strcpy(buffer, userInput); // <-- CodeQL alert here
    std::cout << "Processed: " << buffer << std::endl;
}

// VULNERABLE: command injection via unsanitized input passed to system().
// CodeQL flags this as CWE-78.
void runCommand(const std::string& filename) {
    std::string cmd = "type " + filename; // Windows "type" = cat
    system(cmd.c_str());                  // <-- CodeQL alert here
}

int main(int argc, char* argv[]) {
    std::cout << "zlib version: " << zlibVersion() << std::endl;

    if (argc > 1) {
        processInput(argv[1]);
        runCommand(argv[1]);
    } else {
        std::cout << "Usage: demo.exe <input>" << std::endl;
    }

    return 0;
}
