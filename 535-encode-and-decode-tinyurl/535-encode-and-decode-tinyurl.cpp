class Solution {
public:
        map<string,string>m;
    int sum=0;
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        string result="http://tinyurl.com"+to_string(sum);
        sum++;
        m[result]=longUrl;
        return result;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return m[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));