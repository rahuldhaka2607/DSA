class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int m=matrix.size();
        int n=matrix[0].size();
        int t_e=m*n;

        int sr=0;
        int ec=n-1;
        int er=m-1;
        int sc=0;

        int count=0;
        while(count<t_e){
            for(int i=sc;i<=ec&&count<t_e;i++){
                ans.push_back(matrix[sr][i]);
                count++;
            }
            sr++;
            for(int i=sr;i<=er&&count<t_e;i++){
                ans.push_back(matrix[i][ec]);
                count++;
            }
            ec--;
            for(int i=ec;i>=sc&&count<t_e;i--){
                ans.push_back(matrix[er][i]);
                count++;
            }
            er--;
            for(int i=er;i>=sr&&count<t_e;i--){
                ans.push_back(matrix[i][sc]);
                count++;
            }
            sc++;
        }
        return ans;
        
    }
};