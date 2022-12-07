See [https://github.com/sartak/keyboard](https://github.com/sartak/keyboard)

You can use this configuration with:

```
qmk cd
cd keyboards/ferris/keymaps/
git submodule add https://github.com/sartak/qmk-config.git sartak

qmk flash -kb ferris/sweep -km sartak
# with whatever modifiers you need
```
