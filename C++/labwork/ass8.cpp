#include<iostream>
#define n 5
using namespace std;

// Program 1
template <class T>
class Example{
    T arr[n];
public:
    void get_array_element(){
        cout<<"Enter value of 5 array elements:"<<endl;
        for(int i=0;i<5;i++){
            cin>>arr[i];
        }
    }
    void swap(T *xp, T *yp)
    {
        T temp = *xp;
        *xp = *yp;
        *yp = temp;
    }

    // A function to implement bubble sort
    void bubbleSort()
    {
        int i, j;
        for (i = 0; i < n - 1; i++)

            // Last i elements are already in place
            for (j = 0; j < n - i - 1; j++)
                if (arr[j] > arr[j + 1])
                    swap(&arr[j], &arr[j + 1]);
    }
    void display(){ 
        for(int k=0;k<n;k++){
            cout<<arr[k];
        }
    }
    void find_max(){
        int i;
        T a;
        a=arr[0]
        for(i=0;i<n;i++){
            if(a>a[i])
                a=a[i];
        }
        return a;
    }
};

//End of Program 1

//Program 2
template <class T>
void minimum(T array2[],int n){

    int i,a2;
    a2=array2[0];
    for(i=0;i<n;i++){
        if(a2>array2[i])
            a2=array2[i];
    }

    cout<<"Minimum element is "<<a2<<endl;

    return 0;
}
//End of Program 2

//Program 3

template <class T>
class stack{
    T a;
    top==-1;
public:
    T st[n];
    void push(){
        st[++top]=a;
    }
    void pop(){
        top--;
    }
    void get_element(){
        cin>>a;
    }

};

//End of Program 3



int main(){
    int i;
    cout << "Enter the program number you want to run: " << endl;
    cout << "1. Program 1 " << endl;
    cout << "2. Program 2 " << endl;
    cout << "3. Program 3 " << endl;
    cout << "4. Program 4 " << endl;
    cout << "5. Program 5 " << endl;
    cin >> i;
    switch (i)
    {
    case 1:
    {
        Example e1;
        e1.get_array_element();
        e1.display();
        e1.bubbleSort();
        e1.display();
        e1.find_max();
        break;
    }
    case 2:
    {
        int int_array[n]={0,3,4,12,9};
        float float_array[n]={1.2,66.7,66,2,0,2.4};
        char char_array[n]={'a','e','z','Y','B'};

        minimum(int int_array[], int n);
        minimum(float float_array[],int n);
        minimum(char char_array[],int n);
    }
    case 3:
    {
        stack s1;
        int ch=1;
        int i2;
        while(ch!=0){
            cout<<"Select the operation you want to perform"<<endl;
            cout<<"1.Push"<<endl;
            cout<<"2.Pop"<<endl;
            cout<<"3.Exit"<<endl;
            cin>>i2;
            if(i2==1){
                s1.get_element();
                s1.push();
            }
            else if(i2==2)
                pop();
            else
                ch=0;
        }
        break;
    }
    case 4:
    {
        int i=1;
        cout<<"Demonstrating the use of multiple catch statements"<<endl;
        try{
            while(i<4){
                
                if(i==1)
                    throw i;
                else if(i==2)
                    throw 'i';
                else
                    cout<<i<<endl;           
                i++;
            }
        }    
        catch(int i)
        {
            cout<<"Exception caught "<<i<<endl;
        }
        catch(char *a5)
        {
            cout << "Exception caught " << *a5 << endl;
        }
        break;
    }    
    case 5:
    {
        int x,y,z;
        cout<<"Enter values of x and y"<<endl;
        cin>>x>>y;
        try{
            z=x*y;
            if(z%3==0)
                throw z;
        }
        catch(int i){
            cout<<"Exception caught: "<<z<<endl;
        }
        break;
    }
    default:
        cout << "Please enter a valid program number"<<endl;
    };

    return 0;
}