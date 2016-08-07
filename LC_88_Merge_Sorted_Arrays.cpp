class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int size ;
    size = m+n;
    int inter[size];
        
    int i=0 , j=0, k = 0;
    
    while ((i < m && j <n) && m>0 && n>0)
    {
        if (nums2[j] < nums1 [i])
        {
            inter[k] = nums2[j];
            k++;
            j++;
                    }
        else 
        {
            inter[k] = nums1[i];
            i++;
            k++;
        }
    
    }
    
    while (i<m)
    {
        inter[k] = nums1[i];
        i++;
        k++;
    }
    
    while (j < n)
    
    {
        inter[k] = nums2[j];
        j++;
        k++;
    }
    
    for (k=0,i=0 ; k<size ; i++,k++)
    {
        nums1[i] = inter[k];
    }

}
    
};