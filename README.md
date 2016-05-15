﻿# 旅行模拟查询系统 Travel Query System
数据结构课程设计的选题，基于QT开发

##Change Log

v0.1.0

时间：2016/3/12

实现功能：策略选择 始发地选择 目的地选择 初始时间输入 截止时间输入

途中更换目的地 重新开始输入 当前时间输出 预计经费输出

预计总时间输出 已用时间输出


v0.1.1

时间：2016/3/12

汉字显示方式优化


v0.2.0

时间：2016/3/13

实现最短路径逻辑

增加数据文件的读入


v0.2.1

时间：2016/3/13

解决了算法bug

database.txt改为全英文输入数据


v0.3.0

时间：2016/3/14

完善路径输出显示部件


v0.3.2

时间：2016/3/14

优化获取始发地目的地源代码

更改获得起始时间函数返回类型


v0.4.0

时间：2016/3/14

进一步完善策略一算法

增加策略二算法


v0.4.1

时间：2016/3/15

微调UI


v0.4.2

时间：2016/3/15

界面显示方案所需总时间和经费

未解决跨天时总时间的显示


v0.4.3

时间：2016/3/15

界面优化

解决时间输出出现负数的问题


v0.4.4

时间：2016/3/15

界面加入添加乘客

选择乘客

选择途经城市


v0.4.5

时间：2016/3/15

解决策略二的bug


v0.4.6

时间：2016/3/15

增加traveller类，为多名旅客控制打下基础


v0.4.7

时间：2016/3/16

实现添加乘客

按需建立乘客下拉列表

实现途经城市勾选和取消


v0.5.0

时间：2016/3/16

重新组织结构

支持多旅客


v0.5.1

时间：2016/3/17

旅客切换始发地目的地策略出行计划切换

未解决当前时间截止时间的切换


v0.5.2

时间：2016/3/17

旅客切换计划总时间和费用切换

未解决当前时间截止时间已用时间的切换


v0.5.3

时间：2016/3/17

解决途径城市选择框的切换


v0.5.4

时间：2016/3/17

当前时间栏不显示时间推进


v0.5.5

时间：2016/3/17

切换旅客对应已运行时间切换


v0.6.0

时间：2016/3/19

加入了地图部件


v0.6.0.1

时间：2016/3/29

mapwidget调用path失败


v0.6.1

时间：2016/3/30

调整好绘图框架


v0.6.2

时间：2016/3/30

完成城市坐标函数

完成时间差计算函数


v0.6.3

时间：2016/3/30

初步完成Mapwidget

传参存在问题


v0.6.4

时间：2016/3/31

新增traveler成员函数，解决传参问题


v0.6.5

时间：2016/3/31

解决了行程总时间的计算错误bug


v0.6.6

时间：2016/3/31

解决图标乱跳的bug

解决了已用时间显示超脱的bug


v0.7.0

时间：2016/3/31

基本完成动画部分，可以正确运行


v0.7.1

时间：2016/4/1

动画效果优化

旅途完成后开始按钮失效


v0.7.2

时间：2016/4/1

解决了策略一行程总时间的计算错误bug


v0.7.3

时间：2016/4/2

清理冗余变量（暂时注释掉，后续版本将完全删除）

细微调整代码结构

更新概要设计文档

改变map.png分辨率

微调ui

增加地图.ai

增加log模块（为调试方便，暂未接入main）

v0.8.0

时间：2016/5/9

核心算法从schedule类迁移至traveler类

增加丰富时刻表

更新状态图标

解决各自崩溃bug

v0.8.1

时间：2016/5/13

删除多余代码

增加了策略三的支持，但仍存在bug

v0.8.2

时间：2016/5/13

完善所有代码

解决了多处代码warning

v0.8.3

时间：2016/5/13

出发目的地初始不同，起始截止时间不同

v0.8.4

时间：2016/5/14

解决时间高位不补0显示问题

优化路径显示格式

将城市海南更改为海口

v0.8.5

时间：2016/5/14

时刻表完成

v0.8.6

时间：2016/5/15

优化策略一、二算法，增大剪枝力度