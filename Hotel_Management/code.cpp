#include<iostream>
using namespace std;

int main()
{
    int quant,choice;
    
    // Total availability
    int rooms=0, pasta=0, burger=0, noodles=0, shake=0, chicken=0;
    //Total Sales
    int Sold_rooms=0, Sold_pasta=0, Sold_burger=0, Sold_noodles=0, Sold_shake=0, Sold_chicken=0;
    //Amount
    int room_collection=0, pasta_collection=0, burger_collection=0, noodles_collection=0, shake_collection=0, chicken_collection=0;

    cout<<"\n\t Please Enter Quantity of items we have";
    cout<<"\n\nRooms available : ";
    cin>>rooms;
    cout<<"\n Quantity of pasta : ";
    cin>>pasta;
    cout<<"\n Quantity of burger : ";
    cin>>burger;
    cout<<"\n Quantity of noodles : ";
    cin>>noodles;
    cout<<"\n Quantity of shake : ";
    cin>>shake;
    cout<<"\n Quantity of chicken-roll : ";
    cin>>chicken;

    menu:
    cout<<"\n\n\n\t\t\t Please select from the menu options ";
    cout<<"\n\n1) Rooms";
    cout<<"\n2) Pasta";
    cout<<"\n3) Burger";
    cout<<"\n4) Noodles";
    cout<<"\n5) Shake";
    cout<<"\n6) Chicken Roll";
    cout<<"\n7) Information Regarding Sales and Collection";
    cout<<"\n8) Exit";

    cout<<"\n\n Please Enter your choice : ";
    cin>>choice;

    switch(choice)
    {
         case 1:
            cout<<"\n\n\n\nEnter the number of rooms you want: ";
            cin>>quant;
            if(rooms-Sold_rooms>=quant)
            {
                Sold_rooms+=quant;
                room_collection += quant*1200;
                cout<<"\n\n\t"<<quant<<" rooms have been alloted to you!";
            }
            else
            {
                if(rooms-Sold_rooms==0)
                    cout<<"\n\tSorry!! No rooms are available ";
                else
                    cout<<"\n\tOnly "<<rooms-Sold_rooms<<" Rooms are available";
            }  
            break;
        




        case 2:
            cout<<"Enter pasta Quantity: ";
            cin>>quant;
            if(pasta-Sold_pasta>=quant)
            {
                Sold_pasta+=quant;
                pasta_collection += quant*250;
                cout<<"\n\n\t"<<quant<<" pasta is the order!";
            }
            else
            {
                if(pasta-Sold_pasta==0)
                    cout<<"\n\tSorry!! pasta is not available ";
                else
                    cout<<"\n\tOnly "<<pasta-Sold_pasta<<" pasta remaining in hotel";
            }  
            break;





        case 3:
            cout<<"Enter Burger Quantity: ";
            cin>>quant;
            if(burger-Sold_burger>=quant)
            {
                Sold_burger+=quant;
                burger_collection += quant*120;
                cout<<"\n\n\t"<<quant<<" burger is the order!";
            }
            else
            {
                if(burger-Sold_burger==0)
                    cout<<"\n\tSorry!! Burger is not available ";
                else
                    cout<<"\n\tOnly "<<burger-Sold_burger<<" burger remaining in hotel";
            }  
            break;
        




        case 4:
            cout<<"Enter noodles Quantity: ";
            cin>>quant;
            if(noodles-Sold_noodles>=quant)
            {
                Sold_noodles+=quant;
                noodles_collection += quant*140;
                cout<<"\n\n\t"<<quant<<" Noodles is the order!";
            }
            else
            {
                if(noodles-Sold_noodles==0)
                    cout<<"\n\tSorry!! noodles are not available ";
                else
                    cout<<"\n\tOnly "<<noodles-Sold_noodles<<" noodles remaining in hotel";
            }  
            break;



        case 5:
            cout<<"Enter shake Quantity: ";
            cin>>quant;
            if(shake-Sold_shake>=quant)
            {
                Sold_shake+=quant;
                shake_collection += quant*120;
                cout<<"\n\n\t"<<quant<<" shake is the order!";
            }
            else
            {
                if(shake-Sold_shake==0)
                    cout<<"\n\tSorry!! shake is not available ";
                else
                    cout<<"\n\tOnly "<<shake-Sold_shake<<" shake remaining in hotel";
            }  
            break;
        



        case 6:
            cout<<"Enter Chicken-Roll Quantity: ";
            cin>>quant;
            if(chicken-Sold_chicken>=quant)
            {
                Sold_chicken+=quant;
                chicken_collection += quant*250;
                cout<<"\n\n\t"<<quant<<" chicken-roll is the order!";
            }
            else
            {
                if(chicken-Sold_chicken==0)
                    cout<<"\n\tSorry!! chicken-roll is not available ";
                else
                    cout<<"\n\tOnly "<<chicken-Sold_chicken<<" chicken-roll remaining in hotel";
            }  
            break;

    

        case 7:
                cout<<"\n\t\tDetails of sales and collection";
                cout<<"\n-----------------------------------------";
                cout<<"\n\n Number of rooms we had : "<<rooms;
                cout<<"\n\n Number of rooms sold : "<<Sold_rooms;
                cout<<"\n\n Remaining rooms : "<<rooms-Sold_rooms;
                cout<<"\n-----------------------------------------";
                cout<<"\n\n |Total rooms collection for the day : "<<room_collection<<"|";
                cout<<"\n-----------------------------------------";

                cout<<"\n\n Number of pasta we had : "<<pasta;
                cout<<"\n\n Number of pasta sold : "<<Sold_pasta;
                cout<<"\n\n Remaining pasta : "<<pasta-Sold_pasta;
                cout<<"\n-----------------------------------------";
                cout<<"\n\n |Total pasta collection for the day : "<< pasta_collection<<"|";
                cout<<"\n-----------------------------------------";

                cout<<"\n\n Number of shakes we had : "<< shake;
                cout<<"\n\n Number of shakes sold : "<< Sold_shake;
                cout<<"\n\n Remaining shakes : "<< shake-Sold_shake;
                cout<<"\n-----------------------------------------";
                cout<<"\n\n |Total shakes collection for the day : "<< shake_collection<<"|";
                cout<<"\n-----------------------------------------";

                cout<<"\n\n Number of burgers we had : "<<burger;
                cout<<"\n\n Number of burger sold : "<<Sold_burger;
                cout<<"\n\n Remaining burgers : "<<burger-Sold_burger;
                cout<<"\n-----------------------------------------";
                cout<<"\n\n |Total burgers collection for the day : "<<burger_collection<<"|";
                cout<<"\n-----------------------------------------";

                cout<<"\n\n Number of chicken-rolls we had : "<<chicken;
                cout<<"\n\n Number of chicken-rolls sold : "<<Sold_chicken;
                cout<<"\n\n Remaining chicken-rolls : "<<chicken-Sold_chicken;
                cout<<"\n-----------------------------------------";
                cout<<"\n\n |Total chicken-roll collection for the day : "<<chicken_collection<<"|";
                cout<<"\n-----------------------------------------";

                cout<<"\n\n Number of noodles we had : "<<noodles;
                cout<<"\n\n Number of noodles sold : "<<Sold_noodles;
                cout<<"\n\n Remaining noodles : "<<noodles-Sold_noodles;
                cout<<"\n-----------------------------------------";
                cout<<"\n\n |Total noodles collection for the day : "<<noodles_collection<<"|";
                cout<<"\n-----------------------------------------";

                cout<<"\n\n Total Collection For The Day : "<<burger_collection+chicken_collection+noodles_collection+pasta_collection+room_collection+shake_collection;
               cout<<"\n-----------------------------------------";
               cout<<"\n-----------------------------------------";
               cout<<"\n-----------------------------------------";
               cout<<"\n-----------------------------------------";
                break;

        


        case 8:
                exit(0);

        
        default:
                cout<<"\n Please Select From Mentioned Above!!";




    }
    goto menu;
}