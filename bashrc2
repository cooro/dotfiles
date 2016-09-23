#
# /etc/bash.bashrc
#

# If not running interactively, don't do anything
[[ $- != *i* ]] && return

# PSs
PS1='( \[$(tput setaf 2)\]\u @ \h\[$(tput sgr0)\] ) ( \[$(tput setaf 2)\]\l\[$(tput sgr0)\] ) ( \[$(tput setaf 2)\]$(pwd)\[$(tput sgr0)\] ) ( \[$(tput setaf 2)\]\t\[$(tput sgr0)\] )\n \W \$\[$(tput sgr0)\] '
#PS1='\[$(tput setaf 2 ; tput rev)\]\h @ \u\[$(tput setaf 2 ; tput sgr0)\] \[$(tput setaf 2 ; tput rev)\]\W\[$(tput sgr0)\] \$ '
#PS1='\[$(tput setaf 2)\]\l \W >\[$(tput sgr0)\] '
PS2='> '
PS3='> '
PS4='+ '

# Aliases
alias ls='ls -F --color=auto --group-directories-first'
alias cls='clear'
alias pdf='jfbview'

# PATH
PATH=~/bin:$PATH

# Themes

## Monokai Theme
#if [ "$TERM" = "linux" ]; then
#    echo -en "\e]P048483e" #black
#    echo -en "\e]P876715e" #darkgrey
#    echo -en "\e]P1dc2566" #darkred
#    echo -en "\e]P9fa2772" #red
#    echo -en "\e]P28fc029" #darkgreen
#    echo -en "\e]PAa7e22e" #green
#    echo -en "\e]P3d4c96e" #brown
#    echo -en "\e]PBe7db75" #yellow
#    echo -en "\e]P455bcce" #darkblue
#    echo -en "\e]PC66d9ee" #blue
#    echo -en "\e]P59358fe" #darkmagenta
#    echo -en "\e]PDae82ff" #magenta
#    echo -en "\e]P656b7a5" #darkcyan
#    echo -en "\e]PE66efd5" #cyan
#    echo -en "\e]P7acada1" #lightgrey
#    echo -en "\e]PFcfd0c2" #white
#    clear # cleans up old colors
#fi

case ${TERM} in
  xterm*|rxvt*|Eterm|aterm|kterm|gnome*)
    PROMPT_COMMAND=${PROMPT_COMMAND:+$PROMPT_COMMAND; }'printf "\033]0;%s@%s:%s\007" "${USER}" "${HOSTNAME%%.*}" "${PWD/#$HOME/\~}"'

    ;;
  screen)
    PROMPT_COMMAND=${PROMPT_COMMAND:+$PROMPT_COMMAND; }'printf "\033_%s@%s:%s\033\\" "${USER}" "${HOSTNAME%%.*}" "${PWD/#$HOME/\~}"'
    ;;
esac

[ -r /usr/share/bash-completion/bash_completion   ] && . /usr/share/bash-completion/bash_completion

screenfetch -t -a ~/.screenfetch.art
