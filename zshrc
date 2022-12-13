# Created by newuser for 5.9


autoload -Uz compinit
zle -C hist-complete complete-word complete-files 
zstyle ':completion:*' menu select
bindkey '^X\t' hist-complete
compinit

HISTFILE=$ZDOTDIR/history
SAVEHIST=10000
HISTSIZE=11000
setopt sharehistory


source /home/esteban/.config/zsh/mocha.zsh
source /usr/share/zsh/plugins/zsh-syntax-highlighting/zsh-syntax-highlighting.zsh
RPROMPT="%F{cyan} - %h %n %F{magenta}%/ %D %F{cyan} "
PS1="%F{magenta} arch - " 

alias ls='exa --long --header --git --icons --all'
alias v='vim'
alias vim='vim'
alias display='xrandr --output DisplayPort-0 --primary --mode 1920x1080 --pos 1923x0 --rotate normal --output DisplayPort-1 --mode 1920x1080 --pos 3843x0 --rotate normal --output DisplayPort-2 --off --output HDMI-A-0 --mode 1920x1080 --pos 0x0 --rotate normal && xrandr --output HDMI-A-0 --mode 1920x1080 -r 60'
