#!/bin/bash

# 変数

s="hello"

echo $s
echo "$s"
echo "${s}"
echo $s$s
echo "$s $s"
echo '$s 変数の中身が展開されない'
echo "$s 変数の中身が展開される"
