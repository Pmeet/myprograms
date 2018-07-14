#include<iostream>
using namespace std;
#define MAX 5

class Array{
protected:
    int arr[MAX]/*,pass,i,hold*/;
public:
    void get_array(){
        cout<<"Enter "<<MAX<<" elements"<<endl;
        for(int j=0;j<MAX;j++){
            cin>>arr[j];
        }
    }

    void display_array(){
        for(int k=0;k<MAX;k++){
            cout<<" "<<arr[k]<<" ";
        }
        cout<<endl;
    }

};

class Sort: public Array{
    int pass,hold,key,min;
    int i,j;
public:
    void bubbleSort();
    void insertionSort();
    void selectionSort();
};

void Sort :: bubbleSort(){
    for (pass = 0; pass < MAX; pass++)
    {
        for (i = 0; i < MAX - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                hold = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = hold;
            }
        }
    }
}

void Sort :: insertionSort(){

    for(i = 1 ; i < MAX ; i++ ){

        key=arr[i];        
        j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;

    }

}

void Sort :: selectionSort(){

    for( i = 0 ; i < MAX ; i++ ){

        min=i;

        for ( j = i+1 ; j < MAX; j++)
        {
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        int temp;
        temp = arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
        

    }

}

class Searching: public Array{
    int  number_to_search, number_found_at;
    int high,low;   // for binary searchs
public:
    void binarySearch();
    void linearSearch();
    void get_number_to_search(){
        cout<<"\nEnter the number you want to search for in the array ";
        cin>>number_to_search;
    }
    int get_search_type(){
        int c;
        cout << "Which type of search do you want to perform \n1.Binary search\n2.Linear search\n";
        cin >> c;
        return c;
    }

};

void Searching :: linearSearch(){
    int fg=0;
    for(int i=0; i < MAX; i++ ){
        if(arr[i]==number_to_search){
            number_found_at=i;
            cout<<"\nThe number to be searched "<<number_to_search<<" is found at "<<number_found_at<<"th position in the array"<<endl;
            fg=1;
        }
    }
    if (fg = 0)
    {
        cout << "Item not found\n";
    }

}

void Searching :: binarySearch(){

    low=0,high=MAX;
    int mid=(low+high)/2, fg=0;
    if (arr[low] == number_to_search)
        number_found_at = low;
    else if (arr[MAX - 1] == number_to_search)
        number_found_at = high;

    while(arr[mid]==number_to_search){
        if(number_to_search>arr[mid]){
            low=mid;
            mid = (low + high) / 2;
        }
        else if(number_to_search<arr[mid]){
            high=mid;
            mid = (low + high) / 2;
        }
        else if(low>high){
            
            fg=1;
            break;
        }
    }
    if(fg=0)
    {
    number_found_at=mid;
    cout<<"\nThe number to be searched "<<number_to_search<<" is found at "<<number_found_at<<"th position in the array\n";
    }
    else
    {
        cout << "Item not found\n";
    }
}

int main()
{

    // Searching s1,s2;
    // int c;
    // s1.get_array();
    // s1.display_array();
    // s1.get_number_to_search();
    // if(s1.get_search_type()==1)
    //     s1.binarySearch();
    // else
    //     s1.linearSearch();

    Sort s1;
    s1.get_array();
    s1.selectionSort();
    s1.display_array();

    return 0;
}