#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int dat;
    Node *l, *r;

    Node(int d)
    {
        dat = d;
        l = r = NULL;
    }
};

void lsum(int &sum, bool dir, Node *rt)
{
    if (rt == NULL)
    {
        return;
    }

    if (dir == true && !rt->l && !rt->r)
    {
        sum += rt->dat;
    }
    lsum(sum, true, rt->l);
    lsum(sum, false, rt->r);
}

int llsum(Node *rt)
{
    int sum = 0;
    bool dir = true;
    lsum(sum, dir, rt);
    return sum;
}

main()
{
    int times;
    cin >> times;
    while (times--)
    {
        map<int, Node *> nodeMap;
        int treeEgdes, node1, node2;
        char lr;
        cin >> treeEgdes;
        Node *ch;
        Node *rt = NULL;

        while (treeEgdes--)
        {
            Node *par;
            cin >> node1 >> node2 >> lr;
            if (nodeMap.find(node1) == nodeMap.end())
            {
                par = new Node(node1);
                nodeMap[node1] = par;
                if (rt == NULL)
                {
                    rt = par;
                }
            }
            else
            {
                par = nodeMap[node1];
            }
            ch = new Node(node2);
            if (lr == 'L')
            {
                par->l = ch;
            }
            else
            {
                par->r = ch;
            }
            nodeMap[node2] = ch;
        }
        cout << llsum(rt);
        cout << endl;
    }
}