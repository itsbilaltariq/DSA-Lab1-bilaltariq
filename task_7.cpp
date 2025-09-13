#include <iostream>
#include <vector>
using namespace std;
vector<int> findAllTheIndices(int array[],int sizeOfArray, int key){
    vector<int> index;
    for(int i=0; i<sizeOfArray; i++ ){
        if(array[i]==key){
        index.push_back(i);
        } }
    return index;}

int main(){
    // (Multiple occurrences)
    cout<<"Test # 1"<<endl;
    int array1[]={6,7,8,9,4,5,8,5};
    int size1= sizeof(array1)/sizeof(array1[0]);
    vector<int> result_1 = findAllTheIndices(array1, size1, 8);
    cout<<"Indices of 8 are: ";
    if(result_1.empty()){
        cout<<"none";
    }
    else{
         for (int indexes : result_1) {
            cout << indexes << " ";
        }
    }
    cout<<endl;
    cout<<"Test # 2"<<endl
    // (Key not present)
    int array_2[]={3,6,8,4,5};
    int size2= sizeof(array_2)/sizeof(array_2[0]);
    vector<int> result2= findAllTheIndices(array_2, size2, 9);
    cout<<"Indices of 9 are: ";
    if(result2.empty())
    {cout<<"none";
    }
    else{
         for (int indexes : result2)
         {
            cout << indexes << " ";
        }}
    cout<<endl;
    cout<<"Test # 3"<<endl;
    // (empty array)
     int array_3[]={}; 
    int size3= sizeof(array_3)/sizeof(array_3[0]);
    vector<int> result3= findAllTheIndices(array_3, size3, 3);
    cout<<"Indices of 3 are: ";
    if(result3.empty()){
        cout<<"none";
    }
    else{
         for (int indexes : result3) {
            cout << indexes << " ";
    }
}
}