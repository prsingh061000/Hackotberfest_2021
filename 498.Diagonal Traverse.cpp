class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        
        vector<int> ans;
        int m=mat.size();
        int n=mat[0].size();
        
        bool up=true;
        int r=0,c=0;
        
        while(r<m&&c<n)
        {
            if(up)
            {
                while(r>0&&c<n-1)
                {
                    ans.push_back(mat[r][c]);
                    r--;
                    c++;
                }
                
                ans.push_back(mat[r][c]);
                if(c==n-1)
                    r++;
                else
                    c++;
            }
            else
            {
                while(c>0&&r<m-1)
                {
                    ans.push_back(mat[r][c]);
                    r++;
                    c--;
                }
                
                ans.push_back(mat[r][c]);
                if(r==m-1)
                    c++;
                else
                    r++;
            }
            
            up=!up;
        }
        
        return ans;
    }
};
