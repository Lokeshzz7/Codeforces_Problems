#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    int count = 0;
    std::vector<int> choice(n);
    
    for (int i = 0; i < n; ++i) {
        std::cin >> choice[i];
    }
    
    for (int i : choice) {
        if (i == 1) {
            count++;
        }
    }
    
    if (count > 0) {
        std::cout << "HARD" << std::endl;
    } else {
        std::cout << "EASY" << std::endl;
    }
    
    return 0;
}

