#include<iostream>
using namespace std;
#include <string>
#define day 7
//注释。注释是不会被程序执行的。
/*多行注释
aa
 a
哈哈
 */
int main() {
    const long long f =1e2;
    cout<<"long占用内存空间为："<<sizeof(long ) << endl;
    char str[]="adadoa";
    cout<<"str等于："<<str<<endl;
    string string1="sss";
    cout<<"string1等于："<<string1<<endl;
    cout<<"longlong占用内存空间为："<<sizeof (f)<<endl;
    cout<<"aaaa\thelloworld"<<endl;
    cout<<"aa\thelloworld"<<endl;
    cout<<"aaaaaa\thelloworld"<<endl;
    cout<<"\ahello\a"<<endl;
    cout<<"\fhello\f"<<endl;
    cout<<"ddd\v"<<endl;
    float i =3.14159265f;
    float f3 =2e-2f;
    cout <<"f3等于："<<f3<<endl;
    cout<<"f等于："<<f<<endl;
    cout<< "圆周率等于："<<i<<"....."<<endl;
    double d1 =3.141592653589;
    cout <<"圆周率等于："<<d1<<"....."<<endl;
    cout << "一年有"<< f<<"月"<<endl;
    cout<< "double内存大小："<<sizeof (double )<<endl;
    cout<< "float内存空间大小："<<sizeof (i)<<endl;
    char ch='h';
    char ch1=' ';
    cout<<"ch1对应的ASCII码"<<(int)ch1<<endl;
    cout<<ch <<endl;
    cout<<"ch占用内存空间大小："<<ch<<endl;
    cout<<"对应的ASCII码"<<(int )ch<< endl;
    cout<<"一周有 "<<day <<"天"<<endl;
    short q = 10;
    bool flag= true;
    cout<<flag<<endl;
    bool flag1= false;
    cout<<flag1<<endl;
    cout<<" false占用内存大小："<<sizeof (false)<<endl;
    cout<<" true占用内存大小："<<sizeof (true)<<endl;


    cout <<"short占用内存空间为："<<sizeof (q)<<endl;
    char ae='\\';
    char ae1='\b';
    cout<<(int)ae1<<endl;
    cout<<"hello_world\n";
    cout<<(int )ae<<endl;
    cout << "a ="<< q <<endl;
    cout << "Hello world" << endl;
    cout << "I'm ericlhands" << endl;
    short w =day+f;
    cout <<w<<endl;
    double ts= 100;
    cout<<ts<<endl;
    double ss=34;
    double gh=100;
    double kk=33;
    double ks=11;
    cout<<"答案等于："<<100%33<<endl;
    double inm=12;
    cout<<inm/gh<<endl;
    cout<<100%10<<endl;
    int we=21;
    int re=we++*100;
    cout<<"we:"<<re<<endl;
    int  oo=22;
    int qq=--oo*7;
    cout<<"qq:"<<qq<<endl;
    double ww = -0.5;
    double d2 = +0.25;
    cout << 10%24 << endl;
    inm = 10;
    d1 = 0;
    cout << (inm || d1) << endl;//1
    int a = 10;

    cout << !a << endl; // 0

    cout << !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!a << endl; // 1
    int sd=1;
    int sdw=3;
    int cc=0;
    cc=(sd>sdw?sd:sdw);
    cout<<cc<<endl;
    sd>sdw?sd:sdw=100;
    cout<<sdw<<endl;
    while(cc<100){
        cout<<cc<<endl;
        cc++;
    }
    int aebddb =0;
    do{
        cout<<aebddb<<endl;
        aebddb++;
    }while(aebddb<10);


    system("read");
    return 0;
}