

// GFG :https://practice.geeksforgeeks.org/problems/n-meetings-in-one-room-1587115620/1#
class Solution
{
private:
    struct MyCmp
    {
        bool operator()(pair<int, int> a, pair<int, int> &b)
        {
            return (a.second < b.second);
        }
    };

public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        // Your code here
        vector<pair<int, int>> vp, res;
        for (int i = 0; i < n; i++)
            vp.push_back({start[i], end[i]});
        sort(vp.begin(), vp.end(), MyCmp());
        for (auto x : vp)
            if (res.size() == 0 || res[res.size() - 1].second < x.first)
                res.push_back(x);
        return res.size();
    }
};