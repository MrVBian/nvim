![演示](./images/1.png) 

![演示](./images/2.png) 

![演示](./images/3.png) 

![演示](./images/4.png) 

![演示](./images/5.png) 

![演示](./images/6.png) 


### COC (一款代码自动补全插件)

按键|效果
:-: | :-:
Space y | 获取(yank)(vim的剪切板)历史列表
gd | 跳转至定义
gr | 列出引用
gi | 列出实现
gy | 跳转至类型定义

### NERDTree

按键|效果
:-: | :-:
ff | 开关NerdTree
, (in NERDTREE)	| 开关菜单
L | 
l | 
H |
h |
sr |
hi |
o |
O |

### Tagbar

按键|效果
:-: | :-:
键入T(Shift+t) | 打开Taglist(函数/类/变量列表)。
键入q | 退出Tagbar

### -----------FZF (模糊查找文件器)

按键|效果|指令
:-: | :-: | :-: 
Ctrl p	| 打开FZF	| :FZF<Enter>
Ctrl u	| 上一项	
Ctrl e	| 下一项	


### Undotree

按键|效果
:-: | :-:
Shift + U | 打开Undotree
Shift + K | 历史修改的下一项
Shift + J | 历史修改的上一项

### vim-startify (初始启动界面)

按键|效果
:-: | :-:
Space-s-t | 打开startify

### -----------thesaurus_query.vim

按键|效果
:-: | :-:
Space-t-h | 查找近义词

### vim-signiture (书签)

按键|效果
:-: | :-:
m<任意字母> | 为当前行添加标记
m/ | 列出所有标记
m<SPACE> | 跳转至当前文件中的下一个标记
https://github.com/MattesGroeger/vim-bookmarks#usage

### vim-table-mode

按键|效果
:-: | :-:
Space tm | 开关表格编辑模式

### vim-multiple-cursors

按键|效果
:-: | :-:
C-d	| 选择下一个单词 (多光标)
C-u	| 选择上一个单词
C-x	| 跳过这个单词
Esc	| 退出多光标

### -----------vim-surround


### Markdown

按键|效果
:-: | :-:
,n | ---
,b | 文本 加粗
,s | 文本中划线
,i | 文本 斜体
,d | 代码块
,c | 大 代码块
,m | - [ ] 复选框
,p | 图片
,a | 超链接
,1 | # 标题1
,2 | ## 标题2
,3 | ### 标题3
,4 | #### 标题4
,l | --------
,f | 跳转到至下一个 `` (占位符)
,w | 跳转至下一个 <++> (占位符) 然后你键入Enter


按键|效果
:-:|:-:
,n|分割线
,b|粗体
,s|删除线
,i|斜体
,d|单行代码
,c|代码块
,p|图片
,h|标题
,a|超链接
,l|------
ci"|""内文字删除并进入插入模式
ciw|在单词内,删除该单词并进入插入模式
di"|""内文字删除不进入插入模式
df任意符号|删除到任意符号
/搜索小写|大小写均可匹配
/搜索含有大写|严格匹配
v|可视
V|可视行
C v|可视块
可视模式:normal I待插入文字|在所有可视块前加待插入文字
可视模式:normal A待插入文字|在所有可视块后加待插入文字
可视模式shift i 编辑 Esc| 所有可视块都被编辑
sl|右分屏
sh|左分屏
sk|上分屏
sj|下分屏
:e ~/|打开文件
Space h|切换到左分屏
Space l|切换到右分屏
Space j|切换到下分屏
Space k|切换到上分屏
上|增大上面的分屏5
下|增大下面的分屏5
左|增大左面的分屏5
右|增大右面的分屏5
ta|创建一个新的tabe
tj|切换到下一个tabe
tk|切换到上一个tabe
sv|转为垂直分屏
sh|转为水平分屏
ff|文件树
:help 插件|查看插件文档
Space tm|横向补全格式
Space gy|窗口模式转换为简洁模式
m 字母|加书签
m Space|跳转书签
m /|列出书签
mn|下一个书签
mp|上一个书签
dm/|删除所有书签
shift l|显示文件的历史版本
Space fd| 高亮附近重复的单词
Space sc|进入set spell!模式
[s|上一个拼写错误
s]|下一个拼写错误
z=|单词列表
Ctrl o|回到上次光标位置,可跨文件
Ctrl i|回到上次之前的位置
gf|切换进入该文件
:w !sudo tee %|运行sudo保存该文件
Space Space|寻找<++>并进入编辑模式
tx | 打印ASC字符
:%TOhtml|打印成html
; | :
< | <<
< | >>
= | nzz
- | Nzz
H | 0
L | $
W | 5w
B | 5b
C-K | 5k不移动光标
C-J | 5j不移动光标
srh | 上下屏并且交换
srv | 左右屏并且交换
tmj | 移除下一个tabe
tmk | 移除上一个tabe





map <silent> <LEADER>o za
o | za

map <LEADER>/ :set splitbelow<CR>:sp<CR>:term<CR>

" Spelling Check with <space>sc
map <LEADER>sc :set spell!<CR>
noremap <C-x> ja<C-x>s
inoremap <C-x> <Esc>ja<C-x>s

map <LEADER>sc :set spell!<CR>
noremap <C-x> ea<C-x>s
inoremap <C-x> <Esc>ea<C-x>s
<Paste>
