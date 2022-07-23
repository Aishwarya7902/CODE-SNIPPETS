public:
    void Conquer(int arr[], int l, int mid, int r)
    {
         
        vector<int>merged(r-l+1,0);
        int idx1=l;
        int idx2=mid+1;
        int x=0;
        while(idx1<=mid && idx2<=r){
            if(arr[idx1]<arr[idx2]){
                merged[x++]=arr[idx1++];
            }
            else{
                merged[x++]=arr[idx2++];
            }
        }
        while(idx1<=mid){
            merged[x++]=arr[idx1++];
        }
        while(idx2<=r){
            merged[x++]=arr[idx2++];
        }
        for(int i=0,j=l;i<r-l+1;i++,j++){
            arr[j]=merged[i];
        }
         
         
    }
    public:
    void divide(int arr[], int l, int r)
    {
        //code here
         if(l>=r){
            return;
        }
        int mid=l+(r-l)/2;
        divide(arr,l,mid);
        divide(arr,mid+1,r);
        Conquer(arr,l,mid,r);
    }
