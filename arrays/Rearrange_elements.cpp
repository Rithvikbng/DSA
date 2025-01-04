#include<bits/stdc++.h>
using namespace std;
  vector<int> RearrangebySign(vector<int>A){
  int n = A.size();
  vector<int> ans(n,0);
  
  // positive elements start from 0 and negative from 1.
  int posIndex = 0, negIndex = 1;
  for(int i = 0;i<n;i++){
      if(A[i]<0){
          ans[negIndex] = A[i];
          negIndex+=2;
      }
      else{
          ans[posIndex] = A[i];
          posIndex+=2;
      }
  }
  return ans;   
}
int main() {
  vector<int> A = {1,2,-4,-5};
  vector<int> ans = RearrangebySign(A);
  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << " ";
  }
  return 0;
}
//Time Complexity: O(N)
//Space Complexity:  O(N)
//1 -4 2 -5(output)-array index 0 is assigned to +ve and 1 to -ve so there forms an alternative combination of even and odd numbers 
