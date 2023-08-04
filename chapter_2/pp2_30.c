int tadd_ok(int x, int y){
    int sum = x + y;
/*
 * if (x > 0 && y > 0){
 *      return sum > x && sum > y;
 *  } else {
 *      return sum <= y || sum <= x;
 *  }
*/
    int pos_ovrflw = x > 0 && y > 0 && sum < 0;
    int neg_ovrflw = x < 0 && y < 0 && sum > 0;
    return !(neg_ovrflw || pos_ovrflw);
}
