class Solution:
    def ispossible(self,a,m,n,mid):
        als,pages = 1,0
        for i in range(n):
            if(mid<a[i]):
                return False
            if(pages + a[i]>mid):
                als += 1
                pages=a[i]
                
                if als>m:
                    return False
            else:
                pages += a[i]
                
        return True


    def findPages(self,a, n, m):
        if n==m:
            return max(a)
        if n<m:
            return -1
        if m==1:
            return sum(a)
            
        low,high,res = min(a),sum(a),-1
        while(low<=high):
            mid = (low + high)//2
            if (self.ispossible(a,m,n,mid)):
                res = mid
                high = mid-1
            else:
                low = mid + 1
        return res
        
        

#{ 
#  Driver Code Starts
#Initial Template for Python 3

#contributed by RavinderSinghPB
if __name__=='__main__':
    t=int(input())
    for _ in range(t):
        
        n=int(input())
        
        arr=[int(x) for x in input().strip().split()]
        m=int(input())
        
        ob=Solution()
        
        print(ob.findPages(arr,n,m))
# } Driver Code Ends