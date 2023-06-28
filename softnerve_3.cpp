#include <vector>
#include<iostream>
using namespace std ;
int xorTotal(std::vector<int>& nums, int idx, int xorSum) {
    if (idx == nums.size()) {
        return xorSum;
    }

    int include = xorTotal(nums, idx + 1, xorSum ^ nums[idx]);

    
    int exclude = xorTotal(nums, idx + 1, xorSum);

    return include + exclude;
}

int subsetXORSum(std::vector<int>& nums) {
    return xorTotal(nums, 0, 0);
}

int main() {
    std::vector<int> nums = {1, 3};
    int result = subsetXORSum(nums);
    std::cout <<result << std::endl;
    return 0;
}
