string mostFrequentWord(string arr[], int n) 
    {
        map<string,int>mp;
        
        int maxi=INT_MIN;
        
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
            maxi=max(maxi,mp[arr[i]]);
        }
        
        string res="";
        
        for(int i=0;i<n;i++)
        {
            if(mp[arr[i]]==maxi)
            {
                mp[arr[i]]--;
                res=arr[i];
            }
            
        }
        
        return res;
    }
