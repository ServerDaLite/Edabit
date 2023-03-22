// https://edabit.com/challenge/MdG2xWqHz4qj8TzTG

#include <iostream>

int stringLength(std::string string) {
    int result = 0;
    while (string[result] != '\0') {
        result++;
    };
    return result;
};

std::string spaceMeOut(std::string word) {
    std::string str;
    int index = 0;
    for (int i=0; i<(stringLength(word)*2); i++) {
        if (i%2 == 0) {
            str = str + " ";
        } else {
            str = str + word[index];
            index++;
        };
    };
    
    return str+"\n";
};

int main(void) {
    std::string string = "Testing123";
    int result = stringLength(string);
    std::cout << result << "\n";
    
    std::string result2 = spaceMeOut(string);
    std::cout << result2; // s p a c e
    return 0;
};
