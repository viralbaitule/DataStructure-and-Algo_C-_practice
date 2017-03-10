#include "iostream"
#include "vector"

using namespace std;

class sorting{

public:
	void print_arr(int *,int);

	void selection_sort(int *, int );

};

void sorting::selection_sort(int * arr, int len){
	for (int i=0; i<len-1 ;i++){
		int arrmin=i;
		for (int j=i+1;j<len;j++){
			if (arr[j]<arr[arrmin]){
				arrmin=j;
			}
			int temp=arr[i];
			arr[i]=arr[arrmin];
			arr[arrmin]=temp;
		}
	}

}

void sorting::print_arr(int * arr,int len){
	for (int i=0; i<len;i++){
		cout<<arr[i]<<"	";
	}
	cout<<endl;
}

int main(){
	int arr[]={5,3,6,1,8,9};
	sorting s;
	cout<<"initial array :	";
	s.print_arr(arr,6);
	s.selection_sort(arr,6);
	cout<<"Sorted Array:	";
	s.print_arr(arr,6);

}