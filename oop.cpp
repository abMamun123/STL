#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int a = 0;
        int b = 0;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    a = i;
                    b = j;
                }
            }
        }
        return {a, b};
    }
};

int main()
{
    vector<int> x;
    for (int i = 0; i < x.size(); i++)
        cin >> x[i];
    int target;
    cin >> target;
    Solution s1;
    for (int &x : s1.twoSum(x, target))
        cout << x;
}

