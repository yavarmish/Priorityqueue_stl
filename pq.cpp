int main() {
    /*
     *If you have an array of size n and you want to build a heap from all items at once, Floyd's algorithm can do it with O(n) complexity.
     *If you have an empty priority queue to which you want to add n items, one at a time, then the complexity is O(n * log(n)).     
     */
    priority_queue<int> pq;
    for(int i=2;i<=10;i+=2)
        pq.push(i);
    // By default a max heap is created
    // pq: [10,8,6,4,2]
    
    // To create a min heap
    priority_queue<int,vector<int>,greater<int>> pq2;
    for(int i=4;i<=8;i++)
        pq2.push(i);
    // pq2: [4,5,6,7,8]
    // Note: We can multiply the values by -1 while insertion and use max heap to get effect of a min heap
    
    priority_queue<pair<int,string>> q;
    vector<string> x={"app","camera","earphones","rome"}; 
    // Sorts x according to length of the strings
    for(auto i:x)
        q.push({i.length()*-1,i});
    // q: {-3,app} {-4,rome} {-5,camera} {-9,earphones}
}
