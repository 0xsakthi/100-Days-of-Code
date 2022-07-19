// mid/col and mid%col gives the value of index like array 
// the first index value is 0 it will(mid/col and mid%col) return matrix[0][0] if mid==1
// mid==2 va iruntha that formula will return matrix[0][1]
class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        if(matrix.length==1 && matrix[0][0]==target) return true;
        int low = 0;
        int high = (matrix.length * matrix[0].length)-1;
        int col = matrix[0].length;
        while(low<=high){
            int mid = (low+high)/2;
            if(matrix[mid/col][mid%col]==target){
                // System.out.print("founded");
                return true;
            }else if(matrix[mid/col][mid%col]>target){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return false;
    }
}
