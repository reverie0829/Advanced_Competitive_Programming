struct node {  //定義一個struct : node
   int x;
   int y;
   int len;   //node中有3個成員變量 x,y,len
   bool operator <(const node &a)const {//多载<操作符。可以對兩個node使用 < 操作符進行比较
       return len<a.len;
   }
};//括號中的const表示参数a對象不會被修改，最後的const表明調用函数對象不會被修改!