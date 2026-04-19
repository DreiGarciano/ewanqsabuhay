#include <iostream>
#include <string>
#include <chrono>
#include <thread>

void typewrite(const std::string& text, int base_delay = 50) {
    for (char c : text) {
        std::cout << c << std::flush;

        int delay = base_delay;
        if (c == '.' || c == '!' || c == '?') delay = base_delay * 6;
        else if (c == ',' || c == ';')        delay = base_delay * 3;

        std::this_thread::sleep_for(std::chrono::milliseconds(delay));
    }
}

int main() {
    typewrite("Was it too bold of me to assume\n", 85);
    typewrite("You will catch me, oh, was it just an illusion?\n", 105);
    typewrite("Say the word, I'll drive in reverse\n", 85);
    typewrite("I would spend a lifetime", 120);
    typewrite(" waiting", 200);
    typewrite(" for you...\n", 250);
}