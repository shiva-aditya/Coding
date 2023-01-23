#include<bits/stdc++.h>
using namespace std;


int main() {
    priority_queue<int>pq;
    //declartion of priority_queue
    //by default priority queue is keeping max element at top as called as max heap
    priority_queue <int, vector<int>, greater<int>> gq;
    //declartion of min heap i.e. min at top
    //three argumnets datatype , vector , greater<int> to get min heap
    pq.empty();
    //return true if empty else false
    pq.size();
    //gives size of priority_queue (no of elements)
    pq.top();
    //gives top element 
    //does not give anything when empty
    pq.push(5);
    pq.push(4);
    //push element into priority queue 
    pq.pop();
    //delete top element
    pq.swap(gq);
    //swap contents from pq to qp
    pq.emplace(5);
    //push element int priority queue
}
