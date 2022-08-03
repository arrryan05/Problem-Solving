class MyCalendar {
    vector<pair<int, int>> books;
public:    
    bool book(int start, int end) {
        for (int i=0;i<books.size();i++){
            if (max(books[i].first, start) < min(end, books[i].second)) return false;
        }
        books.push_back({start, end});
        return true;
    }
};
/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */