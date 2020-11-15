
#include <iostream>
#include <vector>
#include<algorithm>
#include"Book.h"

Book::Book()
{
   author = " ";
   title = " ";
   date = " ";
}


Book::Book(std::string new_author, std::string new_title, std::string new_date)
{
   this->author = new_author;
   this->title = new_title;
   this->date = new_date;
}
void Book::setData(std::string new_author, std::string new_title, std::string new_date)
{
   this->author = new_author;
   this->title = new_title;
   this->date = new_date;
}
std::string Book::getAuthor() const
{
   return author;
}
std::string Book::getTitle() const
{
   return title;
}
std::string Book::getDate() const
{
   return date;
}

bool operator< (const Book& book1, const Book& book2)
{
   return (book1.author < book2.author);
}
