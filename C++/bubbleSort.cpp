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
    // void bubbleSort(){
    //     for(pass=0;pass<MAX;pass++){
    //         cout<<"\n\nThis is pass number "<<pass<<endl;
    //         for(i=0;i<MAX-1;i++){
    //             if(arr[i]>arr[i+1]){
    //                 hold=arr[i];
    //                 arr[i]=arr[i+1];
    //                 arr[i+1]=hold;
    //             }
    //         }
    //     }
    // }
};

    class BubbleSort: public Array{
        int i,pass,hold,chk=0;
        bool swapped;
    public:
        void bubbleSort(){
          for(pass=0;pass<MAX;pass++){
              cout<<"\n\nThis is pass number "<<pass<<endl;
              for(i=0;i<MAX-1;i++){
                    if(arr[i]>arr[i+1] && cout<<"checked "<<chk<<" times"<<endl){
                        hold=arr[i];
                        arr[i]=arr[i+1];
                        arr[i+1]=hold;
                        chk++;
                    }
                }
            }
        }
    };

    int main()
    {

        BubbleSort b1;

        b1.get_array();
        b1.display_array();

        b1.bubbleSort();
        b1.display_array();

        return 0;
}