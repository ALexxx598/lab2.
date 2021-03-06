#include "catalog.h"
#include <iostream>
#include <string.h>
#include <cstdlib>
#include <cstdio>

using namespace std;

Catalog::Catalog()
{
 this->head=nullptr;
 this->size=0;
}

void Catalog::add_book(string name_book,string author)
{
 node *temp=new node (nullptr,name_book,author);
 if(this->head==nullptr)
 {
  this->head=temp;
 }
 else
 {
  node *last=head;
  while(last->pNext!=nullptr)
  {
   last=last->pNext;
  }
  last->pNext=temp;
 }

 this->size++;
}

void Catalog::show_catalogue()
{
 node *last=head;
  while(last!=nullptr)
  {
   cout<<"Name of book :"<<last->name_book<<" "<<"Name of author :"<<last->author<<endl;
   last=last->pNext;
  }

}

void Catalog::find_by_author()
{
    string aut;
    cout<<"write name of author"<<endl;
    cin>>aut;
    node *last=head;
     while(last!=nullptr)
     {
         if(aut==last->author)
         {
            cout<<"Name of book :"<<last->name_book<<" "<<"Name of author :"<<last->author<<endl;
         }
       last=last->pNext;
     }
}

void Catalog::del_book()
{
 node *last=head;
 node *temp=head;
 string name;
cout<<"Write name of book"<<endl;
cin>>name;
 while(last!=nullptr)
 {

  if(name==last->name_book)
  {
      head->pNext=last->pNext;
      break;
  }
  last=last->pNext;
  temp=temp->pNext;
 }
}
