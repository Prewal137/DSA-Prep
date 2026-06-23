// Minimise max distance between gas stations
#include<bits/stdc++.h>
using namespace std;
int numberOfGasStationsRequired(vector<int>& arr, double dist)
{
    int cnt = 0;
    for(int i = 1; i < arr.size(); i++)
    {
        double gap = arr[i] - arr[i - 1];
        cnt += (int)(gap / dist);
        if(gap == dist * (int)(gap / dist))
            cnt--;
    }
    return cnt;
}
int main()
{
    int n;
    cout << "Enter number of gas stations: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter positions of gas stations: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int k;
    cout << "Enter number of new stations to add: ";
    cin >> k;
    double low = 0;
    double high = 0;
    for(int i = 1; i < n; i++)
        high = max(high, (double)(arr[i] - arr[i - 1]));
    double diff = 1e-6;
    while(high - low > diff)
    {
        double mid = low + (high - low) / 2.0;
        int cnt = numberOfGasStationsRequired(arr, mid);
        if(cnt > k)
            low = mid;
        else
            high = mid;
    }
    cout << fixed << setprecision(6);
    cout << "Minimum possible maximum distance = " << high << endl;
    return 0;
}