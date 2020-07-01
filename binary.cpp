// CREATED BY MUHAMMAD HANAN ASGHAR
// PYTHONIST
#include <iostream>
using namespace std;

class BinarySearch{
  private:
  int *arr;
  int arraySize;
  public:
  BinarySearch(int size){
    arr = new int[size];
    arraySize = size;
  }
  void EnterData(){
    for(int i=0;i<arraySize;i++){
      cout<<"Enter Data - "<<i<<" : ";
      cin>>arr[i];
    }
  }
  void Display(){
    for(int i=0;i<arraySize;i++){
      cout<<arr[i]<<" - ";
    }
  }
  void Search(int data){
    int LB = 0;
    int UB = arraySize - 1;
    int MB = LB+UB / 2;
    while(LB <= UB){
      if(data == arr[MB]){
        cout<<"Found in the Location At : "<<MB + 1;
        break;
      }
      else if(data < arr[MB]){
        LB = MB + 1;
      }else if(data > arr[MB]){
        UB = MB - 1;
      }else{
        cout<<"No Data Found";
      }
    }
  }
};

int main() {
  BinarySearch b(5);
  b.EnterData();
  cout<<endl;
  b.Display();
  cout<<endl;
  b.Search(12);
}
