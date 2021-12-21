class Solution{   
public:
    void swap(int x,int y)
    {
        int temp=x;
        x=y;
        y=temp;
        
    }
    void segregate0and1(int arr[], int n) {
        int start=0,end=n-1;
        while(start<end)
        {
            while((arr[start]==0)&&(start<end))
            {
                start++;
            }
            while((arr[end]==1)&&(end>start))
            {
                end--;
            }
            if(start<end)
            {
                arr[start++]=0;
                arr[end--]=1;
            }
          
        
        }

    }
};
