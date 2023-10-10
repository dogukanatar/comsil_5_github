#include "LinkedList.h"


//1. 템플릿 클래스로 확장해야함
//2. Stack형식으로 Delete 함수 재정의해야함
//주의: first, current_size는 class의 멤버 변수이기 때문에 this 포인터를 사용하여 가져와야함

//1. Must be extended to template class
//2. Delete function needs to be overridden in Stack format
//Note: first, current_size is a member variable of class and must be imported using this pointer


//LinkedList class를 상속받음
//Inherited LinkedList class
template<class T>
class Stack : public LinkedList<T>{
	public:
		bool Delete (T &element){
			//first가 0이면 false반환 | If the first is 0 return false
			if(this->first == 0)
				return false;

			// LinkedList와 달리 Stack은 current가 가리키는 곳을 삭제
			element = this->first->data;
			Node<T> *tmp = this -> first;
			this->first = this->first->link;

			delete tmp;

			// Unlike LinkedList, Stack deletes where current points to

			this-> current_size--;
			return true;
			}
};
