#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
    class ids{
public:
    fstream fileobj;
    int ip;
    int n;
    string a[];
    void input(){cin>>n;}
    void read(){
         fileobj.open("datas.txt", ios::in);
         fileobj.read("datas.txt", ios::in);
    }
    void Sort(string a[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
	for (j = i + 1; j < n; j++)
        if (a[i] < a[j]){
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            }
		}
    void display();
    void close(){fileobj.close("datas.txt", ios::in);}
    };
class attack: public ids{

    void sortip{sort (a[], ip)};
    attack(){
        for(int i=0;i< ip;i++){cout<<a[]<<endl;}
    };
class block: public ids{ for(int i=0;i< ip;i++){cout<<a[]<<endl;}}
    int main(){
        fstream fileobj;
        fileobj.open("datas.txt", ios::in);
        if(fileobj.fail()){
            cout<<"file not open"<<endl;
            return -1;
        }
        string fileline;
        int linetemp = 0;
        while(!fileobj.eof()){
            getline(fileobj , fileline);
            //cout<<fileline<<endl;
            if(fileline.find("[**] [")!=std::string::npos){
                linetemp = 3;
                //cout<<"find"<<endl;
            }
            linetemp--;
            if(linetemp == 0){
                string blockdata;
                size_t position = 0;
                string delimiter = " ";
                int blocklinetemp = 2;
                cout<<fileline<<endl;
                fileline.erase(0 , position + delimiter.length());
            }
        }
        cin.get;
        return 0;
}
