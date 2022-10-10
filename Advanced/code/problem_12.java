// Trapping Rain Water
// Prashant9420
class Solution {
    public int trap(int[] height) {
        int area=0,fakeArea=0;
        int d=height[0],dind=0;
        for(int i=0;i<height.length;i++)
        {
            if(height[i]>=d)
            {
                d=height[i];
                dind=i;
                fakeArea=area;
            }
            else{
                if(i==height.length-1){
                    
                    d=height[i];
                    while(i!=dind){
                        if(height[i]>=d){
                            d=height[i];
                        }
                        else{
                            fakeArea+=d-height[i];
                        }
                        i--;
                    }
                    break;
                }
                area+=d-height[i];
            }
        }


        return fakeArea;
    }
}
