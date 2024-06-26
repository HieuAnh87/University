#include<bits/stdc++.h>
using namespace std;
struct data{
	int a,cs;
};
int n;
bool cmp(data x,data y){
	if(x.a>y.a) return false;
	if(x.a==y.a && x.cs>y.cs) return false;
	return true;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		vector<data>v(n);
		for(int i=0;i<n;i++){
			cin>>v[i].a;
			v[i].cs=i;
		}
		sort(v.begin(),v.end(),cmp);
		int dem=0;
		for(int i=0;i<n;i++){
			while(v[i].cs != i){
				dem++;
				swap(v[i],v[v[i].cs]);
			}
		}
		cout<<dem<<endl;
	}
}

// Cho mảng A[] gồm n phần tử. 
// Hãy tìm số phép đổi chỗ ít nhất giữa các phần tử của mảng để mảng A[] được sắp xếp. 
// Ví dụ với A[] = {4, 3, 2, 1} ta cần thực hiện ít nhất 2 phép đổi chỗ: Swap(A[0], A[3]),  Swap(A[1], A[2]).
// Input:
// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên là số phần tử của mảng n và X; dòng tiếp theo là n số A [i] của mảng A [];các số được viết cách nhau một vài khoảng trống.
// T, n thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ n ≤103.
// Output:
// Đưa ra kết quả mỗi test theo từng dòng.
// Input:
// 2
// 4
// 4 3 2 1
// 5
// 1 5 4 3 2
// Output:
// 2
// 2
 