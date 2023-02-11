#include <iostream>
#include <map>
using namespace std;
int ar[1040], a[1040];

int find(int j, int len){
  for(int i = 0; i<len; i++){
    if(j == ar[i]){
      a[i]++;
      return 0;
    }
  }
  ar[len+1] = j;
  a[len+1]++;
  return 0;
}

int main() {
  int n = 0;
  cin>>n;
  int arr[n];
  //mmap = my map
  // map <int, int> mmap;
  // map<int, int> map;
  // map<int, int>::iterator it;
  for(int i = 0; i<n; i++){
    cin>>arr[i];
    find(arr[i], i);
  }
  bool flag = false;
  for(int i = 0; i<n; i++){
    if(a[i]>=n/3){
      cout<<ar[i]<<" ";
      flag = true;
    }
  }
  if(flag == false){
    cout<<"None";
  }
}