class Solution
{
public:
    int maxSubArray(vector<int>& a)
    {
        int mn=-10001,n=a.size(),res=0;

        for(int i=0; i<n; i++)
        {
            res=res+a[i];
            mn=max(mn,res);
            res=max(0,res);   
        }
        return mn;
    }
}
