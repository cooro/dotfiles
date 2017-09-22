#
# /etc/bash.bashrc
#

# If not running interactively, don't do anything
[[ $- != *i* ]] && return


# PSs (geez there are a lot of these PS1s I've made... they are kept for posterity mostly)
PS1=' \[$(tput setaf 5)\]\W\[$(tput sgr0)\] \[$(tput bold)\]\$\[$(tput sgr0)\] '
#PS1='( \[$(tput setaf 1)\]\u @ \h\[$(tput sgr0)\] ) ( \[$(tput setaf 1)\]\l\[$(tput sgr0)\] ) ( \[$(tput setaf 1)\]$(pwd)\[$(tput sgr0)\] ) ( \[$(tput setaf 1)\]\t\[$(tput sgr0)\] )\n \W \$\[$(tput sgr0)\] '
#PS1='\[$(tput setaf 2 ; tput rev)\]\h @ \u\[$(tput setaf 2 ; tput sgr0)\] \[$(tput setaf 2 ; tput rev)\]\W\[$(tput sgr0)\] \$ '
#PS1='\[$(tput setaf 2)\]\l \W >\[$(tput sgr0)\] '
PS2='> '
PS3='> '
PS4='+ '

### Aliases
## ls and cd variants
alias ls='ls -F --color=auto --group-directories-first' # fancy list
alias ll='ls -l --group-directories-first' # list with extra info
alias la='ls -A --group-directories-first' # list hidden directories
# cd then ls
cl() {
    local dir="$1"
    local dir="${dir:=$HOME}"
    if [[ -d "$dir" ]]; then
        cd "$dir" >/dev/null; ls
    else
        echo "bash: cl: $dir: Directory not found"
    fi
}
## launch program with a square font
sq() {
    setfont drdos8x8; $1; setfont
}
## misc
alias cls='clear'
alias startgnome='XDG_SESSION_TYPE=wayland dbus-run-session gnome-session'
alias ..='cd ..'
alias ...='cd ../..'
alias ....='cd ../../..'
alias .....='cd ../../../..'
alias ......='cd ../../../../..'
alias .......='cd ../../../../../..'


# Bash Completion
complete -d cd
complete -cf sudo
complete -cf sq

# PATH
PATH=~/bin:$PATH

# Colors
#TTYC0="18140c" #black
#TTYC1="ff090f" #red
#TTYC2="06ae5d" #green
#TTYC3="fff339" #yellow
#TTYC4="3930bf" #blue
#TTYC5="ec0064" #magenta
#TTYC6="0075ec" #cyan
#TTYC7="e1dacc" #white
#TTYC8="5c564b" #black
#TTYC9="ff4d51" #red
#TTYCA="4bc48a" #green
#TTYCB="fff670" #yellow
#TTYCC="7069d1" #blue
#TTYCD="f1468f" #magenta
#TTYCE="469bf1" #cyan
#TTYCF="faf2e2" #white
#
#if [ "$TERM" = "linux" ]; then
#    # normal
#    echo -en "\e]P0$TTYC0" #black
#    echo -en "\e]P1$TTYC1" #red
#    echo -en "\e]P2$TTYC2" #green
#    echo -en "\e]P3$TTYC3" #yellow
#    echo -en "\e]P4$TTYC4" #blue
#    echo -en "\e]P5$TTYC5" #magenta
#    echo -en "\e]P6$TTYC6" #cyan
#    echo -en "\e]P7$TTYC7" #white
#    # bright
#    echo -en "\e]P8$TTYC8" #black
#    echo -en "\e]P9$TTYC9" #red
#    echo -en "\e]Pa$TTYCA" #green
#    echo -en "\e]Pb$TTYCB" #yellow
#    echo -en "\e]Pc$TTYCC" #blue
#    echo -en "\e]Pd$TTYCD" #magenta
#    echo -en "\e]Pe$TTYCE" #cyan
#    echo -en "\e]Pf$TTYCF" #white
#    clear
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

