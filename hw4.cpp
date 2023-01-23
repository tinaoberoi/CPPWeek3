#include <iostream>
#include <map>

using namespace std;

class TreeNode {
    public:
        string ques;
        TreeNode* yes;
        TreeNode* no;
    TreeNode(string s){
        ques = s;
        yes = NULL;
        no = NULL;
    };
    
};

int main(){
    TreeNode* head = new TreeNode("Does it fly?");
    TreeNode* yes_ans = new TreeNode("Is it a hawk?");
    head->yes = yes_ans;
    TreeNode* no_ans = new TreeNode("Is it an ox?");
    head->no = no_ans;
    
    bool flag = true;
    while(flag){
        cout<<"Think of an animal"<<endl;
        TreeNode* temp = head;
        string ans;
        TreeNode* last_ques;
        while(temp){
            cout<<temp->ques<<endl;
            cin>>ans;
            if (ans == "y" || ans == "yes"){
                temp = temp->yes;
                last_ques = temp;
            } else {
                temp = temp->no;
            }
        }
        if (ans == "yes"){
            cout<<"You loose"<<endl;
        } else {
            string animal, question;
            cout<<"You win! What was it?"<<endl;
            cin>>animal;
            cout<<"What question distinguishes a "<<animal<<" from hwak?\n";
            getline(cin, question);
            while(temp2 != last_ques){
                
            }
            cout<<"Thanks lets play again"<<endl;
        }

    }
    return 0;
}