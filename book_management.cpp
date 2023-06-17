#include<bits/stdc++.h>

using namespace std;
class node
{

	public:
		int id,price;
		string name;
		node *ptr=NULL;
		
		node()
		{
			id=0;
			price=0;
			name="xyz";
			ptr=NULL;
		}	
};

class graph
{
	private:
		node *head;
		
	public:
		graph()
		{
			head=NULL;
		}
		void insert(int i,int p,string n)
		{
			node *temp=new node();
			node *t;
			temp->id=i;
			temp->name=n;
			temp->price=p;
			if(head==NULL)
			{
				head=temp;
			}
			else
			{
				t=head;
				while(t->ptr!=NULL)
				{
					t=t->ptr;
				}
				t->ptr=temp;
			}
		}
		void print()
		{
			node *temp=head;
			while(temp)
			{
				cout<<temp->id<<" "<<temp->price<<" "<<temp->name<<endl;
				temp=temp->ptr;
				
			}
			
		}
		
		node* search(int id)
		{
			node *temp=head;
			if(head==NULL)
			  return NULL;
			while(temp)
			{
				if(temp->id==id)
				  return temp;
				  temp=temp->ptr;
			}
		}
		
		void Delete(int id)
		{
			node *temp=head;
			if(head==NULL)
			 cout<<"book not exist...."<<endl;
			else if(id==1)
			{
			
			 head=temp->ptr;
			 return;
	        }
		      	while(temp)
		        	{
			           if(temp->ptr->id==id)
				         {
				         	temp->ptr=temp->ptr->ptr;
				         	break;
				         }	
				       temp=temp->ptr;
		          	}
	}
		
};

int main()
{
    int num,id,price;
    string name;
    graph g;
    while(1){
    	
    cout<<"1. insert "<<endl;
    cout<<"2. delete "<<endl;
    cout<<"3. print "<<endl;
    cout<<"4. search "<<endl;
    cout<<"5. exit "<<endl;
    
    cout<<"enter number to selrct"<<endl;
    cin>>num;
    switch(num)
    {
       	case 1:
    		cout<<"enter id, price and name"<<endl;
    		cin>>id>>price>>name;
    		g.insert(id,price,name);
    		cout<<endl<<endl<<endl;
    		break;
    		
    	case 2:
    		cout<<"enter the id yoou want to delete"<<endl;
    		cin>>id;
    		g.Delete(id);
    		cout<<endl<<endl<<endl;
        	break;
        	
		case 3:
			g.print();
			cout<<endl<<endl<<endl;
    		break;
    		
		case 4:
			cout<<"enter the id yoou want to search"<<endl;
			cin>>id;
			g.search(id);
			cout<<endl<<endl<<endl;
    		break;
    	case 5:
				
		default:
		    cout<<"INVALID VALUE"<<endl;
		    cout<<endl<<endl<<endl;
		    break;		
	}
}
	return 0;
}
