/*
 * WEB+DB PRESS総集編 Vol.1-36
 * データ構造
 *
 * 文字列の長さを使った文字列操作
 */

#include <stdlib.h>
#include <stdio.h>

typedef struct {  // 長さ付き文字列の、STRING型を宣言
  int len;  // 文字列の長さ情報
  char buf[0];  // 文字列本体（長さ0で仮に宣言）
} STRING;

// 文字列を標準出力に出力する関数
void
put_STRING(STRING *s)
{
  int i; // 文字数カウント用変数

  // 文字数をカウントしながらループ
  for(i = 0; i < s->len; i++) {
    putchar(s->buf[i]);  // 1文字ずつ標準出力に出力
  }
  // 最後に改行を出力
  putchar('\n');
}

// 2つの文字列を連結し、連結後の文字列を返す関数
STRING *
cat_STRING(STRING *s1, STRING *s2)
{
  int i, j; // 文字数カウント用変数
  STRING *s; // 連結後の文字列用ポインタ

  // 連結後の文字列の長さ分のメモリを確保
  s = malloc(sizeof (STRING) + s1->len + s2->len);
  s->len = s1->len + s2->len;  // 連結後の文字列の長さ情報を代入

  // s1の文字数をカウントしながらループ
  for (i = 0; i < s1->len; i++) {
    s->buf[i] = s1->buf[i]; // s1から1文字ずつsにコピー
  }
  // s2の文字数をカウントしながらループ
  for (j = 0; j < s2->len; j++) {
    s->buf[i+j] = s2->buf[j]; // s2から1文字ずつsにコピー
  }

  return s;
}

int
main()
{
  STRING *s1, *s2, *s3; // テスト文字列用ポインタ

  s1 = malloc(sizeof (STRING) + 5); // 文字列5文字を含むSTRING型メモリを確保

  s1->len = 5; // 文字列の長さ情報には5を代入
  s1->buf[0] = 'H';
  s1->buf[1] = 'e';
  s1->buf[2] = 'l';
  s1->buf[3] = 'l';
  s1->buf[4] = 'o';

  put_STRING(s1);

  s2 = malloc(sizeof (STRING) + 7); // 文字列7文字を含むSTRING型メモリを確保

  s2->len = 7; // 文字列の長さ情報には7を代入
  s2->buf[0] = 'W';
  s2->buf[1] = 'o';
  s2->buf[2] = 'r';
  s2->buf[3] = 'l';
  s2->buf[4] = 'd';
  s2->buf[5] = '!';
  s2->buf[6] = '!';
  
  put_STRING(s2);

  s3 = cat_STRING(s1, s2); // s1とs2を連結し、s3に代入
  printf("length = %d\n", s3->len);
  put_STRING(s3);

  return 0;
}
