# dwmblocks
Modular status bar for dwm written in c.
# modifying blocks
The statusbar is made from text output from commandline programs.
Blocks are added and removed by editing the config.h header file.
Scripts that my build uses are in [my dotfiles repo](https://github.com/kurisu170/dotfiles/tree/master/.local/bin/statusbar)
# signalling changes
For example, the audio module has the update signal 10 by default.
Thus, running `pkill -RTMIN+10 dwmblocks` will update it.
