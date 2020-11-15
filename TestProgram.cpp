/*Assignment
Nadezda Tsygankova
Part A 
Task 1

*/




#include <iostream>
#include <vector>
#include<algorithm>
#include"Book.h"
#include<string>


using namespace std;

void AddNewBook(vector<Book>* bookdata);
void PrintBooks(vector<Book>& bookdata);
void SortBooks(vector<Book>& bookdata);
void PrintMenu();

int main()
{
   vector<Book> bookdata;
   int choose;
   do {
      PrintMenu();
      std::cin >> choose;
      switch (choose)
      {
      case 1:
         AddNewBook(&bookdata);
         break;
      case 2:
         SortBooks(bookdata);
         PrintBooks(bookdata);
         break;
      case 3:
         std::cout << "Thank you, have a great day";
         exit(0);
      default:
         std::cout << "Invalid input" << std::endl;
         break;
      }
   } while (choose != 3);
   return 0;
}


void AddNewBook(vector<Book>* bookdata)
{
   std::cin.ignore(32767, '\n');
   std::cout << "Enter title :";
   std::string title;
   std::getline(std::cin, title);

   std::cout << "Enter author: :";
   std::string author;
   std::getline(std::cin, author);

   std::cout << "Enter date :";
   std::string date;
   std::getline(std::cin, date);

   bookdata->push_back(Book(author, title, date));
}

void PrintBooks(vector<Book>& bookdata)
{
   std::cout << "The books entered so far, sorted alphabetically by author are:" << std::endl;
   for (const auto& Book : bookdata)
   {
      std::cout << Book.getAuthor() << ".";
      std::cout << Book.getTitle() << ".";
      std::cout << Book.getDate() << "." << std::endl;
   }
}
void SortBooks(vector<Book>& bookdata)
{
   std::sort(bookdata.begin(), bookdata.end());
}
void PrintMenu()
{
   std::cout << "1.	Add a book’s author, title, and date\n2.	Print an alphabetical list of the books sorted by author\n3.	Quit" << std::endl;

}