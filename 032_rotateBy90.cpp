#include<iostream>
using namespace std;

void rotate(vector<vector<int>>& matrix){
	//transpose
	for(int i=0; i<matrix.size(); i++){
		for(j=i; j<matrix[i].size(); j++){
			swap(matrix[i][j], matrix[j][i]);
		}
	}
	
	for(int i=0; i<matrix.size(); i++){
		reverse(matrix[i].begin(), matrix[i].end());
	}
}
int main(){
	vector<vector<int>> matrix={};
	rotate(matrix);
	return 0;
}
