#pragma once

#include <iostream>
#include <vector>
#include<algorithm>

class Book
{
private:
   std::string author;
   std::string date;
   std::string title;
public:
   Book();
   Book(std::string new_author, std::string new_title, std::string new_date);
   void setData(std::string new_author, std::string new_title, std::string new_date);
   std::string getAuthor() const;
   std::string getTitle() const;
   std::string getDate() const;
   friend bool operator< (const Book& book1, const Book& book2);

};