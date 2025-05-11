

class MyStack {
  private:
    StackNode *top;

  public:
    void push(int x) {
        StackNode* temp=new StackNode(x);
        if(top==NULL){
            top=temp;
        }
        temp->next=top;
        top=temp;
    }

    int pop() {
        
        if(top==NULL){
            return -1;
        }
        int val=top->data;
        top=top->next;
        return val;
    }

    MyStack() { top = NULL; }
};
