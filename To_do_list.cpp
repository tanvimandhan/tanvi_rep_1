#include<bits/stdc++.h>
using namespace std;
void display(vector<string> vec);
int main()
{
    cout<<"To-Do List\n";
    cout<<"Please start entering some tasks\n";
    cout<<"Enter 'exit' when you are done entering tasks.\n";
    string s="";
    vector<string> v;
    while(s!="exit")
    {
        s="";
        cin>>s;
        v.push_back(s);

    }
    int x=0;
      cout<<"Select your task according to the following menu:\n";
      cout<<"1-----Add task\n";
      cout<<"2-----Delete task *(you can't delete a completed task)\n";
      cout<<"3-----Mark a task completed\n";
      cout<<"4-----View all tasks\n";
      cout<<"5-----Exit\n";
    while(x!=5)
    {
     
      cout<<"Enter your choice.\n";
    
      cin>>x;

      if(x==1)
      {
        cout<<"Enter the task to be added.\n";
        string s;
        cin>>s;
        v.push_back(s);
        cout<<"Your new list is as follows:\n";
        display(v);
      }

      if(x==2)
      {
        cout<<"Enter the task to be deleted.\n";
        string s;
        cin>>s;
        int x;
        for(int i=0; i<v.size(); i++)
        {
            if(v[i]==s)
            x=i;
        }
        v.erase(v.begin()+x);
        cout<<"Your new list is as follows:\n";
        display(v);

      }

      if(x==3)
      {
        cout<<"Enter the task to be marked completed.\n";
        string s;
        cin>>s;
        for(int i=0; i<v.size(); i++)
        {
            if(v[i]==s)
            v[i]= v[i]+ "   Completed";
    
        }
        cout<<"Your new list is as follows:\n";
        display(v);
      }

      if(x==4)
      {
        cout<<"Displaying your To-Do List.\n";
        display(v);
      }

      if(x==5)
      {
        cout<<"See You Later\n";
        return 0;
      }
    }
 }
    

void display(vector<string> vec)
{
    for(int i=0; i<vec.size(); i++)
    {
        if(vec[i]!="exit")
        cout<<vec[i]<<"\n";
        

    }
}