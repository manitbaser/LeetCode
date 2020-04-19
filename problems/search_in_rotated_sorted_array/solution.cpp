class Solution {
public:
    int search(vector<int>& n, int t) {
      if(n.empty())
        return -1;
      // Array range indexes. NB! Both inclusive.
      pair<int, int> r(0, n.size() - 1);
      int result = -1;  
      while(true) {
	    // Performance improve on small arrays. 
        if( r.second - r.first < 6 ) {
          auto it = find(n.cbegin() + r.first, n.cbegin() + r.second + 1, t);
          result = (it == n.cbegin() + r.second + 1) ? -1 : distance(n.cbegin(), it);
          break;  
        }
		// Index rande for ordered array.
        pair<int, int> bs;
		// If the array is ordered than do a binary search. The loop should finish.
        if( n[r.first] < n[r.second] ) {
          bs = r;
          r = {0, -1};  
        } else {  // Input array is not ordered. Split into two arrays.  
          int i_mid = ( r.first + r.second ) / 2;
		  // Remember, that one of this is ordered.
		 // bs - ordered array for binary search
		 // r - array for next step of the loop.
          if( n[r.first] < n[i_mid] ) {
            bs = make_pair(r.first, i_mid);
            r = make_pair(i_mid + 1, r.second);  
          } else {
            bs = make_pair(i_mid, r.second);  
            r = make_pair(r.first, i_mid - 1);
          }
        }
		// Binary search on ordered array. target should be in the range overwise skip
        if( n[bs.first] <= t && t <= n[bs.second] ) {
          auto it = lower_bound(n.cbegin() + bs.first, n.cbegin() + bs.second + 1, t);
          result = (it != n.cend() && *it == t) ? distance(n.cbegin(), it) : -1;
          break;  
        }
      }  

      return result;
    }
};