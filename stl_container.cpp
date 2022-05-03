#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector
    vector<int> vec = {1, 2, 3, 4, 5};
    vec.pop_back();
    vec.push_back(6);
    vec.size(); // givr the size of vector
    reverse(vec.begin(), vec.end());
    cout << "Elements in vector :";
    for (auto &v : vec)
    {
        cout << v << ' ';
    }
    cout << endl;
    // deque
    deque<double> deq;
    deq.push_back(12.01);
    deq.push_back(13.02);
    deq.push_back(14.03);
    deq.push_back(15.04);
    deq.push_front(20.05);
    cout << "Elements in deque :";
    for (auto it = deq.begin(); it != deq.end(); ++it)
    {
        cout << *it << ' ';
    }
    cout << "\nSize of deque : " << deq.size();
    cout << "\nmax Sizeof deque : " << deq.max_size();
    cout << endl;
    // list
    list<string> list1;
    list1.push_back("Pizza");
    list1.push_back("juice");
    list1.push_back("dhosha");
    list1.push_back("sandwich");
    list1.push_back("burger");
    cout << "My fav Foods are :";
    for (auto it = list1.begin(); it != list1.end(); it++)
    {
        cout << *it << ' ';
    }
    cout << endl;
    list1.pop_back(); // removing last element
    list1.reverse();  // reverse the entire list
    list1.sort();     // sort the list item
    cout << "After number of operations : ";
    for (auto it = list1.begin(); it != list1.end(); it++)
    {
        cout << *it << ' ';
    }
    cout << endl;
    // set
    set<int> s1; // It contain elemtn are unique and in sorted manner
    s1 = {4, 2, 6, 3, 5};
    cout << "Elements are in sets :";
    for (auto it = s1.begin(); it != s1.end(); it++)
    {
        cout << *it << ' ';
    }
    cout << endl;
    s1.erase(4);                                          // revmove all 4 from s1.
    s1.insert(1);                                         // adding elemtent in set s1
    cout << "Size of set :" << s1.size() << endl;         // Display size of set s1
    cout << "Max size of set :" << s1.max_size() << endl; // Returns the maximum number of elements that the set can hold.
    for (auto it = s1.begin(); it != s1.end(); it++)
    {
        cout << *it << ' ';
    }
    cout << endl;
    // multiset
    multiset<char> ms1;
    ms1.insert('N');
    ms1.insert('I');
    ms1.insert('K');
    ms1.insert('E');
    cout << "Size of multiset" << ms1.size() << endl;
    cout << "Max  size of mltiset :" << ms1.max_size() << endl;
    ms1.erase('K'); // remove all 'K from multiset'
    cout << "Elements in set :";
    for (auto it = ms1.begin(); it != ms1.end(); it++)
    {
        cout << *it << ' ';
    }
    cout << endl;
    // stack
    stack<int> stack;
    stack.push(21); // push to stack.
    stack.push(22);
    stack.push(24);
    stack.push(25);

    stack.pop(); // pop last element from stack.
    stack.pop();
    cout << "Size of stack : " << stack.size() << endl;
    cout << "Elements in stack";
    while (!stack.empty())
    {
        cout << ' ' << stack.top();
        stack.pop();
    }
    cout << endl;
    // Queue
    queue<int> que;
    que.push(10);
    que.push(20);
    que.push(30);
    que.push(40);
    que.push(50);
    cout << "Size of queue : " << que.size();
    cout << "\nFront Element in queue : " << que.front();
    cout << "\nBack Element in queue : " << que.back();
    cout << "\nThe queue Elements is : ";
    while (!que.empty())
    {
        cout << ' ' << que.front();
        que.pop();
    }
    cout << endl;
    // Map
    map<string, int> m1; // No two mapped values can have the same key values.
    m1["English"] = 80;  // inserting Kay value pair in map m1.
    m1["History"] = 70;
    m1["Biology"] = 40;
    m1["Chemistry"] = 50;
    m1["Compter science"] = 90;
    m1.insert(pair<string, int>("Geography", 75)); // inserting key value pair in map using pair<data_type,data_type>.
    cout << "Size of the map :" << m1.size() << endl;
    ;
    cout << "Max_Size of the map :" << m1.max_size() << endl;
    m1.erase(m1.begin()); // Earsing a key value pair from map by using itreator position.
    for (auto it = m1.begin(); it != m1.end(); it++)
    {
        cout << it->first << ':' << it->second << ' ';
    }
    cout << endl;
    // Multimap
    multimap<int, char> multimap;
    multimap.insert(pair<int, char>(5, 'E')); // inserting key value pair in multimap using pair<data_type,data_type>.
    multimap.insert(pair<int, char>(1, 'A'));
    multimap.insert(pair<int, char>(4, 'D'));
    multimap.insert(pair<int, char>(3, 'C'));
    multimap.insert(pair<int, char>(2, 'B'));
    cout << "Size of multimap :" << multimap.size() << endl;
    cout << "Max size of multimap is :" << multimap.max_size() << endl;
    cout << "Key value pair in multimap: ";
    for (auto it = multimap.begin(); it != multimap.end(); it++)
    {
        cout << it->first << ':' << it->second << ' ';
    }
    cout << endl;
}