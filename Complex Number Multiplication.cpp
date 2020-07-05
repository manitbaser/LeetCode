class Solution {
public:
    string complexNumberMultiply(string a, string b) {
//         s is for sign(+ve or -ve)
        int re1 = 0, re2 = 0, im1 = 0, im2 = 0, i = 0, s = 1;
//         for re1
        if(a[0]=='-'){ s = -1; i++;}
        while(i<a.length()&&a[i]!='+') re1 = re1*10+(a[i++]-'0');
        i++; re1*=s;
//         for im1
        s = 1;
        if(a[i]=='-'){ s = -1; i++;}
        while(i<a.length()&&a[i]!='i') im1 = im1*10+(a[i++]-'0');
        im1*=s;
//         for re2
        s = 1;
        i = 0;
        if(b[0]=='-'){ s = -1; i++;}
        while(i<b.length()&&b[i]!='+') re2 = re2*10+(b[i++]-'0');
        i++; re2*=s;
//         for im2
        s = 1;
        if(b[i]=='-'){ s = -1; i++;}
        while(i<b.length()&&b[i]!='i') im2 = im2*10+(b[i++]-'0');
        im2*=s;
//         for answer
        int re = re1*re2- im1*im2;
        int im = re1*im2 + re2*im1;
        string ans = to_string(re) + "+" + to_string(im)+"i";
        return ans;
    }
};
