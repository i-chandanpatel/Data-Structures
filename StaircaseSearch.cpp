#include<iostream>
using namespace std;

void staircaseSearch(int matrix[][4], int r, int c, int key){
	int row=0, col=c-1;
	while(matrix[row][col] && col>=0){
		if(matrix[row][col]==key){
			cout<<"Found at: "<<row<<","<<col;
			return;
		}
		else if(key<matrix[row][col])	col--;
		else	row++;
	}
	cout<<"Key not found";
}

int main(){
	int matrix[][4]={{10,20,30,40},
					{15,25,35,45},
					{27,29,37,48},
					{32,33,39,50}};
	int key=33;
	staircaseSearch(matrix,4,4,key);
	return 0;
}
