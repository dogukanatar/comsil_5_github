#include <stdio.h>
#include "Stack.h"

void prnMenu(){
	cout<<"*******************************************"<<endl;
	cout<<"* 1. INSERT    2. DELETE    3. PRINT  4. EXIT *"<<endl;
	cout<<"*******************************************"<<endl;
	cout<<endl;
	cout<<"PICK ONE OPTION: ";
}

int main(){
	    int mode, selectNumber, tmpItem;
		LinkedList<int> *p;
		bool flag = false;

		cout<<"Pick a Data Structure(1: Stack, Other: Linked List): ";
		cin>>mode;
						    
		if(mode == 1)
			p = new Stack<int>();    // 정수를 저장하는 스택 Stack to store the number
			
		else
			p = new LinkedList<int>();


		do{
			prnMenu();
			cin>>selectNumber;
			
			switch(selectNumber){ 
				case 1:
					cout<<"Enter an input: ";
					cin>>tmpItem;    p->Insert(tmpItem);
					cout<<tmpItem<<"  is instered."<<endl;
					break;
					
				case 2:
					if(p->Delete(tmpItem)==true)
						cout<<tmpItem<<"is deleted."<<endl;
						
					else cout<<"It's already empty. It can't be deleted"<<endl;
					break;
					
				case 3:
					cout<<"Size: "<<p->GetSize()<<endl;
					p->Print();
					break;
					
				case 4:
					flag = true;     break;
					
				default:
					cout<<"Error! Typing mistake."<<endl;
					break;
			
			}
			
			if(flag) break;
			
		} while(1);
		
		return 0;
}

