#include <iostream>
using namespace std;
int main(){
 // initializing the array
 int arr[2][3][2] = {
 { {1,-1}, {2,-2}, {3,-3} },
 { {4,-4}, {5,-5}, {6,-6} }
 };
 // displaying array values 
 for (int x = 0; x < 2; x++) {
 for (int y = 0; y < 3; y++) {
 for (int z = 0; z < 2; z++) {
 cout<<arr[x][y][z]<<endl;
 }
 }
 }
 return 0;
}


