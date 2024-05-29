class Solution {
public:
    int maxValueAfterReverse(vector<int>& v) {
        
        
        int n=v.size();
        
        
        int sum=0;
        
        for(int i=0;i<n-1;i++){
            sum+=abs(v[i]-v[i+1]);
        }
        
     int ans=sum;
        
        
        for(int j=0;j<n-1;j++){
            ans=max(ans,sum+abs(v[0]-v[j+1])-abs(v[j]-v[j+1]));
        }
    
    
        for(int i=1;i<n;i++){
            ans=max(ans,sum+abs(v[i-1]-v[n-1])-abs(v[i]-v[i-1]));
        }
        
        
        int x1=-1e9;
        
        for(int i=1;i<n-1;i++){
            x1=max(x1,-abs(v[i]-v[i-1])+v[i]+v[i-1]);
        }
        
         int y1=-1e9;
        
        for(int j=1;j<n-1;j++){
            y1=max(y1,-abs(v[j]-v[j+1])-v[j+1]-v[j]);
        }
        
        ans=max(ans,sum+x1+y1);

        
         int x2=-1e9;
        
        for(int i=1;i<n-1;i++){
            x2=max(x2,-abs(v[i]-v[i-1])+v[i]-v[i-1]);
        }
        
         int y2=-1e9;
        
        for(int j=1;j<n-1;j++){
            y2=max(y2,-abs(v[j]-v[j+1])-v[j+1]+v[j]);
        }
        
        ans=max(ans,sum+x2+y2);
     


        
         int x3=-1e9;
        
        for(int i=1;i<n-1;i++){
            x3=max(x3,-abs(v[i]-v[i-1])-v[i]+v[i-1]);
        }
        
         int y3=-1e9;
        
        for(int j=1;j<n-1;j++){
            y3=max(y3,-abs(v[j]-v[j+1])+v[j+1]-v[j]);
        }
        
        ans=max(ans,sum+x3+y3);


    
         int x4=-1e9;
        
        for(int i=1;i<n-1;i++){
            x4=max(x4,-abs(v[i]-v[i-1])-v[i]-v[i-1]);
        }
        
         int y4=-1e9;
        
        for(int j=1;j<n-1;j++){
            y4=max(y4,-abs(v[j]-v[j+1])+v[j+1]+v[j]);
        }
        
        ans=max(ans,sum+x4+y4);
        
        return ans;
        
    }
};
