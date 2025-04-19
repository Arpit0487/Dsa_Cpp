class Solution
{
public:
    int firstBadVersion(int n)
    {
        int start = 1;
        int end = n;
        while (start < end)
        {
            int mid = start + (end-start) / 2;
            if (isBadVersion(mid) == true)
            {
                end = mid;
            }
            else if (isBadVersion(mid) == false)
            {
                start = mid + 1;
            }
        }
        return start;
    }
};