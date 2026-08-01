class Solution {
    public double separateSquares(int[][] squares) {

      
        double low = Double.MAX_VALUE;
        double high = -Double.MAX_VALUE;

        for (int[] sq : squares) {
            double y = sq[1];
            double side = sq[2];

            low = Math.min(low, y);
            high = Math.max(high, y + side);
        }

        
        while (high - low > 1e-6) {
            double mid = (low + high) / 2.0;

            double down = 0.0;
            double up = 0.0;

           
            for (int[] sq : squares) {
                double y = sq[1];
                double side = sq[2];

                double bottom = y;
                double top = y + side;

               
                if (top <= mid) {
                    down += side * side;
                }
            
                else if (bottom >= mid) {
                    up += side * side;
                }
              
                else {
                    double downHeight = mid - bottom;
                    double upHeight = top - mid;

                    down += downHeight * side;
                    up += upHeight * side;
                }
            }

            if (down < up) {
                low = mid;
            } else {
                high = mid;
            }
        }

        return Math.round(((low + high) / 2.0) * 100000.0) / 100000.0;
    }
}
