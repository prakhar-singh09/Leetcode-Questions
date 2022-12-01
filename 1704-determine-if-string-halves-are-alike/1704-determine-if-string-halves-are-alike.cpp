class Solution {
public:
    bool halvesAreAlike(string s) {
       int l=0;
        int r=s.length()-1;
        int left_ptr=0;
        int right_ptr=0;
        while(l<r){ 
  if(s[l]=='a' || s[l]=='e' || s[l]=='i' || s[l]=='o' || s[l]=='u' || s[l]=='A' || s[l]=='E' || s[l]=='I' || s[l]=='O' || s[l]=='U')
      left_ptr++;
         if(s[r]=='a' || s[r]=='e' || s[r]=='i' || s[r]=='o' || s[r]=='u' || s[r]=='A' || s[r]=='E' || s[r]=='I' || s[r]=='O' || s[r]=='U')
             right_ptr++;
            l++;
            r--;
        }
        return left_ptr== right_ptr;
    }
};