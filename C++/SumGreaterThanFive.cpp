// https://edabit.com/challenge/qDgpNG96WFK4z5Roh
#include <iostream>
#include <vector>

int sumFive(std::vector<int> array) {
    int result = 0;
    for (int i=0; i < array.size(); i++) {
        if (array[i] <= 5) { continue; };
        result = result + array[i];
    };
    return result;
};

int main(void) {
    std::vector<int> array = {1, 5, 20, 30, 4, 9, 18};
    int result = sumFive(array);
    std::cout << result << "\n";
    return 0;
};
