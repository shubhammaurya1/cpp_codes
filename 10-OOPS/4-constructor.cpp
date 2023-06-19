#include<iostream>
using namespace std;
class Rectangle{
    private :
    int length;
    int breadth;
    public :
    /*
    Rectangle(){
        length = 1;
        breadth = 1;
    }
    */
    Rectangle(int l=1,int b=1){
        setLength(l);
        setBreadth(b);
    }
    Rectangle(Rectangle &r){
        length = r.length;
        breadth = r.breadth;
    }
    void setLength(int l){
        if(l>0){
            length = l;
        }
        else{
            length = 0;
        }
    }
    void setBreadth(int b){
        if(b>0){
            breadth = b;
        }
        else{
            breadth = 0;
        }
    }
    int getLength(){
        return length;
    }
    int getBreadth(){
        return breadth;
    }
    int area(){
        return length*breadth;
    }
};
int main(){
   Rectangle r1(10,5);
   Rectangle r2(r1);
   cout<<"Area is "<<r2.area()<<endl;
   return 0;
}