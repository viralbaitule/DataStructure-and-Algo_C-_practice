#include "iostream"
#include "vector"

using namespace std;

class sorting{

public:
	void print_arr(int *,int);
	void selection_sort(int *, int );
};

void sorting::selection_sort(int * arr, int len){
	cout<<"selection sort\n";

}

void sorting::print_arr(int * arr,int len){
	cout<<"print \n";
}

int main(){
	int arr[]={5,3,6,1,8,9};
	sorting s;
	s.selection_sort(arr,6);
	s.print_arr(arr,6);

}