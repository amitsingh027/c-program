/*
//binary search(iterative method)
#include <bits/stdc++.h>
using namespace std;
int binarySearch(vector<int>& nums, int target) {
    int n = nums.size();
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (nums[mid] == target) return mid;
        else if (target > nums[mid]) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}
int main()
{
    vector<int> a = {3, 4, 6, 7, 9, 12, 16, 17};
    int target = 6;
    int ind = binarySearch(a, target);
    if (ind == -1) cout << "The target is not present." << endl;
    else cout << "The target is at index: "
                  << ind << endl;
    return 0;
}
*/





/*
//binary search(recursive method)
#include <bits/stdc++.h>
using namespace std;
int binarySearch(vector<int>& nums, int low, int high, int target) {

    if (low > high) return -1; 

    int mid = (low + high) / 2;
    if (nums[mid] == target) return mid;
    else if (target > nums[mid])
        return binarySearch(nums, mid + 1, high, target);
    return binarySearch(nums, low, mid - 1, target);
}

int search(vector<int>& nums, int target) {
    return binarySearch(nums, 0, nums.size() - 1, target);
}

int main()
{
    vector<int> a = {3, 5, 8, 9, 11, 23};
    int target = 8;
    int ind = search(a, target);
    if (ind == -1) cout << "The target is not present." << endl;
    else cout << "The target is at index: "
                  << ind << endl;
    return 0;
}
*/






/*
//implement lower bound
#include <bits/stdc++.h>
using namespace std;
int lowerBound(vector<int> arr, int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] >= x) {         
            return i;
        }
    }
    return n;
}

int main()
{
    vector<int> arr = {3, 5, 8, 15, 19};
    int n = 5, x = 16;
    int ind = lowerBound(arr, n, x);
    cout << "The lower bound is the index: " << ind << "\n";
    return 0;
}
*/




/*
//implement upper bound
#include <bits/stdc++.h>
using namespace std;
int upperBound(vector<int> &arr, int x, int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] > x) {
            return i;
        }
    }
    return n;
}
int main()
{
    vector<int> arr = {3, 5, 8, 9, 15, 19};
    int n = 6, x = 9;
    int ind = upperBound(arr, x, n);
    cout << "The upper bound is the index: " << ind << "\n";
    return 0;
}
*/





/*
//search insert position
#include <bits/stdc++.h>
using namespace std;
int searchInsert(vector<int>& arr, int x) {
    int n = arr.size();
    int low = 0, high = n - 1;
    int ans = n;

    while (low <= high) {
        int mid = (low + high) / 2;
     
        if (arr[mid] >= x) {
            ans = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1; 
        }
    }
    return ans;
}
int main()
{
    vector<int> arr = {1, 2, 4, 5};
    int x = 6;
    int ind = searchInsert(arr, x);
    cout << "The index is: " << ind << "\n";
    return 0;
}
*/





//last occurance in a sorted array
#include<bits/stdc++.h>
using namespace std;
int solve(int n, int target, vector < int > & v) {
  int res = -1;
  for (int i = n - 1; i >= 0; i--) {
    if (v[i] == target) {
      res = i;
      break;
    }
  }
  return res;
}
int main() {
  int n = 7;
  int target= 13;
  vector < int > v = {3,4,13,13,13,20,40};
  cout << solve(n, target, v) << "\n";
  return 0;
}




