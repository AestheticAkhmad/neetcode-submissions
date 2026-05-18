/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int left{1}, right = n;
        if (guess(n) == 0) return n;

        while (true) {
            // uint64_t mid = (right + left) / 2;
            int mid = ((right - left) / 2) + left;
            switch (guess(mid)) {
                case -1: {
                    right = mid - 1;
                    break;
                }
                case 1: {
                    left = mid + 1;
                    break;
                }
                case 0: {
                    return mid;
                }
            }
        }

        return 0;
    }
};

















