class Solution {
  public:
    vector<int> commonElements(vector<int> &a, vector<int> &b, vector<int> &c) {

        vector<int> ans;
        set<int> st;

        int i = 0, j = 0, k = 0;

        while(i < a.size() && j < b.size() && k < c.size()) {

            if(a[i] == b[j] && b[j] == c[k]) {
                st.insert(a[i]);
                i++;
                j++;
                k++;
            }
            else if(a[i] <= b[j] && a[i] <= c[k]) {
                i++;
            }
            else if(b[j] <= a[i] && b[j] <= c[k]) {
                j++;
            }
            else {
                k++;
            }
        }

        for(auto x : st) {
            ans.push_back(x);
        }

        return ans;
    }
};