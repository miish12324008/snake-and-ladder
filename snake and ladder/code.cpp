#include<iostream>
using namespace std;

int count_of_Player_1 = 0;
int count_of_Player_2 = 0;
int count_of_Player_3 = 0;
int count_of_Player_4 = 0;
int number_of_players;
int temp_count_of_player_1 = 0;
int temp_count_of_player_2 = 0;
int temp_count_of_player_3 = 0;
int temp_count_of_player_4 = 0;
int x;

void input()
{
    cout<<endl;
    cout<<"Enter number of players: ";
    cin>>number_of_players;
}

void players(int &number_of_players)
{
    if(number_of_players == 1)
    {
        cout<<endl;
        cout<<"greater than two players allowed";
        cout<<endl;
        cout<<"want to reset the game";
        cout<<endl;
        cout<<"press 0 to reset the game: ";
        cin>>x;
        {
            if(x == 0)
            {
                input();
                players(number_of_players);
            }
        }
    }
    else if(number_of_players == 2)
    {
        cout<<"score of player 1: "<<count_of_Player_1;
        cout<<endl;
        cout<<"score of player 2: "<<count_of_Player_2;
        cout<<endl;
        cout<<"press enter";
        cout<<endl;
        cin.ignore();
    }
    else if(number_of_players == 3)
    {
        cout<<"score of player 1: "<<count_of_Player_1;
        cout<<endl;
        cout<<"score of player 2: "<<count_of_Player_2;
        cout<<endl;
        cout<<"score of player 3: "<<count_of_Player_3;
        cout<<endl;
        cout<<"press enter";
        cin.ignore();
    }
    else if (number_of_players == 4)
    {
        cout<<"score of player 1: "<<count_of_Player_1;
        cout<<endl;
        cout<<"score of player 2: "<<count_of_Player_2;
        cout<<endl;
        cout<<"score of player 3: "<<count_of_Player_3;
        cout<<endl;
        cout<<"score of player 4: "<<count_of_Player_4;
        cout<<endl;
        cout<<"press enter";
        cin.ignore();
    }
    else
    {
        cout<<"max 4 players can play the game";
        cout<<endl;
        cout<<"press 0 to reset the game: ";
        cin>>x;
        {
            if(x == 0)
            {
                input();
                players(number_of_players);
            }
        }
    }
}


void snake()
{
    if(number_of_players == 2)
    {
        if(count_of_Player_1 == 28 )
        {
            count_of_Player_1 = 15;
            cout<<endl;
            cout<<"snake bites player 1 now player 1 is at: "<<count_of_Player_1;
        }
        else if(count_of_Player_1 == 55)
        {
            count_of_Player_1 = 10;
            cout<<endl;
            cout<<"snake bites player 1 now player 1 is at: "<<count_of_Player_1;
        }
        else if(count_of_Player_1 == 99)
        {
            count_of_Player_1 = 1;
            cout<<endl;
            cout<<"snake biter player 1 now player 1 is at: "<<count_of_Player_1;
        }
        else if(count_of_Player_2 == 28 )
        {
            count_of_Player_2 = 15;
            cout<<endl;
            cout<<"snake bites player 2 now player 2 is at: "<<count_of_Player_2;
        }
        else if(count_of_Player_2 == 55)
        {
            count_of_Player_2 = 10;
            cout<<endl;
            cout<<"snake bites player 2 now player 2 is at: "<<count_of_Player_2;
        }
        else if(count_of_Player_2 == 99)
        {
            count_of_Player_2 = 1;
            cout<<endl;
            cout<<"snake biter player 2 now player 2 is at: "<<count_of_Player_2;
        }
    }

    else if(number_of_players == 3)
    {
        if(count_of_Player_1 == 28 )
        {
            count_of_Player_1 = 15;
            cout<<endl;
            cout<<"snake bites player 1 now player 1 is at: "<<count_of_Player_1;
        }
        else if(count_of_Player_1 == 55)
        {
            count_of_Player_1 = 10;
            cout<<endl;
            cout<<"snake bites player 1 now player 1 is at: "<<count_of_Player_1;
        }
        else if(count_of_Player_1 == 99)
        {
            count_of_Player_1 = 1;
            cout<<endl;
            cout<<"snake biter player 1 now player 1 is at: "<<count_of_Player_1;
        }
        else if(count_of_Player_2 == 28 )
        {
            count_of_Player_2 = 15;
            cout<<endl;
            cout<<"snake bites player 2 now player 2 is at: "<<count_of_Player_2;
        }
        else if(count_of_Player_2 == 55)
        {
            count_of_Player_2 = 10;
            cout<<endl;
            cout<<"snake bites player 2 now player 2 is at: "<<count_of_Player_2;
        }
        else if(count_of_Player_2 == 99)
        {
            count_of_Player_2 = 1;
            cout<<endl;
            cout<<"snake biter player 2 now player 2 is at: "<<count_of_Player_2;
        }

        else if(count_of_Player_3 == 28 )
        {
            count_of_Player_3 = 15;
            cout<<endl;
            cout<<"snake bites player 3 now player 3 is at: "<<count_of_Player_3;
        }
        else if(count_of_Player_3 == 55)
        {
            count_of_Player_3 = 10;
            cout<<endl;
            cout<<"snake bites player 3 now player 3 is at: "<<count_of_Player_3;
        }
        else if(count_of_Player_3 == 99)
        {
            count_of_Player_3 = 1;
            cout<<endl;
            cout<<"snake biter player 3 now player 3 is at: "<<count_of_Player_3;
        }       
    }
   
    else if(number_of_players == 4)
    {
        if(count_of_Player_1 == 28 )
        {
            count_of_Player_1 = 15;
            cout<<endl;
            cout<<"snake bites player 1 now player 1 is at: "<<count_of_Player_1;
        }
        else if(count_of_Player_1 == 55)
        {
            count_of_Player_1 = 10;
            cout<<endl;
            cout<<"snake bites player 1 now player 1 is at: "<<count_of_Player_1;
        }
        else if(count_of_Player_1 == 99)
        {
            count_of_Player_1 = 1;
            cout<<endl;
            cout<<"snake biter player 1 now player 1 is at: "<<count_of_Player_1;
        }
        else if(count_of_Player_2 == 28 )
        {
            count_of_Player_2 = 15;
            cout<<endl;
            cout<<"snake bites player 2 now player 2 is at: "<<count_of_Player_2;
        }
        else if(count_of_Player_2 == 55)
        {
            count_of_Player_2 = 10;
            cout<<endl;
            cout<<"snake bites player 2 now player 2 is at: "<<count_of_Player_2;
        }
        else if(count_of_Player_2 == 99)
        {
            count_of_Player_2 = 1;
            cout<<endl;
            cout<<"snake biter player 2 now player 2 is at: "<<count_of_Player_2;
        }

        else if(count_of_Player_3 == 28 )
        {
            count_of_Player_3 = 15;
            cout<<endl;
            cout<<"snake bites player 3 now player 3 is at: "<<count_of_Player_3;
        }
        else if(count_of_Player_3 == 55)
        {
            count_of_Player_3 = 10;
            cout<<endl;
            cout<<"snake bites player 3 now player 3 is at: "<<count_of_Player_3;
        }
        else if(count_of_Player_3 == 99)
        {
            count_of_Player_3 = 1;
            cout<<endl;
            cout<<"snake biter player 3 now player 3 is at: "<<count_of_Player_3;
        } 

        else if(count_of_Player_4 == 28 )
        {
            count_of_Player_4 = 15;
            cout<<endl;
            cout<<"snake bites player 4 now player 4 is at: "<<count_of_Player_4;
        }
        else if(count_of_Player_4 == 55)
        {
            count_of_Player_4 = 10;
            cout<<endl;
            cout<<"snake bites player 4 now player 4 is at: "<<count_of_Player_4;
        }
        else if(count_of_Player_4 == 99)
        {
            count_of_Player_4 = 1;
            cout<<endl;
            cout<<"snake biter player 4 now player 4 is at: "<<count_of_Player_4;
        }   
    }    
}

void ladder()
{
    if(number_of_players == 2)
    {
        if(count_of_Player_1 == 8 )
        {
            count_of_Player_1 = 16;
            cout<<endl;
            cout<<"player 1 got a ladder player 1 is at: : "<<count_of_Player_1;
        }
        else if(count_of_Player_1 == 10)
        {
            count_of_Player_1 = 20;
            cout<<endl;
            cout<<"player 1 got a ladder player 1 is at: : "<<count_of_Player_1;
        }
        else if(count_of_Player_1 == 20)
        {
            count_of_Player_1 = 40;
            cout<<endl;
            cout<<"snake biter player 1 now player 1 is at: "<<count_of_Player_1;
        }
        else if(count_of_Player_2 == 8 )
        {
            count_of_Player_2 = 16;
            cout<<endl;
            cout<<"player 2 got a ladder now player 2 is at: : "<<count_of_Player_2;
        }
        else if(count_of_Player_2 == 10)
        {
            count_of_Player_2 = 20;
            cout<<endl;
            cout<<"player 2 got a ladder now player 2 is at: : "<<count_of_Player_2;
        }
        else if(count_of_Player_2 == 20)
        {
            count_of_Player_2 = 40;
            cout<<endl;
            cout<<"snake biter player 2 now player 2 is at: "<<count_of_Player_2;
        }
    }

    else if(number_of_players == 3)
    {
        if(count_of_Player_1 == 8 )
        {
            count_of_Player_1 = 16;
            cout<<endl;
            cout<<"player 1 got a ladder player 1 is at: : "<<count_of_Player_1;
        }
        else if(count_of_Player_1 == 10)
        {
            count_of_Player_1 = 20;
            cout<<endl;
            cout<<"player 1 got a ladder player 1 is at: : "<<count_of_Player_1;
        }
        else if(count_of_Player_1 == 40)
        {
            count_of_Player_1 = 1;
            cout<<endl;
            cout<<"snake biter player 1 now player 1 is at: "<<count_of_Player_1;
        }
        else if(count_of_Player_2 == 8 )
        {
            count_of_Player_2 = 16;
            cout<<endl;
            cout<<"player 2 got a ladder now player 2 is at: : "<<count_of_Player_2;
        }
        else if(count_of_Player_2 == 10)
        {
            count_of_Player_2 = 20;
            cout<<endl;
            cout<<"player 2 got a ladder now player 2 is at: : "<<count_of_Player_2;
        }
        else if(count_of_Player_2 == 20)
        {
            count_of_Player_2 = 40;
            cout<<endl;
            cout<<"snake biter player 2 now player 2 is at: "<<count_of_Player_2;
        }

        else if(count_of_Player_3 == 8 )
        {
            count_of_Player_3 = 16;
            cout<<endl;
            cout<<"player 3 got a ladder now player 3 is at: : "<<count_of_Player_3;
        }
        else if(count_of_Player_3 == 10)
        {
            count_of_Player_3 = 20;
            cout<<endl;
            cout<<"player 3 got a ladder now player 3 is at: : "<<count_of_Player_3;
        }
        else if(count_of_Player_3 == 20)
        {
            count_of_Player_3 = 40;
            cout<<endl;
            cout<<"snake biter player 3 now player 3 is at: "<<count_of_Player_3;
        }       
    }
   
    else if(number_of_players == 4)
    {
        if(count_of_Player_1 == 8 )
        {
            count_of_Player_1 = 16;
            cout<<endl;
            cout<<"player 1 got a ladder player 1 is at: : "<<count_of_Player_1;
        }
        else if(count_of_Player_1 == 10)
        {
            count_of_Player_1 = 20;
            cout<<endl;
            cout<<"player 1 got a ladder player 1 is at: : "<<count_of_Player_1;
        }
        else if(count_of_Player_1 == 20)
        {
            count_of_Player_1 = 40;
            cout<<endl;
            cout<<"snake biter player 1 now player 1 is at: "<<count_of_Player_1;
        }
        else if(count_of_Player_2 == 8 )
        {
            count_of_Player_2 = 16;
            cout<<endl;
            cout<<"player 2 got a ladder now player 2 is at: : "<<count_of_Player_2;
        }
        else if(count_of_Player_2 == 10)
        {
            count_of_Player_2 = 20;
            cout<<endl;
            cout<<"player 2 got a ladder now player 2 is at: : "<<count_of_Player_2;
        }
        else if(count_of_Player_2 == 20)
        {
            count_of_Player_2 = 40;
            cout<<endl;
            cout<<"snake biter player 2 now player 2 is at: "<<count_of_Player_2;
        }

        else if(count_of_Player_3 == 8 )
        {
            count_of_Player_3 = 16;
            cout<<endl;
            cout<<"player 3 got a ladder now player 3 is at: : "<<count_of_Player_3;
        }
        else if(count_of_Player_3 == 10)
        {
            count_of_Player_3 = 20;
            cout<<endl;
            cout<<"player 3 got a ladder now player 3 is at: : "<<count_of_Player_3;
        }
        else if(count_of_Player_3 == 20)
        {
            count_of_Player_3 = 40;
            cout<<endl;
            cout<<"snake biter player 3 now player 3 is at: "<<count_of_Player_3;
        } 

        else if(count_of_Player_4 == 8 )
        {
            count_of_Player_4 = 16;
            cout<<endl;
            cout<<"player 4 got a ladder now player 4 is at: : "<<count_of_Player_4;
        }
        else if(count_of_Player_4 == 10)
        {
            count_of_Player_4 = 20;
            cout<<endl;
            cout<<"player 4 got a ladder now player 4 is at: : "<<count_of_Player_4;
        }
        else if(count_of_Player_4 == 20)
        {
            count_of_Player_4 = 80;
            cout<<endl;
            cout<<"snake biter player 4 now player 4 is at: "<<count_of_Player_4;
        }   
    }    
}


void game(int &number_of_players)
{
    if(number_of_players == 2)
    {
        while(count_of_Player_1 <= 100 and count_of_Player_2 <= 100)
        {
            cin.ignore();
            temp_count_of_player_1 = rand()%6+1;

            cout<<"player 1:"<<temp_count_of_player_1<<" ";
            count_of_Player_1 +=temp_count_of_player_1;
            
            cin.ignore();
            
            temp_count_of_player_2 = rand()%6+1;
            cout<<"player 2: "<<temp_count_of_player_2;
            cout<<endl;
            cout<<endl;
            count_of_Player_2 +=temp_count_of_player_2;

            cout<<"score of player 1 :"<<count_of_Player_1<<"  "<<"score of player 2: "<<count_of_Player_2;
            snake();
            ladder();
            cout<<endl;
        }
        if(count_of_Player_1 >= 100)
        {
            cout<<"player 1 is winner";
        }
        else 
        {
            cout<<"player 2 is winner";
        }
    }
    else if(number_of_players == 3)
    {
        while(count_of_Player_1 <= 100 and count_of_Player_2 <= 100 and count_of_Player_3 <=100)
        {
            cin.ignore();
            temp_count_of_player_1 = rand()%6+1;
            cout<<"player 1:"<<temp_count_of_player_1;
            count_of_Player_1 +=temp_count_of_player_1;
            
            cin.ignore();
            
            temp_count_of_player_2 = rand()%6+1;
            cout<<"player 2: "<<temp_count_of_player_2;
            count_of_Player_2 +=temp_count_of_player_2;

            cin.ignore();
            
            temp_count_of_player_3 = rand()%6+1;
            cout<<"player 3: "<<temp_count_of_player_3;
            count_of_Player_3 +=temp_count_of_player_3;
            cout<<endl;
            cout<<endl;
            cout<<"score of player 1 :"<<count_of_Player_1<<"  "<<"score of player 2: "<<count_of_Player_2<<"  "<<"score of player 3: "<<count_of_Player_3;
            snake();
            ladder();
            cout<<endl;
        }
        if(count_of_Player_1 >= 100)
        {
            cout<<"player 1 is winner";
        }
        else if(count_of_Player_2 >= 100) 
        {
            cout<<"player 2 is winner";
        }
        else 
        {
            cout<<"player 3 is winner";
        }
    }
    else if(number_of_players == 4)
    {
        while(count_of_Player_1 <= 100 and count_of_Player_2 <= 100 and count_of_Player_3 <=100 and count_of_Player_4 <=100)
        {
            cin.ignore();
            temp_count_of_player_1 = rand()%6+1;
            cout<<"player 1:"<<temp_count_of_player_1;
            count_of_Player_1 +=temp_count_of_player_1;
            
            cin.ignore();
            
            temp_count_of_player_2 = rand()%6+1;
            cout<<"player 2: "<<temp_count_of_player_2;
            count_of_Player_2 +=temp_count_of_player_2;

            cin.ignore();
            
            temp_count_of_player_3 = rand()%6+1;
            cout<<"player 3: "<<temp_count_of_player_3;
            count_of_Player_3 +=temp_count_of_player_3;
            
            cin.ignore();
            
            temp_count_of_player_4 = rand()%6+1;
            cout<<"player 4: "<<temp_count_of_player_4;
            count_of_Player_4 +=temp_count_of_player_4;
            
            
            cout<<endl;
            cout<<endl;
            cout<<"score of player 1 :"<<count_of_Player_1<<"  "<<"score of player 2: "<<count_of_Player_2<<"  "<<"score of player 3: "<<count_of_Player_3<<"  "<<"score of player 4: "<<count_of_Player_4;
            snake();
            ladder();
            cout<<endl;
        }
        if(count_of_Player_1 >= 100)
        {
            cout<<"player 1 is winner";
        }
        else if(count_of_Player_2 >= 100) 
        {
            cout<<"player 2 is winner";
        }
        else if(count_of_Player_2 >= 100)
        {
            cout<<"player 3 is winner";
        }
        else
        {
            cout<<"player 4 is winner";
        }
    }
    
}

void start(int &number_of_players)
{
    if(number_of_players == 2)
    {
        int flag = 0;
        int flag2 =0;

        if(count_of_Player_1 == 0 and temp_count_of_player_1 == 6)
        {
            start(number_of_players);
            flag = 1;
        }
        else if(flag == 1)
        {
            start(number_of_players);
        }
        else if(count_of_Player_2 == 0 and temp_count_of_player_2 == 6)
        {
            start(number_of_players);
            flag2 = 1;
        }
        else if(flag2 == 1)
        {
            start(number_of_players);
        }
        else
        {
            cout<<"wait untill 6";
        }
        
    }
}


int main()
{

    start(number_of_players);
    input();
    snake();
    players(number_of_players);
    game(number_of_players);
    return 0;
}