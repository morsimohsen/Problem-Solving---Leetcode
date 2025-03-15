class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0;
        int j=0;

        while(i<m && j<n){
            if(nums1[i]>nums2[j]){
                int temp=nums2[j];
                nums2[j]=nums1[i];
                nums1[i]=temp;
                i++;
                sort(nums2.begin(), nums2.end());
            }
            else if(nums1[i]<=nums2[j]){
                i++;
            }

        }
        int index=0;
        for(int i=m; i<m+n; i++){
            nums1[i]=nums2[index++];
        }
    }
};