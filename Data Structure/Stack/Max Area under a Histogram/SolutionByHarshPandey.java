import java.util.*;

class SolutionByHarshPandey {
    public static int largestRectangleArea(int[] heights) {
        Stack<Integer> heightStack=new Stack<>();
        int maxArea=0;
        int n=heights.length;
        for(int i=0;i<=n;i++)
        {
            while((!heightStack.isEmpty())&&(i==n||heights[heightStack.peek()]>=heights[i]))
            {
                int height=heights[heightStack.peek()];
                heightStack.pop();

                int width=heightStack.isEmpty()==true?-1:heightStack.peek();
                maxArea=Math.max(maxArea,(i-width-1)*height);
            }
            heightStack.add(i);
        }
        return maxArea;
    }
    public static void main (String[] args) {
        int[] heights={2,1,5,6,2,3};
        System.out.println("Max area in Histogram="+SolutionByHarshPandey.largestRectangleArea(heights));
    }
}