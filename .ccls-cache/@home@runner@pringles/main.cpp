#include <iostream>
class Vertex{
public:
  int value;
  Vertex* next;
  Vertex(){next = nullptr;} 

};
class Stack{
public:
  Stack();
  void Push(int value);
  void Pop();
  void Peek();
private:
  Vertex* head,*tail;  
};
Stack::Stack(){
  head = nullptr;
  tail = nullptr;
}
//Push
void Stack::Push(int value){
  Vertex* vtx = new Vertex();
  vtx->value = value;
  if(head != nullptr)
    vtx->next=head;
  else  
    tail = vtx;
  head = vtx;
}
//Peek
void Stack:: Peek(){
  if(head != nullptr)  

    std::cout << head->value << std::endl;

}
// Pop
void Stack::Pop(){
  if(head != nullptr){
    Vertex* vtx = head;
    head = head->next;
    delete vtx;
  }
}

int main() {
  Stack pila;
  pila.Push(5);
  pila.Push(19);
  pila.Push(6);
  pila.Push(3);
  pila.Pop();
  pila.Pop();
  pila.Peek();
}