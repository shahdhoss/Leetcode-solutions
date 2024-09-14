class Solution:
    def maxArea(self, height: List[int]) -> int:
        maxx=0
        s=0
        t=len(height)-1
        while(s<t):
            maxx=max(min(height[s],height[t])*abs(s-t),maxx)
            print(maxx)
            if height[t]<height[s]: 
                t-=1
            else:
                s+=1
        return maxx