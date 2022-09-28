#include <iostream>

using namespace std;

int main()
{
    string line(50, '*');
    string dash(50, '-');
	
	string book1 = "  1.  The magic land"; 
	string book2 = "  2.  The precious bag"; 
	string book3 = "  3.  My imaginary friend";    
	string book4 = "  4.  Lucky me";  
	string book5 = "  5.  The ultimate language";
   
    float book1Price = 15.99;
    int book1Quantity = 200;

    float book2Price = 10.00;
    int book2Quantity = 20;
   
    float book3Price = 25.00;
    int book3Quantity = 500;

    float book4Price = 5.00;
    int book4Quantity = 10;
  
    float book5Price = 30.00;
    int book5Quantity = 100;

    int quantity {0};
    float price {0};
    int count {0};
	int choice;
    float priceSum;
    
	cout << " Hello there,\n";
    do {
            cout <<"\n Please press \"1\" to view the list of books available or any other number/letter to end the program " << endl;
	
	int x;
    cin >> x;
    if (x==1)
    {
    cout << '\n'<< book1 << '\n'<< book2 <<'\n'<< book3 << '\n'<< book4 << '\n'<< book5 << '\n';
    }
    else
        break;

    cout << "\n Please enter the number of the book you need from the list\n" << endl;
	int bookTitle;
    cin >> bookTitle;
    cout << "\n ";

   if (bookTitle <= 5 )
    {
        if (bookTitle == 1)
        {
            cout <<dash<<"\n We have: " << book1Quantity << " copies left"<<"\n "<<dash << endl;
            cout << " Unit price is: GHC "<< book1Price <<"\n "<<dash<< endl;
            cout << "\n Enter the number of copies you want\n" << endl;
            cin >> quantity;
            if (quantity<=book1Quantity)
            {
            price = quantity * book1Price;
            cout<< " \n "<< line
            <<"\n"<< " Unit price is: GHC "<< book1Price <<"\n "<<dash
            <<"\n" << " Your charge is: GHC "<< price <<"\n "<< line <<endl;
            book1Quantity = book1Quantity - quantity;
            }
           else
            cout << "Sorry, we only have  " << book1Quantity<< " left"<< endl;
        }
        else if (bookTitle == 2)
        {
            cout <<dash<<"\n We have: " << book2Quantity << " copies left"<<"\n "<<dash << endl;
            cout << " Unit price is: GHC "<< book2Price <<"\n "<<dash<< endl;
            cout << "\n Enter the number of copies you want\n" << endl;
            cin >> quantity;
            if (quantity<=book2Quantity)
            {
            price = quantity * book2Price;
            cout<< " \n "<< line
            <<"\n"<< " Unit price is: GHC "<< book2Price <<"\n "<<dash
            <<"\n"<< " Your charge is: GHC "<< price <<"\n "<< line <<endl;
            book2Quantity = book2Quantity - quantity;
            }
           else
            cout << "Sorry, we only have  " << book2Quantity<< " left"<< endl;
        }
        else if (bookTitle == 3)
        {
            cout <<dash<<"\n We have: " << book3Quantity << " copies left"<<"\n "<<dash << endl;
            cout << " Unit price is: GHC "<< book3Price <<"\n "<<dash<< endl;
            cout << "\n Enter the number of copies you want\n" << endl;
            cin >> quantity;
            if (quantity<=book3Quantity)
            {
            price = quantity * book3Price;
            cout<< " \n "<< line
            <<"\n"<< " Unit price is: GHC "<< book3Price <<"\n "<<dash
            <<"\n"<< " Your charge is: GHC "<< price <<"\n "<< line <<endl;
            book3Quantity = book3Quantity - quantity;
            }
           else
            cout << "Sorry, we only have  " << book3Quantity<< " left"<< endl;
        }
        else if (bookTitle == 4)
        {
           cout <<dash<<"\n We have: " << book4Quantity << " copies left"<<"\n "<<dash << endl;
            cout << " Unit price is: GHC "<< book4Price <<"\n "<<dash<< endl;
            cout << "\n Enter the number of copies you want\n" << endl;
            cin >> quantity;
            if (quantity<=book4Quantity)
            {
            price = quantity * book4Price;
            cout<< " \n "<< line
            <<"\n"<< " Unit price is: GHC "<< book4Price <<"\n "<<dash
            <<"\n"<< " Your charge is: GHC "<< price <<"\n "<< line <<endl;
            book4Quantity = book4Quantity - quantity;
            }
           else
            cout << "Sorry, we only have  " << book4Quantity<< " left"<< endl;
        }
        else if (bookTitle == 5)
        {
            cout <<dash<<"\n We have: " << book5Quantity << " copies left"<<"\n "<<dash << endl;
            cout << " Unit price is: GHC "<< book5Price <<"\n "<<dash<< endl;
            cout << "\n Enter the number of copies you want\n" << endl;
            cin >> quantity;
            if (quantity<=book5Quantity)
            {
            price = quantity * book5Price;
            cout<< " \n "<< line
            <<"\n"<< " Unit price is: GHC "<< book5Price <<"\n "<<dash
            <<"\n"<< " Your charge is: GHC "<< price <<"\n "<< line <<endl;
            book5Quantity = book5Quantity - quantity;
            }
           else
            cout << "Sorry, we only have  " << book5Quantity<< " left"<< endl;
        }
    }
    else
        cout<< "Book Not Found!!!"<< endl;

    cout << "\n\n Do you want to buy another book?\n\n";
    cout << " Enter 1 for Yes / 0 for No \n\n";

    priceSum += price;
    cin>> choice;
    }
    while (choice != 0);

        ++count;
    cout<< " \n Thank you for choosing us \n\n "<< line
            <<"\n"<< " Your total charge is: GHC "<< priceSum <<"\n "<< line <<endl;

    return 0;
}

