class Solution {
public:
    queue<int> reverseFirstK(queue<int> q, int k) {

        if (k > q.size())
            return q;

        stack<int> s;
        int n = q.size();

        // Take first k elements
        for (int i = 0; i < k; i++) {
            s.push(q.front());
            q.pop();
        }

        // Put them back in reverse order
        while (!s.empty()) {
            q.push(s.top());
            s.pop();
        }

        // Move remaining elements to the back
        for (int i = 0; i < n - k; i++) {
            q.push(q.front());
            q.pop();
        }

        return q;
    }
};