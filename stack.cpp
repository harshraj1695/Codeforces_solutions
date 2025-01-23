#include <bits/stdc++.h>

using namespace std;

int maxEqualHeight(vector<int> &stack1, vector<int> &stack2, vector<int> &stack3)
{
    // Calculate the total height of each stack
    int height1 = 0, height2 = 0, height3 = 0;

    for (int i = 0; i < stack1.size(); i++)
        height1 += stack1[i];
    for (int i = 0; i < stack2.size(); i++)
        height2 += stack2[i];
    for (int i = 0; i < stack3.size(); i++)
        height3 += stack3[i];

    int i = 0, j = 0, k = 0;

    // Loop until all heights are equal
    while (i < stack1.size() && j < stack2.size() && k < stack3.size())
    {
        // If all heights are equal, return the height
        if (height1 == height2 && height2 == height3)
        {
            return height1;
        }

        // Remove the top cylinder from the tallest stack
        if (height1 >= height2 && height1 >= height3)
        {
            height1 -= stack1[i++];
        }
        else if (height2 >= height1 && height2 >= height3)
        {
            height2 -= stack2[j++];
        }
        else if (height3 >= height1 && height3 >= height2)
        {
            height3 -= stack3[k++];
        }
    }

    return 0;
}

int main()
{
    cout << "Enter the size of 3 stacks ";
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> stack1(n), stack2(m), stack3(k);
    cout << "enter stack 1 ";
    for (int i = 0; i < n; i++)
    {
        cin >> stack1[i];
    }
    cout << "enter stack 2 ";
    for (int i = 0; i < m; i++)
    {
        cin >> stack2[i];
    }
    cout << "enter stack 3 ";
    for (int i = 0; i < k; i++)
    {
        cin >> stack3[i];
    }
    cout << "Maximum height: " << maxEqualHeight(stack1, stack2, stack3) << endl;

    return 0;
}
