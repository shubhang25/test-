#include <iostream>
#include <random> // Required for modern random number tools

int main() {
    // 1. Obtain a random seed from the hardware if available
    std::random_device rd;

    // 2. Initialize the Mersenne Twister pseudo-random generator with the seed
    std::mt19937 gen(rd());

    // 3. Define the distribution range [inclusive, inclusive]
    // Change these values to set your own minimum and maximum limits
    int min_val = 1;
    int max_val = 100;
    std::uniform_int_distribution<int> distrib(min_val, max_val);

    std::cout << "Generating 5 random numbers between " << min_val << " and " << max_val << ":\n";

    // 4. Generate and print the random numbers
    for (int i = 0; i < 5; ++i) {
        int random_num = distrib(gen);
        std::cout << random_num << " ";
    }
    
    std::cout << std::endl;
    return 0;
}
