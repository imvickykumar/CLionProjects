//
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//    string string1[2];
//
//    cout<<"enter the first element of string";
//
//    getline(cin,string1[0]);
//
//
//    cout<<"enter the second element of string";
//
//    cin>>string1[1];
//
//    cout<<"Your string are ";
//
//    for (int i = 0; i < 2; ++i) {
//        cout<<string1[i];
//    }
//
//
//
//
//}
//
////#include<bits/stdc++.h>
////using namespace std;
////int main()
////{
////    string s,out;
//////    stringstream ss;
////    getline(cin,s);
//////    ss<<s;
//////    int x;
//////    while(ss>>out)
//////    {
//////        stringstream convert(out);
//////        convert>>x;
//////        cout<<x<<endl;
//////    }
////
////    cout<<s;
////    return 0;
////}

//
////code of experiment 1;
//
//#include <iostream>
//#include <string.h>
//#include <string>
//#include<bits/stdc++.h>
//
//using namespace std;
//
//int main()
//{
//
//
//
//    cout<<"Enter the string max 3 checking "<<endl<<
//          "(this will even take space and enter as a string)"<<endl;
//
//
//
//    for(int i1=0;i1<3;i1++){
//        int m=3;
//
//        string st[m];
//        getline(cin, st[i1]);
//        string string1=st[i1];
//
//        int n=string1.length();
//
//        if(n!=10){
//            cout<<string1<< " is an Invalid Name";
//            continue;
//        }
//        int state=1;
//        if(state==1&&(string1.at(0)=='s'||string1.at(0)=='S'))state++;
//        if(state==2&&string1.at(1)=='a')state++;
//        if(state==3&&string1.at(2)=='t')state++;
//        if(state==4&&string1.at(3)=='y')state++;
//        if(state==5&&string1.at(4)=='a')state++;
//        if(state==6&&string1.at(5)==' ')state++;
//        if(state==7&&(string1.at(6)=='j')||string1.at(6)=='J')state++;
//        if(state==8&&string1.at(7)=='e')state++;
//        if(state==9&&string1.at(8)=='e')state++;
//        if(state==10&&string1.at(9)=='t')state++;
//
//        if(state==11)
//            cout<<string1<<" is a Valid Name";
//        else
//            cout<<string1<<" is an Invalid Name";
//    }
//}

