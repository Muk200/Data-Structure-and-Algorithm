class Solution
{
public:
    int minimumMultiplications(vector<int> &arr,
                               int start, int end)
    {
        queue<pair<int, int>> q;
        q.push({start, 0});

        // Create a dist array 
        vector<int> dist(100000, 1e9);
        dist[start] = 0;
        int mod = 100000;


        while (!q.empty())
        {
            int node = q.front().first;
            int steps = q.front().second;
            q.pop();

            for (auto it : arr)
            {
                int num = (it * node) % mod;

                // If the no. of multiplications are less than before
                // in order to reach a number, we update the dist array.
                if (steps + 1 < dist[num])
                {
                    dist[num] = steps + 1;

                    // Whenever we reach the end number
                    if (num == end)
                        return steps + 1;
                    q.push({num, steps + 1});
                }
            }
        }
        // If the end no. is unattainable.
        return -1;
    }
};
