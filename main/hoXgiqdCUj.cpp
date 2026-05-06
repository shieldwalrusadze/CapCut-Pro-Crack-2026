#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
class Utility {
public:
    static int sum(const std::vector<int>& numbers) {
        return std::accumulate(numbers.begin(), numbers.end(), 0);
    }
    static double average(const std::vector<int>& numbers) {
        return static_cast<double>(sum(numbers)) / numbers.size();
    }
    static int max(const std::vector<int>& numbers) {
        return *std::max_element(numbers.begin(), numbers.end());
    }
    static int min(const std::vector<int>& numbers) {
        return *std::min_element(numbers.begin(), numbers.end());
    }
    static void sortAscending(std::vector<int>& numbers) {
        std::sort(numbers.begin(), numbers.end());
    }
    static void sortDescending(std::vector<int>& numbers) {
        std::sort(numbers.rbegin(), numbers.rend());
    }
};
int main() {
    std::vector<int> numbers = {5, 3, 8, 1, 2};
    std::cout << "Sum: " << Utility::sum(numbers) << std::endl;
    std::cout << "Average: " << Utility::average(numbers) << std::endl;
    std::cout << "Max: " << Utility::max(numbers) << std::endl;
    std::cout << "Min: " << Utility::min(numbers) << std::endl;
    Utility::sortAscending(numbers);
    std::cout << "Sorted Ascending: ";
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    Utility::sortDescending(numbers);
    std::cout << "Sorted Descending: ";
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}
