#pragma once
//defining maximum size
const int MaxSize = 15;
typedef  int DataType;
//creating a class
class List
{

private:
// data members - usually private
int size;
DataType Item [MaxSize];

public:
List(void); //constructor -- can be overloaded; not a member function
~List(void);
// data members - usually public, some may be private
//functions prototypes	
bool IsEmpty ();//prototype function for checking if list is empty
bool IsFull  ();
void  Insert (DataType);
void  Delete (DataType); 
void  ShowData ();//prototype function for displaying output

};
