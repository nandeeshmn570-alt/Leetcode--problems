class Solution {
public:
    long long countIntersectingIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(), intervals.end());
        long long int count = 0;
        for (int i = 0; i < n; i++) {
            int curr = intervals[i][1];
            int low = i + 1;
            int end = n - 1;
            int last = i;
            while (low <= end) {
                int mid = low + (end - low) / 2;
                if (intervals[mid][0] <= curr) {
                    low = mid + 1;
                    last = mid;
                } else {
                    end = mid - 1;
                }
            }
            count += last - i;
        }
        return count;
    }
};