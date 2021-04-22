#include <bits/stdc++.h>
using namespace std;
#define pb(x) push_back(x)

struct player
{
    string name;
    int attack;
    int defense;
};

bool compare(player a, player b)
{
    if(a.attack > b.attack) return true;
    else if(a.attack == b.attack && a.defense < b.defense) return true;
    else if(a.attack == b.attack && a.defense == b.defense && a.name < b.name) return true;
    else return false;
}
bool compare_lexicographically(player a, player b)
{
    return a.name < b.name;
}

int main()
{
    //freopen("output.txt","w",stdout);
    int test, cou = 1;
    int a, d;
    string temp;
    scanf("%d", &test);
    while( test-- )
    {
        player arr[10];
        for(int x=0; x<10; x++)
        {
            cin>>temp>>a>>d;
            arr[x].name = temp;
            arr[x].attack = a;
            arr[x].defense = d;
        }

        sort(arr, arr+10, compare);

        player attack_players[5];
        player defense_players[5];

        for(int x=0; x<10; x++)
        {
            if(x<5)attack_players[x] = arr[x];
            else defense_players[x-5] = arr[x];
        }
////////        for(int x=0; x<10; x++)
////////        {
////////            if(x<5)cout<<attack_players[x].name<<" "<<attack_players[x].attack<<" "<<attack_players[x].defense<<'\n';
////////            else cout<<defense_players[x-5].name<<" "<<defense_players[x-5].attack<<" "<<defense_players[x-5].defense<<'\n';
////////        }

//        int max_attack = 0, max_defense = 0;
//        for(int x=0; x<5; x++) max_attack += attack_players[x].attack;
//        for(int x=0; x<5; x++) max_defense += defense_players[x].defense;


//        for(int x=0; x<5; x++)
//        {
//            for(int y=0; y<5; y++)
//            {
//                int temp_attack = max_attack - attack_players[x].attack + defense_players[y].attack;
//                int temp_defense = max_defense - defense_players[y].defense + attack_players[x].defense;
//
//                if(temp_attack>=max_attack && temp_defense>max_defense)
//                {
//                    swap( attack_players[x], defense_players[y] );
//                }
//            }
//        }


        sort(attack_players, attack_players+5, compare_lexicographically);
        sort(defense_players, defense_players+5, compare_lexicographically);

        cout<<"Case "<<cou++<<":"<<'\n'<<"(";
        for(int x=0; x<5; x++)
        {
            cout<<attack_players[x].name;
            if(x<4)cout<<", ";
        }
        cout<<")"<<'\n'<<"(";
        for(int x=0; x<5; x++)
        {
            cout<<defense_players[x].name;
            if(x<4)cout<<", ";
        }
        cout<<")"<<'\n';



    }

    return 0;
}
