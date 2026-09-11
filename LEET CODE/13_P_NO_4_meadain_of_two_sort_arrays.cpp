class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();

        vector<int> arr;

        // Add nums1
        arr.insert(arr.end(), nums1.begin(), nums1.end());

        // Add nums2
        arr.insert(arr.end(), nums2.begin(), nums2.end());

        sort(arr.begin(),arr.end());

        int no=arr.size();

        if(no%2!=0){
            return arr[no/2];
        }
        else{

            return (arr[(no/2)-1]+arr[no/2])/2.0;
            
        }
    }
};