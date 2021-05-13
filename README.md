# 覆盖率工具安装
## WINDOWS+MINGW
```bash
#请确保在管理员权限下执行
cd lcov
mingw32-make install
```
## LINUX
```bash
#请确保在管理员权限下执行
cd lcov
make install
```

# 编译
## WINDOWS+MINGW
```bash
cmake -S . -B cmake-build-temp -G "MinGW Makefiles"
cd cmake-build-temp
mingw32-make -j 8
```
## LINUX
```bash
cmake -S . -B cmake-build-temp -G "Unix Makefiles"
cd cmake-build-temp
make -j 8
```

# 运行
```bash
cd demo
./demo
```

# 获取覆盖率
```bash
lcov --rc lcov_branch_coverage=1 -c -d ./ -o cover.info 
genhtml --branch-coverage -o cover_report --legend --title "lcov"  --prefix=./ cover.info

cd cover_report
#该目录下有index.html，使用浏览器打开
```

# 备注
- 本项目为标准CMAKE工程，完全适配CLION IDE
