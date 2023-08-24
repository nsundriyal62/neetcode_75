class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int sum=0;
        int p=0;
        int q=n-1;
        int ans=0;
        for(int i=0; i<n; i++){
            if(p<=q){
                sum=0;
                sum=(q-p)*min(height[p],height[q]);
                ans=max(ans,sum);
                if(height[p]<height[q]) p++;
                else q--;
            }
        }
        return ans;
    }
};