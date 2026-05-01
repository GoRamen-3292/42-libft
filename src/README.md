*This project has been created as part of the 42 curriculum by ktomita.*

このプロジェクトは、42カリキュラムの一環として、ktomitaによって作成されました。

## Description

このプロジェクトでは、Cの標準ライブラリに含まれているものを含む、今後一般的によく使われるであろう関数を再実装する。

C言語は適切なライブラリがないと、扱うのが極めて難しくなってしまう。ここでは、そういったライブラリに用いられる関数を、自身で再実装してライブラリを制作することを通して理解し、また効果的に使用することができるようにする。

含む関数の一覧は、以下のとおりである。

```c
// 引数が半角数字あるいは半角アルファベットであるか判断する関数
int					ft_isalnum(int c);
// 引数が半角数字であるか判断する関数
int					ft_isalpha(int c);
// 引数が ASCII の定義を満たしているか判断する関数
int					ft_isascii(int c);
// 引数が半角の数字であるか判断する関数
int					ft_isdigit(int c);
// 引数が表示文字であるか判断する関数
int					ft_isprint(char c);
// s ポインタから n バイト分、メモリを c の値で上書きする関数
void				*ft_memset(void *s, int c, size_t n);
// 引数の文字列の長さを取得する関数
size_t				ft_strlen(const char *str);
// ポインタ s から n バイト分、メモリを0で上書きする関数
void				ft_bzero(void *s, size_t n);
// メモリの値をポインタ src から n バイト分、ポインタ dest にコピーする関数、ただし2つの範囲は重複してはいけない
void				*ft_memcpy(void *dest, const void *src, size_t n);
// メモリの値をポインタ src から n バイト分、ポインタ dest にコピーする関数
void				*ft_memmove(void *dest, const void *src, size_t n);
// src から文字列を dst にコピーする関数、ただしバッファオーバーフローを防止するための機能がついている
size_t				ft_strlcpy(char *dst, const char *src, size_t size);
// str の文字列を dst の末尾に結合する関数、ただしバッファオーバーフローを防止するための機能がついている
size_t				ft_strlcat(char *dst, const char *src, size_t size);
// str の文字列の中から c の文字の最初の出現箇所へのポインタを返す関数
char				*ft_strchr(const char *str, int c);
// str の文字列の中から c の文字の最後の出現箇所へのポインタを返す関数
char				*ft_strrchr(const char *str, int c);
// s1 と s2 を最大で n 文字比較する関数
int					ft_strncmp(const char *s1, const char *s2, size_t n);
// ポインタ s から n バイト分、メモリの一番最初の c の位置へのポインタを返す 
char				*ft_memchr(const void *s, int c, size_t n);
// ポインタ s1 と s2 からそれぞれ最大 n バイト分の値を比較し異なる場合には、最後に比較したものの差分を返す関数
int					ft_memcmp(const void *s1, const void *s2, size_t n);
// 文字列 big の中に文字列 small が含まれているか検索する関数、見つかった場合最初の出現箇所へのポインタを返す 
char				*ft_strnstr(const char *big, const char *little,
						size_t len);
// 文字列のスペースを除く冒頭の数字の文字列を int 型として返す関数
int					ft_atoi(const char *src);
// 原則として nmemb バイト * size バイト分のメモリを確保し、中身を0で埋めて返す関数
void				*ft_calloc(size_t nmemb, size_t size);
// 文字列をmallocによりメモリを確保した上で複製する関数
char				*ft_strdup(const char *s);
// 英数の大文字のASCIIを小文字に変換するコード
int					ft_tolower(int c);
// 英語の小文字のASCIIを大文字に変換するコード
int					ft_toupper(int c);

// 文字列 s の中のインデックス start から最大 len 文字の文字列をコピーする関数
char				*ft_substr(char const *s, unsigned int start, size_t len);
// 文字列 s1 と s2 をメモリを確保した上で結合する関数
char				*ft_strjoin(char const *s1, char const *s2);
// 文字列 s1 の中から set の中に含まれる文字を削除する関数
char				*ft_strtrim(char const *s1, char const *set);
// 文字列 s の中から c を区切り文字として区切った結果を出力する関数
char				**ft_split(char const *s, char c);
// 引数の int 型の数字を文字列としてメモリを確保した上で出力する関数
char				*ft_itoa(int n);
// 文字列の各要素について、関数を適用した文字列をメモリを確保した上で返す関数
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
// 文字列の各要素について、関数を適用して値を変える関数
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
// fd で指定したファイルデスクリプタに c を書き込む関数
void				ft_putchar_fd(char c, int fd);
// fd で指定したファイルデスクリプタに文字列 s を書き込む関数
void				ft_putstr_fd(char *s, int fd);
// fd で指定したファイルデスクリプタに文字列 s と改行を書き込む関数
void				ft_putendl_fd(char *s, int fd);
// fd で指定したファイルデスクリプタに int 型の数字 n を書き込む関数
void				ft_putnbr_fd(int n, int fd);

// - Part 3.
// s
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

// new の内容を連結リスト lst の末尾に追記する関数
void				ft_lstadd_back(t_list **lst, t_list *new);
// new の内容を連結リスト lst の先頭に追記する関数
void				ft_lstadd_front(t_list **lst, t_list *new);
// lst をその内容とともに削除する関数
void				ft_lstclear(t_list **lst, void (*del)(void *));
// lst の内容を1つ削除する関数
void				ft_lstdelone(t_list *lst, void (*del)(void *));
// lst の内容それぞれに関数 f を適用して、値を更新する関数
void				ft_lstiter(t_list *lst, void (*f)(void *));
// lst の最後の内容を取得する関数
t_list				*ft_lstlast(t_list *lst);
// lst の内容それぞれに f を適用して、それをもとに新しい連結リストを作成する関数
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));
// lst の内容それぞれに content を適用して、それをもとに新しい連結リストを作成する関数
t_list				*ft_lstnew(void *content);
// lst の長さを取得する関数
int					ft_lstsize(t_list *lst);
```


## Instructions

### 前提条件

- `make` コマンドが使用可能なこと
- `cc` コマンドが使用可能なこと
- `ar` コマンドが使用可能なこと

### 動作確認をした環境

```
cc -v
Ubuntu clang version 12.0.1-19ubuntu3
Target: x86_64-pc-linux-gnu
Thread model: posix
InstalledDir: /usr/bin
Found candidate GCC installation: /usr/bin/../lib/gcc/x86_64-linux-gnu/10
Found candidate GCC installation: /usr/bin/../lib/gcc/x86_64-linux-gnu/11
Found candidate GCC installation: /usr/bin/../lib/gcc/x86_64-linux-gnu/12
Found candidate GCC installation: /usr/lib/gcc/x86_64-linux-gnu/10
Found candidate GCC installation: /usr/lib/gcc/x86_64-linux-gnu/11
Found candidate GCC installation: /usr/lib/gcc/x86_64-linux-gnu/12
Selected GCC installation: /usr/bin/../lib/gcc/x86_64-linux-gnu/12
Candidate multilib: .;@m64
Selected multilib: .;@m64
```

### 使用方法

1. Gitリポジトリをクローン
2. `make` コマンドを実行することで、`libft.a` ファイルが作成される
3. 例えば、`cc -L. -lft test.c` など、`-L` オプションに `libft.a` ファイルの置かれているディレクトリパスを、`-lft`フラグをつけて使用することを明示した上で実行できる

その際、`libft.h`ヘッダーファイルも適宜コピーする必要がある。

## Resources

### Visual Studio Code

- Visual Studio Code経由で閲覧したシンタックスハイライト

### `man` pages

- 校舎内PCの `man` コマンドで利用可能な各種ドキュメント

### AI

- size_t型について
- memset関数の役割の確認
- コミットメッセージを一部英語で書いたため、それに関する添削

回答となるコードをそのまま書かせたりなどは決してしていません。その他、AI Instructionsや42のAIポリシーを熟読して取り組みました。

### Websites

- https://code.aetheria.jp/161
- https://leo.nit.ac.jp/~tamura/ex2/expression.html#bit
- https://www.man7.org/linux/man-pages/man3/isascii.3p.html
