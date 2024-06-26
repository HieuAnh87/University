#include<bits/stdc++.h>
using namespace std;
int n,a[1005];
int slove(){
	int d[n+5];
	if(n==0||a[0]==0) return -1;
	d[0]=0;
	for(int i=1;i<n;i++){
		d[i]=1e9;
		for(int j=0;j<i;j++){
			if(i<=j+a[j] && d[j]!=1e9){
				d[i]=min(d[i],d[j]+1);
				break;
			}
		}
	}
	return d[n-1];
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		cout<<slove()<<endl;
	}
}

// Cho mảng A[] gồm n số nguyên. Giá trị mỗi phần tử biểu diễn số lượng lớn nhất các bước ta có thể dịch chuyển từ phần tử này. Phần tử có giá trị bằng 0 được hiểu ta không được phép dịch chuyển. Xuất phát từ phần tử đầu tiên, hãy đếm số lượng ít nhất các bước dịch chuyển đến phần tử cuối cùng trong mảng. Ví dụ với A[] = { 1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9} ta có câu trả lời là 3 tương ứng với các phép dịch chuyển: 1 -> 3->8->9  (A[1] =1 nên ta dịch chuyển nhiều nhất 1 bước đến A[2]; A[2] = 3 nên ta được phép dịch chuyển nhiều nhất 3 bước tương ứng với A[3]=5, A[4]=8, A[5] = 9; do A[4] = 8 nên ta chỉ cần dịch chuyển 1 bước nữa là đến đích.

// Input:

// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên là số phần tử của mảng n; dòng tiếp theo là n số A[i] của mảng A[]; các số được viết cách nhau một vài khoảng trống.
// T, n, A[i] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ n  ≤103; 1≤ A[i]  ≤107.
// Output:

// Đưa ra số bước dịch chuyển ít nhất của mỗi test, đưa ra -1 nếu ta không có phép dịch chuyển đến đích.
// Input:
// 2
// 11
// 1 3 5 8 9 2 6 7 6 8 9
// 6
// 1 4 3 2 6 7
// Output:
// 3
// 2