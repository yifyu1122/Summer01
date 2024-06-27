#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

// 數字限制未能落實 
void shuffle(int n, int A[]){
	for(int i=0;i<n*100;i++){
		int x = rand()%n; 
		int y = rand()%n;
		swap(A[x], A[y]);
	}
}

int main(){
	srand(time(NULL));
	int A[] = {1,2,3,4,5,6,7,8,9};
	int times = 0, 
		n = 9,
		x;
		
	shuffle(n, A);
	cout << "歡迎來到1A2B小遊戲，請輸入數字:" << endl; 
	while(true){
		cin >> x;
		times++;
		int B[] = {x/1000, x%1000/100, x%100/10, x%10};
		int a=0,
			b=0;
		
		for(int i=0;i<4;i++){
			for(int j=0;j<4;j++){
				if(A[i]==B[j] && i!=j){
					b++;
				}
				if(A[i]==B[j] && i==j){
					a++;
				}
			}
		}
		cout << a << 'A' << b << 'B' << endl;
		if(a==4){
			cout << "您猜對了，總共猜了" << times << "次" << endl;
			break; 
		}
	}
	return 0;
} 
