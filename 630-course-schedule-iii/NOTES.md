# Approach
1. Sort the vector of vector on the basis of deadline, using compare function.
2. Using a priority queue pq
3. Maintain a days_used which stores total days used till now
4. iterate through the courses, and if (duration of a course+days used till now)<deadline of that course then push that duration to pq and add that duration to days_used.
5. else if(lastly added duration of pq is greater than next duration) then we need to remove that duration from pq and add this one.
6. return p.size()