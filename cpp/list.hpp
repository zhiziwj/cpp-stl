#ifndef LIST_H
#define LIST_H
class mlist{
    public:
    struct list_node{
        long long int value;
        list_node *left;
        list_node *right;
    };
    list_node *head;
    void list_init(){
        head=nullptr;
        return;
    }
    void _push_back(list_node* node_){
        if(head==nullptr){
            head=node_;
            return;
        }
        list_node *i=head;
        //遍历
        while(i->right!=nullptr){
            i=i->right;
        }
        i->right=node_;
        return;
    }
    void del_node(int data){
        list_node *i=head;
        while(i->right!=nullptr){
             if(i->value==data){
                *i->left->right=*i->right;
             }
             i=i->right;
        }
        return;
    }
    void clear_list(){
        list_node *i=head;
        while(i!=nullptr){
            list_node *tmp=i;
            i=i->right;
            delete tmp;
        }
        head=nullptr;
    }
    long long int size(){
        long long int cnt=0;
        list_node *i=head;
        while(i!=nullptr){
            cnt++;
            i=i->right;
        }
        return cnt;
    }
};
#endif // LIST_H
