#include <iostream>
#include <string>
#include <cstdlib> 
#include <ctime>   


using namespace std; 

int main() 
{
    string name1, name2; 
   int roll1, roll2, roll3, roll4, roll5, roll6, rollw, rolla, r1, r2, ld1, ld2, ld3, ld4;
    char Roll;
    int sum1 = 0;
    int sum2 = 0;

    cout << "Enter your First name (player 1) : "; //Details of player one 
    getline(cin, name1);
    


    cout <<" "<<endl; 

    cout << "Enter roll number: 23I-";  
    cin >> r1;
    
    if(r1>9999)
	{
	cout<<"Enter Valid Roll number : 23I-";
	    cin >> r1;
			}
   cout <<" "<<endl; 
       cin.ignore();

    cout << "Enter your First name (player 2) : "; //Details of player two 
    getline(cin, name2);
       cout <<" "<<endl; 
       
    cout << "Enter roll number: 23I-";
    cin >> r2;
       cout <<" "<<endl; 
       
          if(r2>9999)
	{
	cout<<"Enter Valid Roll number : 23I-";
	    cin >>r2;
			}

    for (int i = 1; i <= 5; i++)  //Start of rounds
        {
        cout << "Round Number: " << i << endl;
        
        cout<<" "<<endl;

        cout << "Press any key to roll the dice 1 for player 1 " << endl;
        cin >> Roll;

        srand(time(0));
        roll1 = (rand() % 6) + 1;
        
        cout << "Value of the Roll : " << roll1 << endl;

        cout << " " << endl;
        cout << "Press any key to roll the dice 2 for player 1 " << endl;
        cin >> Roll;

        srand(time(0));
        roll2 = (rand() % 6) + 1;
        
        cout << "Value of the Roll : " << roll2 << endl;
        
           cout << " " << endl; 

        sum1 += (roll1 + roll2);

        if (roll1 == roll2) //Checking the ondition if player rolls a double
        {
            int a = roll1 + roll2;
            int d1 = (a * a) - (4 * a);
            
            	if (d1 == 0) 
            {
            	   cout << "Player 1 gets an extra roll." << endl;
                
                roll3 = (rand() % 6) + 1;
                cout << "Value of the extra roll is: " << roll3 << endl;
                sum1 += roll3;
            }
            
            }

        cout << "Press any key to roll the dice 1 for player 2 " << endl;
        cin >> Roll;
        
           cout <<" "<< endl; 

        srand(time(0));
        roll4 = (rand() % 6) + 1;
        cout << "Value of the Roll : " << roll4 << endl;

        cout << " " << endl;
        cout << "Press any key to roll the dice 2 for player 2 " << endl;
        cin >> Roll;
             cout << " " << endl; 
             
        srand(time(0));
        roll5 = (rand() % 6) + 1;
        cout << "Value of the Roll : " << roll5 << endl;
           cout << " " << endl; 

        sum2 += (roll4 + roll5);

        if (roll4 == roll5) //Checking the ondition if player rolls a double
        {
            int b = roll4 + roll5;
            int d2 = (b * b) - (4 * b);
            if (d2 == 0) 
            {
               cout << "Player 1 gets an extra roll." << endl;
                roll3 = (rand() % 6) + 1;
                cout << "Value of the extra roll is: " << roll3 << endl;
                sum1 += roll3;
                                  }
                                            }
                                            
    ld1 = r1 % 100; //checking for the last two digits of the roll number
    ld1 = ld1 / 10;
    ld2 = r1 % 10;
    
    if (sum1 == (ld1 + ld2)) 
    {
        cout << "Player 1 gets an additional point" << endl;

        sum1 += ld2;
                        }

    ld3 = r2 % 100;
    ld3 = ld3 / 10;
    ld4 = r2 % 10;
    if (sum2 == (ld3 + ld4))
    {
        cout << "Player 2 gets an additional point" << endl;
        sum2 += ld4;
                        }
    
int v1 =  31 & (name1[name1.length()-1]);  //checking values for the last letter in the players name
int v2 =  31 & (name2[name2.length()-1]);

if(sum1==v1)
{
    sum1+=5;
}

if(sum2==v2)
{
    sum2+=5;
}
   
   cout<<"Score of player one = "<<sum1<<endl;
   
   cout<<endl;
   cout<<"Score of player two = "<<sum2<<endl;
   
   
 if(i<5)
 {

cout<<"Press any key to Start New round"<<endl;
 cin >> Roll;
  
   system("clear");
}
 }
 
 cout<<"  "<<endl;
    
    cout << "All rounds have been completed" << endl;

//Finding the winner

    while (sum1 == sum2) //Incase of a tie
    {
        cout << "Both players get an extra roll due to a tie!!!" << endl;

        cout << "Extra Roll value for player 1 is: " << endl;
        srand(time(0));
        rollw = (rand() % 6) + 1;
        cout << "Value of the extra roll is: " << rollw << endl;
        sum1 += rollw;
        
        cout<<endl;

        cout << "Extra Roll value for player 2 is: " << endl;
        srand(time(0));
        rolla = (rand() % 6) + 1;
        cout << "Value of the extra roll is: " << rolla << endl;
        sum2 += rolla;
                    }

    if (sum1 > sum2) 
    {
        cout << "Player 1 has the higher score" << endl;

        cout <<name1<<" wins !!" << endl;
        
        cout<<"Score : "<<sum1<<endl;
    }

    if (sum1 < sum2) 
    {
        cout << "Player 2 has the higher score" << endl;

        cout <<name2<<" wins !!" << endl;
        cout<<"Score : "<<sum2<<endl;
    }

    return 0;
    }
