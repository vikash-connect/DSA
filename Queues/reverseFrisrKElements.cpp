class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        // code here
        stack<int> s;
        int n = q.size();

        // Reverse first k elements
        for (int i = 0; i < k; i++) {
            s.push(q.front());
            q.pop();
        }

        // Put reversed elements back
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