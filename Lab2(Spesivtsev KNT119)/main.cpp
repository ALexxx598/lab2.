#include<iostream>
#include <string.h>
#include<cstdlib>
#include <cstdio>
#include "catalog.h"

using namespace std;

int main(void)
{
 Catalog a;
 int b;
 string aut,name;
 cout<<"If you want add new book   ----- write 1"<<endl;
 cout<<"If you want see the catalog----- write 2"<<endl;
 cout<<"If you want find by author ----- write 3"<<endl;
 cout<<"If you want delete the book----- write 4"<<endl;
 cin>>b;
 cin.ignore();
 if(b==1)
 {
     cout<<"Write name of book :";
     cin>>name;
     cout<<"write name of author :";
     cin>>aut;
     a.add_book(name,aut);
     cout<<"Write name of book :";
     cin>>name;
     cout<<"write name of author :";
     cin>>aut;
     a.add_book(name,aut);
     cout<<"Write name of book :";
     cin>>name;
     cout<<"write name of author :";
     cin>>aut;
     a.add_book(name,aut);


       a.del_book();
         a.show_catalogue();
 }
 else if(b==2)
 {
  a.show_catalogue();
 }
 else if(b==3)
 {
     a.find_by_author();
 }
 else if(b==4)
 {
     a.del_book();
 }
}

