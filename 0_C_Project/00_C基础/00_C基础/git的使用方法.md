## Git学习（1）：入门命令

### 2024.1.9更新

**Git仓库的创建和文件提交：**

    git clone <url> [directory] //克隆仓库``
    git init//创建初始化仓库``


######git add 命令可将文件添加到缓存
``git add.//将当前文件目录下所有文件移入暂存区`` 

######git commit 将缓存区内容添加到仓库中，格式如下：
``git commit -m "第一次版本提交" ``
######在后面加-m选项，以在命令行中提供提交注释

**Git 远程仓库**
``git remote add [alias] [url]
``
######参数[alias]为别名， [url]为远程仓库的地址

