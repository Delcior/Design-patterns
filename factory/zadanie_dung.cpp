#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <map>
#include <queue>
#include <unordered_set>

using namespace std;

int main()
{   
    unordered_set<string> ress;
    string ss;
    cin>>ss;//skip 1st line
    cin>>ss;
    map<char,int> input;
    //0 - in, 1 - out, -1 -uninitialized
    while(ss!="Attacks:"){
        for(int i=0;i<ss.size();i+=2){
            input[ss[i]]=-1;
        }
        cin>>ss;
    }
    unordered_map<char,vector<char>> attacks;//char atttacks vector of chars
    unordered_map<char,vector<char>> defense;//char defends against vector of chars
    while(cin>>ss){
        for(int i=0;i<ss.size();i+=6){
            attacks[ss[i+1]].push_back(ss[i+3]);
            defense[ss[i+3]].push_back(ss[i+1]);
        }
    }
    char startingChar='\n';
    //looking for initial IN nodes
    for(pair<char, int> tmp: input){
        input[tmp.first]=0;
        startingChar=tmp.first;
        
        for(pair<char,int> tmp2: input){
            if(defense[tmp2.first].size()==0)
                input[tmp2.first]=0;
        }
        string result="";
        queue<char> que;
        que.push(startingChar);
        bool flagaPoprawnosci=true;
        while(!que.empty()){
            char actualNode=que.front();
            que.pop();
            
            if(input[actualNode] == 0){//if node is IN
                for(char attacker : defense[actualNode]){//kazdy node atakujacy musi byc OUT
                    if(input[attacker] == 0){// uuu mamy blad, przerywanko!
                        flagaPoprawnosci=false;
                        break;
                    }
                    if(input[attacker] == -1){
                        input[attacker]=1;
                        que.push(attacker);
                    }
                }
                for(char broniacySie : attacks[actualNode]){
                    if(input[broniacySie] == -1){
                        input[broniacySie]=1;
                        que.push(broniacySie);
                    }
                }
            }
            if(!flagaPoprawnosci)
                break;
            
            if(input[actualNode] == 1){//node OUT
                for(char broniacySie : attacks[actualNode]){
                    if(input[broniacySie] == -1){
                        bool poprawnosc=true;
                        for(char atakujacy : defense[broniacySie]){
                            if(input[atakujacy]==0){
                                poprawnosc=false;
                                break;
                            }
                            if(input[atakujacy]==-1){
                                input[atakujacy]=1;
                                que.push(atakujacy);
                            }
                        }
                        if(poprawnosc){
                            input[broniacySie]=0;
                            
                        }else{
                            input[broniacySie]=1;
                        }
                        que.push(broniacySie);
                    }
                }
                bool foundIN=false;
                for(char atakujacy : defense[actualNode]){//dla kazdego atakujacego
                    if(input[atakujacy]==0)
                        foundIN=true;
                    if(input[atakujacy]==-1 && !foundIN){
                        input[atakujacy]=0;
                        foundIN=true;
                        que.push(atakujacy);
                    }
                }
                if(!foundIN){
                    flagaPoprawnosci=false;
                    break;
                }
            }
            if(!flagaPoprawnosci)
                break;
        }
        if(flagaPoprawnosci){
            for(pair<char,int> res : input){
                if(res.second==-1){
                    result="";
                    break;
                }
                if(res.second==0)
                    result+=res.first;
            }
            if(result.size()>0)
                ress.insert(result);
        }
        //reset
        for(pair<char, int> tmp2: input)
            input[tmp2.first]=-1;
    }
    //printing IN nodes
    int przypadek=1;
    for(string resultS : ress){
        cout<<"przypadek "<<przypadek++<<": "<<resultS<<'\n';
    }
    return 0;
}
