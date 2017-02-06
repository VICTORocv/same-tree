//
//  main.cpp
//  same-tree
//
//  Created by 郭悟清 on 2017/2/6.
//  Copyright © 2017年 郭悟清. All rights reserved.
//

#include <iostream>
struct TreeNode
{
   int      val;
   TreeNode *left;
   TreeNode *right;
   TreeNode(int x): val(x),left(NULL),right(NULL){}
};
class Solution
{
public:
    bool isSameTree(TreeNode *p,TreeNode *q)
    {
        if(p&&q)
        {
            if(p->val==q->val)
            {
                return isSameTree(p->left, q->left)&&isSameTree(p->right, q->right);
            }
            else
            {
                return false;
            }
        }
        else if (!p&&!q)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    return 0;
}
