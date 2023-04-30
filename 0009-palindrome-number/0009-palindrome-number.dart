class Solution {
  bool isPalindrome(int x) {
      String _temp = x.toString();
      String _temp2 = "";

      for(int i = _temp.length-1 ; i >= 0 ; i--)
      {
          _temp2 += _temp[i];
      }

      if(_temp2 == _temp)
      {
          return true;
      }
      else
      {
          return false;
      }
  }
}