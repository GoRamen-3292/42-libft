# Notes

## 全体

### charの引数にはintをつかう

- マルチバイト文字への対応のため

## ft_isascii

- https://www.man7.org/linux/man-pages/man3/isascii.3p.html
- アスキーであるかどうか判断する仮数

## ft_memset

- メモリを特定の値で埋める関数
- 型のキャストなどをしないとそもそも書き込めなくなったり、オーバーフローした際の動作に支障がある?

## メモリ系

- これってNULLポインタとか渡されたときの処理必要?
- overflow, underflow?
- &=でbit演算をしている
  - 255 -> 11111111 (2)
  - これを「かつ」で分岐をすれば確かに256で割った値が出る
  
- https://leo.nit.ac.jp/~tamura/ex2/expression.html#bit