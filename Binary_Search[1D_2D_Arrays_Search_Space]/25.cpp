// Median of two sorted arrays
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n1;
    cout << "Enter the size of first array: ";
    cin >> n1;
    vector<int> nums1(n1);
    cout << "Enter the elements of first sorted array: ";
    for(int i = 0; i < n1; i++)
        cin >> nums1[i];
    int n2;
    cout << "Enter the size of second array: ";
    cin >> n2;
    vector<int> nums2(n2);
    cout << "Enter the elements of second sorted array: ";
    for(int i = 0; i < n2; i++)
        cin >> nums2[i];
    if(n1 > n2)
    {
        swap(nums1, nums2);
        swap(n1, n2);
    }
    int n = n1 + n2;
    int low = 0;
    int high = n1;
    int left = (n + 1) / 2;
    while(low <= high)
    {
        int mid1 = (low + high) / 2;
        int mid2 = left - mid1;
        int l1 = INT_MIN;
        int l2 = INT_MIN;
        int r1 = INT_MAX;
        int r2 = INT_MAX;
        if(mid1 < n1)
            r1 = nums1[mid1];
        if(mid2 < n2)
            r2 = nums2[mid2];
        if(mid1 - 1 >= 0)
            l1 = nums1[mid1 - 1];
        if(mid2 - 1 >= 0)
            l2 = nums2[mid2 - 1];
        if(l1 <= r2 && l2 <= r1)
        {
            if(n % 2 == 1)
            {
                cout << "Median = " << max(l1, l2) << endl;
            }
            else
            {
                double median =
                    (double)(max(l1, l2) + min(r1, r2)) / 2.0;

                cout << "Median = " << median << endl;
            }
            return 0;
        }
        else if(l1 > r2)
        {
            high = mid1 - 1;
        }
        else
        {
            low = mid1 + 1;
        }
    }
    return 0;
}