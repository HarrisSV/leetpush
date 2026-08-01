class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> arr;

        // Store value and original index
        for (int i = 0; i < nums.size(); i++) {
            arr.push_back({nums[i], i});
        }

        // Bubble Sort
        for (int i = 0; i < arr.size() - 1; i++) {
            for (int j = 0; j < arr.size() - i - 1; j++) {
                if (arr[j].first > arr[j + 1].first) {
                    pair<int, int> temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }

        // Two Pointer
        int left = 0;
        int right = arr.size() - 1;

        while (left < right) {
            int sum = arr[left].first + arr[right].first;

            if (sum == target) {
                return {arr[left].second, arr[right].second};
            }
            else if (sum < target) {
                left++;
            }
            else {
                right--;
            }
        }

        return {};
    }
};