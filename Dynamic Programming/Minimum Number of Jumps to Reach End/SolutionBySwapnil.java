class Solution {
    public int minJump(int[] nums) {
        int reachable = 0, countJump=0, maxJump = 0;
        for(int i=0; i<nums.length-1; i++){
            if(reachable < i) //if unreachable return zero
            	return 0;
            reachable = Math.max(reachable, i + nums[i]); // update with max far possible with current move
            if(i == maxJump){
                maxJump = reachable;
                countJump++;
            }
        }
        return countJump;
    }
    public static void main (String[] args) {
      Scanner sc = new Scanner(System.in);
      int size = sc.nextInt(); //array size
      int[] array = new int[size];
      for(int i = 0; i < size; i++) {
        array[i] = sc.nextInt();
      }
    	System.out.println(minJump(array));
    }
}
