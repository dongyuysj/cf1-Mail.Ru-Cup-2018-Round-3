# cf1-Mail.Ru-Cup-2018-Round-3
Mail.Ru Cup 2018 Round 3题解
### A - Determine Line
代码提供的算法思想：枚举第一站所有可能的数字，遍历后面每一站所有的数字，如果有一站没有这个数字，那这个数字必然不是，如果所有 站都出现了这个数字那这个数字必然是答案中的一个。
引申得到标准答案：求每个数据出现的次数，只要每个数据出现的次数为n则说明每一站都出现了该数据
### B - Divide Candies
如何快速将n分解为a2+b2的形式
(i^2+j^2)mod m = 0
(i^2+j^2)mod m = ((i mod m)^2+(j mod m)^2) mod m
因此找到（i mod m, j mod m) = (x, y)即可
在根据（x, y)反推（i, j）的个数

![](https://github.com/dongyuysj/cf1-Mail.Ru-Cup-2018-Round-3/blob/master/1.png)
