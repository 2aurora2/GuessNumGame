# GuessNumGame
关于猜数字的小游戏——基于命令行界面的C++程序设计

## 游戏规则
1. 系统会随机产生一组按一定顺序排列且**不重复**的数字0-9，玩家需要猜出正确的数字及其所在的位置

2. 系统会根据玩家每次猜测显示玩家的猜测正确与否的提示，包括：
      * 猜对数字且位置正确的个数
      * 猜对数字但位置不正确的个数
      
3. 游戏可自定义难度，即自定义要猜测的数字的个数(最高自定为9，游戏闯关可以达到10)，若无自定义，默认

      从2个数字猜起

4. 游戏的闯关模式分为简单难度以及困难难度：
   * 简单模式：猜测的次数没有限制，只要猜测正确即可进入下一关
   * 困难模式：系统会记录玩家猜测的次数，猜测次数在一定范围内才能进入下一关
   
5. 当玩家通关难度为10的关卡后，本游戏就结束了，再次开始游戏会跳转到难度为2的关卡

5. 游戏规则就是这么简单，管你听没听懂，玩就完了(狗头.jpg)

## 项目日志
### 2022/12/7

-----

* 完成菜单menu的显示
* 完成难度设置菜单项内容的编写
* 完成游戏规则菜单项内容的编写

### 2022/12/8

---

* 完成游戏简单模式过程的编写
* 完成游戏困难模式过程的编写
* 完善难度设置时玩家不可设置游戏难度为最终难度10
* 完善玩家在通关难度为10的关卡后level会跳转到2
* 基本完成该游戏

### 2022/12/9

---

* 增加对玩家猜测的输入进行合理性检验的代码，输入必须是单个数字并且以空格隔开

### 待改进与不足

---

* 困难模式和简单模式的难度等级变量level是共用的

* 困难模式猜测次数上限的设置缺乏合理性（不是数学大佬T_T）
