void bottomview(Node* root){
//     queue<pair <Node*,int> >q;
//     map<int,int>mp;
//     q.push({root,0});
//     while(q.size()>0){
//         auto value = q.front();
//         q.pop();
//         mp[value.second] = value.first->val;

//         if(value.first->left!=NULL)q.push({value.first->left,value.second-1});
//         if(value.first->right!=NULL)q.push({value.first->right,value.second-1});
//     }
//     vector<int>ans;
//     for(auto x:mp){
//         ans.push_back(x.second);
//     }
//     for(auto x : ans){
//         cout<<x<<" ";
//     }
// }