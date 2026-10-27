WAP to reverse a sentence using recursion.


#include <iostream>
#include <string>
#include <utility>

void reverseSentence(std::string& sentence, std::size_t left, std::size_t right) {
    if (left >= right) {
        return;
    }

    std::swap(sentence[left], sentence[right]);
    reverseSentence(sentence, left + 1, right - 1);
}

int main() {
    std::string sentence;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, sentence);

    if (!sentence.empty()) {
        reverseSentence(sentence, 0, sentence.size() - 1);
    }

    std::cout << "Reversed sentence: " << sentence << '\n';
    return 0;
}