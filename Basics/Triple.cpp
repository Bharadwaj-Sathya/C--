#include <iostream>
#include <vector>
#include <limits>

using namespace std;

bool increasingTriplet(vector<int> &nums)
{
    int first = numeric_limits<int>::max();
    int second = numeric_limits<int>::max();

    for (int num : nums)
    {
        if (num <= first)
        {
            first = num;
        }
        else if (num <= second)
        {
            second = num;
        }
        else
        {
            return true;
        }
    }

    return false;
}

int main()
{
    vector<int> nums1 = {1, 2, 3, 4, 5};
    cout << "Example 1: " << (increasingTriplet(nums1) ? "true" : "false") << endl;

    vector<int> nums2 = {5, 4, 3, 2, 1};
    cout << "Example 2: " << (increasingTriplet(nums2) ? "true" : "false") << endl;

    vector<int> nums3 = {2, 1, 5, 0, 4, 6};
    cout << "Example 3: " << (increasingTriplet(nums3) ? "true" : "false") << endl;

    return 0;
}