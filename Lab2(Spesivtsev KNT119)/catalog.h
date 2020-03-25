#ifndef CATALOG_H
#define CATALOG_H
#include<iostream>
#include <string.h>
#include<cstdlib>
#include <cstdio>
using namespace std;

class Catalog
{
     public:
     Catalog(void);
     void add_book(string name_book,string author );
     void del_book(void);
     void show_catalogue(void);
     void find_by_author(void);


     private:

             struct node
             {
              public:
              node *pNext;
              string name_book;
              string author;

              node(node *pNext=nullptr, string name_book ="",string author="")
              {

               this->pNext=pNext;
               this->name_book=name_book;
               this->author=author;
              }
             };

     node *head;
     int size;

 };

#endif // CATALOG_H
