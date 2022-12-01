#!/bin/bash
echo -n "请输入提交信息:>"
read msg
git add *
git commit -m ${msg}
git push
echo "已成功提交"
git status
