# XFOIL 命令总表（基于仓库内 XFOIL 6.99 源码）

> 版本来源：`Xfoil699src/src/xfoil.f`（`VERSION = 6.99`）  
> 说明：以下按菜单分组；含常用命令、快捷别名、以及源码中存在但 `?` 帮助未显式列出的命令。

## 0. 全局约定

- `?`：显示当前菜单帮助
- `<cr>`（直接回车）：返回上一级或退出当前子菜单
- `Z` / `U`：放大 / 取消放大（几乎所有菜单可用）
- `!`：重做上一条命令（在显示 `!` 的菜单中可用）

## 1. 顶层菜单 `XFOIL>`

- `QUIT`：退出程序
- `OPER`：进入工况计算菜单
- `MDES`：进入全逆设计菜单
- `QDES`：进入混合逆设计菜单
- `GDES`：进入几何设计菜单
- `SAVE`：保存翼型（带标题）
- `PSAV`：保存翼型（纯坐标）
- `ISAV`：保存为 ISES 格式
- `MSAV`：保存为 MSES 格式（多段文件替换）
- `REVE`：切换保存点序（顺/逆时针）
- `LOAD`：读取翼型到 buffer
- `NACA`：生成 NACA 4/5 位翼型
- `INTE`：插值两翼型到 buffer
- `NORM`：读取后是否归一化开关
- `XYCM`：设置力矩参考点 `(x,y)`
- `BEND`：显示当前翼型结构属性
- `PCOP`：buffer 点直接复制为 current 面板点
- `PANE`：按曲率重新布置 current 面板
- `PPAR`：进入面板参数菜单
- `PLOP`：进入绘图参数菜单
- `WDEF`：写当前设置到 `xfoil.def`
- `RDEF`：读取设置文件
- `NAME`：设置翼型名
- `NINC`：名称版本号递增

### 顶层源码隐藏/未在帮助中强调

- `RSAV`：导出 Rhino 宏曲线文件
- `USAV`：按整数坐标格式保存
- `INTX`：从文件/current/已存 polar 翼型做扩展插值

## 2. `OPER` 菜单

- `VISC` / `V`：粘性开关
- `VPAR`：进入边界层参数子菜单
- `RE` / `R`：设雷诺数
- `MACH` / `M`：设马赫数
- `TYPE` / `T`：设 Re/Mach 随 CL 变化类型
- `ITER`：设粘性迭代上限
- `INIT`：BL 初始化标志开关
- `ALFA` / `A`：按攻角计算
- `CLI`：按无粘 CL 计算
- `CL` / `C`：按 CL 计算
- `ASEQ` / `AS`：攻角序列计算
- `CSEQ` / `CS`：CL 序列计算
- `SEQP`：序列作图开关
- `CINC`：极曲线中包含最小 Cp 开关
- `HINC`：极曲线中包含铰链力矩开关
- `PACC` / `P`：自动累积工况点到 polar
- `PGET`：读取 polar 文件
- `PWRT`：写 polar 文件
- `PSUM`：polar 摘要
- `PLIS`：列出 polar
- `PDEL`：删除 polar
- `PSOR`：排序 polar
- `PPLO` / `PP`：绘制 polar
- `APLO` / `AP`：绘制各 polar 对应翼型
- `ASET`：把存储翼型设为 current
- `PREM`：删除 polar 中指定点
- `PNAM`：修改 polar 名称
- `PPAX`：设 polar 坐标轴
- `RGET`：读参考 polar
- `RDEL`：删参考 polar
- `GRID`：Cp-x 网格开关
- `CREF`：参考 Cp 叠加开关
- `FREF`：参考气动数据叠加开关
- `CPX` / `CP`：绘制 Cp-x
- `CPV`：绘制压力矢量
- `VPLO`：进入 BL 变量绘图子菜单
- `ANNO`：注释当前图
- `HARD`：硬拷贝输出当前图
- `SIZE`：改图元尺寸
- `CPMI`：改 Cp 轴最小标注
- `BL`：在指定点绘制 BL 速度剖面
- `BLC`：光标选点绘制 BL 速度剖面
- `BLWT`：BL 速度剖面缩放权重
- `FMOM`：计算襟翼铰链力矩与力
- `FNEW`：设置新襟翼铰点
- `VELS`：计算某点速度分量
- `DUMP`：导出 `Ue,D*,Theta,Cf` 等
- `CPWR`：导出 `x-Cp`
- `CPMN`：报告最小 Cp
- `NAME`：设置翼型名
- `NINC`：名称版本号递增

### `OPER` 源码存在的附加命令

- `WAK`：设置尾迹长度 `WakLen`
- `NDEC`：名称版本号递减
- `DAMP`：切换放大因子计算模式（modified/original）

## 3. `VPAR` 子菜单（`OPER` 内）

- `SHOW`：显示当前粘性参数
- `XTR`：设上下表面转捩位置
- `N`：设 `Ncrit`
- `VACC`：设牛顿加速参数
- `INIT`：BL 初始化开关
- `LAG`：设 lag 方程常数
- `GB`：设 G-beta 常数
- `CTR`：设初始转捩 Ctau 常数
- `REST`：恢复默认 BL 校准

## 4. `VPLO` 子菜单（`OPER` 内 BL 变量图）

- `H` / `HK`：绘制形状参数
- `DT` / `DS`：上表面 `D*`、`Theta`
- `DB` / `DP`：下表面 `D*`、`Theta`
- `UE`：边界层外缘速度
- `CF`：摩擦系数
- `CD`：耗散系数
- `N`：放大因子
- `CT`：最大切应力系数
- `RT`：`Re_theta`
- `RTL`：`log(Re_theta)`
- `DUMP`：导出当前变量
- `OVER`：叠加读取变量
- `X` / `XLIM`：设 x 轴范围
- `Y` / `YLIM`：设 y 轴范围
- `BLOW` / `B`：光标局部放大
- `RESE` / `R`：重置坐标范围
- `GRID`：网格开关
- `SYMB`：节点符号开关
- `LABE`：标签开关
- `CLIP`：线条裁剪开关
- `FRPL`：TS 频率绘图开关
- `HARD`：硬拷贝
- `SIZE`：图元尺寸
- `ANNO`：注释图

## 5. `GDES` 菜单

- `GSET`：`buffer <- current`
- `EXEC` / `X`：`current <- buffer`
- `SYMM`：y 对称约束开关
- `ADEG`：按度旋转
- `ARAD`：按弧度旋转
- `TRAN` / `T`：平移
- `SCAL` / `S`：缩放
- `LINS`：线性变 y 缩放
- `DERO`：去旋转（弦线调平）
- `RERO`：恢复旋转
- `TGAP`：改后缘间隙
- `LERA`：改前缘半径
- `TCPL`：厚度/弯度绘图开关
- `TFAC`：按比例改厚度/弯度
- `TSET`：设新厚度/弯度
- `HIGH`：移动厚度/弯度峰值位置
- `CAMB`：进入弯度编辑子菜单
- `FLAP` / `F`：襟翼偏转
- `MODI` / `M`：光标改型线
- `SLOP`：改型线斜率匹配开关
- `CORN`：加角点
- `ADDP`：加点
- `MOVP`：移点
- `DELP`：删点
- `UNIT`：归一化到单位弦长
- `DIST` / `D`：两点距离
- `CLIS`：列曲率
- `CPLO`：画曲率
- `CANG`：列面板转角
- `CADD`：在大转角处自动加点
- `PLOT` / `P`：重绘
- `INPL`：按英寸比例重绘
- `BLOW` / `B`：局部放大
- `RESE` / `R`：重置视图
- `WIND` / `W`：窗口调整
- `TSIZ`：刻度尺寸
- `TICK`：节点刻度开关
- `GRID`：网格开关
- `GPAR`：几何参数标注开关
- `OVER` / `O`：叠加文件翼型
- `SIZE`：图元尺寸
- `ANNO`：注释
- `HARD`：硬拷贝
- `NAME`：设名称
- `NINC`：版本号递增

### `GDES` 源码存在附加命令

- `NDEC`：版本号递减
- `SINT`：样条插值显示（调试/高级用途）

## 6. `CAMB` 子菜单（`GDES` 内）

- `TFAC`：缩放已有厚度/弯度
- `TSET`：设新厚度/弯度
- `HIGH`：移动峰值位置
- `WRTC`：写出弯度/厚度文件
- `RDAC`：读取附加弯度
- `SETC`：由当前弯度线设附加弯度
- `INPC`：键盘输入附加弯度
- `MODC`：光标修改附加弯度
- `RDAP`：读取附加载荷 `x/c,DCp`
- `INPP`：键盘输入附加载荷
- `MODP`：光标修改附加载荷
- `SLOP`：斜率匹配开关
- `SCAL`：缩放附加弯度
- `CLR`：清除附加弯度
- `ADD`：把附加弯度叠加到当前弯度
- `DCPL`：`DCp` 绘图开关
- `CPLI`：`DCp` 轴范围
- `BLOW` / `B`：局部放大
- `RESE` / `R`：重置
- `SIZE`：图元尺寸
- `ANNO`：注释
- `HARD`：硬拷贝

## 7. `QDES` 菜单

- `QSET`：`Qspec <- Q`
- `MODI` / `M`：改 `Qspec`
- `MARK`：标记目标区间
- `SMOO`：目标区间平滑
- `SLOP`：斜率匹配开关
- `EXEC` / `X`：执行混合逆设计
- `REST`：从 buffer 恢复几何
- `CPXX`：端点约束开关
- `VISC`：`Qvis` 叠加开关
- `REFL`：反射 `Qspec` 叠加开关
- `PLOT` / `P`：绘制 `Qspec` / `Q`
- `BLOW` / `B`：局部放大
- `RESE` / `R`：重置
- `WIND` / `W`：窗口调整
- `SIZE`：图元尺寸
- `ANNO`：注释
- `HARD`：硬拷贝

## 8. `MDES` 菜单

- `INIT`：重新初始化映射
- `QSET`：`Qspec <- Q`
- `AQ`：按攻角组设 `Qspec`
- `CQ`：按 CL 组设 `Qspec`
- `SYMM` / `S`：对称开关
- `TGAP`：设后缘间隙
- `TANG`：设后缘角
- `MODI` / `M`：改 `Qspec`
- `MARK`：标记平滑区间
- `SMOO`：区间平滑
- `FILT`：全局 Hanning 滤波
- `SLOP`：斜率匹配开关
- `EXEC` / `X`：执行全逆设计
- `VISC`：`Qvis` 叠加开关
- `REFL`：反射 `Qspec` 开关
- `SPEC`：映射系数谱图
- `PLOT` / `P`：重绘
- `BLOW` / `B`：局部放大
- `RESE` / `R`：重置
- `WIND` / `W`：窗口调整
- `SIZE`：图元尺寸
- `ANNO`：注释
- `HARD`：硬拷贝
- `PERT`：扰动单个系数并生成几何

### `MDES` 源码中可用但帮助默认未展开

- `READ`：读取 `Qspec` 文件
- `WRIT`：写出 `Qspec` 文件
- `DUMP`：导出相关数据

## 9. `PPAR` 菜单（面板参数）

- `N`：面板点数
- `P`：面板聚集参数
- `T`：后缘/前缘面板密度比
- `R`：精细区域密度比
- `XT`：上表面精细区域 x/c 范围
- `XB`：下表面精细区域 x/c 范围
- `Z`：放大
- `U`：取消放大

## 10. `PLOP` 菜单（绘图参数，`OPLSET`）

- `G`：图形输出开关
- `S`：图对象尺寸
- `A`：图对象宽高比
- `P`：页面尺寸
- `M`：页面边距
- `F`：字体相对大小
- `W`：窗口/屏幕尺寸比例
- `B`：Blowup 输入方式（光标/键盘）
- `O`：方向（横向/纵向）
- `C`：PostScript 彩色输出开关

## 11. `.ANNO` 注释菜单（`ANNOT`）

- `C`：普通字符
- `S`：斜体字符
- `M`：数学字符
- `P`：点符号
- `L`：线
- `A`：箭头
- `W`：字符宽度因子
- `T`：点符号类型

---

## 附：本清单对应源码位置

- 顶层：`Xfoil699src/src/xfoil.f`
- OPER/VPAR：`Xfoil699src/src/xoper.f`
- GDES：`Xfoil699src/src/xgdes.f`
- CAMB：`Xfoil699src/src/xtcam.f`
- QDES：`Xfoil699src/src/xqdes.f`
- MDES：`Xfoil699src/src/xmdes.f`
- VPLO：`Xfoil699src/src/blplot.f`
- PLOP/ANNO：`Xfoil699src/src/plutil.f`
