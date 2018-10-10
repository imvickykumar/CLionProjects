//
// Created by vicky on 10/10/18.
//

#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm> // since it contains std::remove;

using namespace std;

int main(){

   cout<<"hello vector"<<endl;

    //vector with initial 10 values or you can also leave it without assigning the size;

//   vector <int> v1(10);

   //vector initializing without any size;

   vector<int> v1;

   //vector can take as much value as you can provide;

   //now adding elements in the vector;

   v1.push_back(1);
   v1.push_back(5);
   v1.push_back(3);

   int length=v1.size();

   cout<<"size of the vector is "<<length<<endl;

   //now accessing the vector;

   cout<<"the elements in the vector is:"<<endl;

   for (int i = 0; i < v1.size(); ++i) {
      cout<<"the "<<i<<"th element is "<<v1[i]<<endl;

   }

//   //now erasing the elements in the vector;
//
//   v1.erase(v1.begin());
//
//   cout<<"again after erasing"<<endl;
//
//   for (int i = 0; i < v1.size(); ++i) {
//      cout<<"the "<<i<<"th element is "<<v1[i]<<endl;
//
//   }
//
//   v1.erase(v1.begin()+1);
//   cout<<"again after erasing twice"<<endl;
//
//   for (int i = 0; i < v1.size(); ++i) {
//      cout<<"the "<<i<<"th element is "<<v1[i]<<endl;
//
//   }

   //now in case you want to delete an specific value from the vector;

   v1.erase(remove(v1.begin(),v1.end(),5),v1.end());

   cout<<"again after erasing"<<endl;

   for (int i = 0; i < v1.size(); ++i) {
      cout<<"the "<<i<<"th element is "<<v1[i]<<endl;

   }

   //in case you want to delete all the values from the vector;

   v1.clear();

   cout<<"after clearing the vectors;"<<endl;

   for (int i = 0; i < v1.size(); ++i) {
      cout<<"the "<<i<<"th element is "<<v1[i]<<endl;

   }






}