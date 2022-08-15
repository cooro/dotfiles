#
# ~/.zshrc
#

# PATH and Environment Variables are set in ~/.zshenv

source /usr/share/zsh-syntax-highlighting/zsh-syntax-highlighting.zsh
source /usr/share/zsh-autosuggestions/zsh-autosuggestions.zsh

# History Settings
HISTFILE=~/.zhistory
HISTSIZE=9999
SAVEHIST=10000

# Options
setopt autocd nomatch appendhistory incappendhistory sharehistory histignoredups histreduceblanks nohistbeep completealiases nobeep noextendedglob nonotify nomultios correct

# Enable vi mode bindings (-e for emacs mode instead)
bindkey -v '^?' backward-delete-char

# Completion Settings
zstyle :compinstall filename '/home/cooro/.zshrc'
autoload -Uz compinit
compinit
_comp_options+=(globdots)
zstyle ':completion:*' menu select rehash true
bindkey '\e[A' history-search-backward
bindkey '\e[B' history-search-forward

# Prompts
autoload -U colors && colors
PS1="%{%B${fg[yellow]}%}%1~ %{${fg[red]}%}%(?..[%?])%{${fg[default]}%}%B>%b "
PS2='%_> '

# Aliases
alias ls='ls -F --color=auto --group-directories-first'
alias ll='ls -lFh --color=auto --group-directories-first'
alias la='ls -aF --color=auto --group-directories-first'
alias vim='nvim'
alias vim.normal='/usr/bin/vim'
alias vimrc="$EDITOR ~/.config/nvim/init.vim"
alias zshrc="$EDITOR ~/.zshrc"
alias config='/usr/bin/git --git-dir=$HOME/Git/dotfiles --work-tree=$HOME'
alias emacs='emacsclient -c -a emacs'
alias emacs.normal='/usr/bin/emacs'
