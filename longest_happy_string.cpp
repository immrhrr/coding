class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        string ans;
        priority_queue<pair<int, char>> pq;
        
        // Push counts and characters into priority queue if they are greater than 0
        if (a > 0) {
            pq.push({a, 'a'});
        }
        if (b > 0) {
            pq.push({b, 'b'});
        }
        if (c > 0) {
            pq.push({c, 'c'});
        }

        while (!pq.empty()) {
            auto [curr_cnt, curr_char] = pq.top();
            pq.pop();
            
            // Check if the last two characters in the string are the same as the current character
            if (ans.size() >= 2 && ans[ans.size() - 1] == curr_char && ans[ans.size() - 2] == curr_char) {
                if (pq.empty()) {
                    // If no other character is available, return the current answer
                    return ans;
                }
                // Use the next most frequent character
                auto [next_cnt, next_char] = pq.top();
                pq.pop();
                ans.push_back(next_char);
                next_cnt--;
                
                if (next_cnt > 0) {
                    pq.push({next_cnt, next_char});
                }
                pq.push({curr_cnt, curr_char});  // Push the current character back
            } else {
                ans.push_back(curr_char);
                curr_cnt--;
                
                if (curr_cnt > 0) {
                    pq.push({curr_cnt, curr_char});
                }
            }
        }
        return ans;
    }
};
