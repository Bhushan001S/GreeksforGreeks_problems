#User function Template for python3

class Solution:
    def solve(self, ind, s, n, word_dict):
        if ind == n:  
            return True
        
        for i in range(ind, n):
            sub_str = s[ind:i + 1]  
            if sub_str in word_dict:  
                if self.solve(i + 1, s, n, word_dict):
                    return True
        
        return False  
        
    def wordBreak(self, n, s, dictionary):
        word_dict = set(dictionary)  # Use a set for O(1) lookups
        if self.solve(0, s, len(s), word_dict):
            return 1
        else:
            return 0



#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    test_case = int(input())

    for _ in range(test_case):
        n = int(input())
        dictionary = [word for word in input().strip().split()]
        s = input().strip()
        ob = Solution()
        res = ob.wordBreak(n, s, dictionary)
        if res:
            print(1)
        else:
            print(0)

# } Driver Code Ends