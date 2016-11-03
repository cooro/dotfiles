#
# /etc/bash.bashrc
#

# If not running interactively, don't do anything
[[ $- != *i* ]] && return

# PSs
PS1=' \[$(tput setaf 2)\]\W\[$(tput sgr0)\] \[$(tput setaf 15)\]\$\[$(tput sgr0)\] '
#PS1='( \[$(tput setaf 1)\]\u @ \h\[$(tput sgr0)\] ) ( \[$(tput setaf 1)\]\l\[$(tput sgr0)\] ) ( \[$(tput setaf 1)\]$(pwd)\[$(tput sgr0)\] ) ( \[$(tput setaf 1)\]\t\[$(tput sgr0)\] )\n \W \$\[$(tput sgr0)\] '
#PS1='\[$(tput setaf 2 ; tput rev)\]\h @ \u\[$(tput setaf 2 ; tput sgr0)\] \[$(tput setaf 2 ; tput rev)\]\W\[$(tput sgr0)\] \$ '
#PS1='\[$(tput setaf 2)\]\l \W >\[$(tput sgr0)\] '
PS2='> '
PS3='> '
PS4='+ '

# Aliases
alias ls='ls -F --color=auto --group-directories-first'
alias cls='clear'
alias pdf='jfbview'

# Bash Completion
complete -d cd
complete -cf sudo

# PATH
PATH=~/bin:$PATH

case ${TERM} in
  xterm*|rxvt*|Eterm|aterm|kterm|gnome*)
    PROMPT_COMMAND=${PROMPT_COMMAND:+$PROMPT_COMMAND; }'printf "\033]0;%s@%s:%s\007" "${USER}" "${HOSTNAME%%.*}" "${PWD/#$HOME/\~}"'

    ;;
  screen)
    PROMPT_COMMAND=${PROMPT_COMMAND:+$PROMPT_COMMAND; }'printf "\033_%s@%s:%s\033\\" "${USER}" "${HOSTNAME%%.*}" "${PWD/#$HOME/\~}"'
    ;;
esac

[ -r /usr/share/bash-completion/bash_completion   ] && . /usr/share/bash-completion/bash_completion

