#
# ~/.bashrc
#

# If not running interactively, don't do anything
[[ $- != *i* ]] && return

alias ls='ls -F --color=auto --group-directories-first'
alias ll='ls -lF --color=auto --group-directories-first'
alias la='ls -AF --color=auto --group-directories-first'

alias vimrc='vim ~/.vimrc'
alias bashrc='vim ~/.bashrc'

PS1='[\u@\h \W]\$ '

PATH=~/.local/bin:$PATH
