#!/bin/bash
echo 'Hello World'

#変数の宣言と値の設定
str='wassyoi'

#変数の使用
echo "$str World"
#なお、このときダブルクォーテーションではなくシングルクォーテーションだと
#変数展開は許可されず【$str world.】と表示されます。

date +%F

echo "今日の日付は$(date +%F)です"


if [ $USER = 'kmiyazaw' ]
then
echo 'Hi.'
fi



cat hoge.txt | grep ERROR | tail -n 1

end=10
i=0

while [ $i -lt $end ]
do

i=`expr $i + 1`
echo "現在のカウントは$iです"
done