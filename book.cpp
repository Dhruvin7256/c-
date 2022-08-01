#include<iostream>
using namespace std;
class Book
{
    private:
    int n;
    int bookno;
    string book[20] ;
    float Price;
    float TOTAL_COST()
    {
        return n*Price;         
    }
    public:

        void INPUT();
        void PURCHASE();
};
        void Book::INPUT()
        {
            
            cout<<"\n ENTER BOOK_NO :";
            cin>>bookno;
            cout<<"\n ENTER BOOK TITLE:";
            cin>>(book);
            cout<<"\n TOTAL PRICE :";
            cin>>Price;
            
        }
        void Book::PURCHASE()
        {
            cout<<"\n   BOOK PRICE INFORMATION ";
            cout<<"\n------------------------------\n";
            cout<<"\n NO OF COPIES:";
            cin>>n;
            cout<<"\n TOTAL PRICE:"<<TOTAL_COST()<<endl;
            
}

int main()
{
   
    Book b1;
    b1.INPUT();
    b1.PURCHASE();
    
    return 0;
}



