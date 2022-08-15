"""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""
" Vim Plug 
""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""

" Install Plug if it's not installed
let data_dir = has('nvim') ? stdpath('data') . '/site' : '~/.vim'
if empty(glob(data_dir . '/autoload/plug.vim'))
  silent execute '!curl -fLo '.data_dir.'/autoload/plug.vim --create-dirs  https://raw.githubusercontent.com/junegunn/vim-plug/master/plug.vim'
  autocmd VimEnter * PlugInstall --sync | source $MYVIMRC
endif

call plug#begin(stdpath('data') . '/plugged')

Plug 'catppuccin/nvim', {'as': 'catppuccin'}                " a beautiful nvim colorscheme
Plug 'mg979/vim-visual-multi', { 'branch': 'master' }       " multi cursor mode, like emacs, sublime, etc
Plug 'rrethy/vim-hexokinase',  { 'do': 'make hexokinase' }  " highlight hex codes in their own color

call plug#end()


" Plugin-specific Settings 
" Visual Multi
let g:VM_leader = ",,"
let g:VM_maps = {}
let g:VM_maps["Select Cursor Down"] = '<C-j>'
let g:VM_maps["Select Cursor Up"] = '<C-k>'

" Catppuccin
let g:catppuccin_flavour = "macchiato"
lua << EOF
require("catppuccin").setup()
EOF

" Hexokinase
let g:Hexokinase_highlighters = [ 'backgroundfull' ]
let g:Hexokinase_optInPatterns = 'full_hex,triple_hex,rgb,rgba,hsl,hsla,colour_names'


""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""
" Main Config
""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""
syntax on           " syntax highlighting

" Color Scheme Settings "
colorscheme catppuccin " color theme
set termguicolors   " use true color

let mapleader = ","

set noshowmode      " don't show the modeline (since we have a statusline to replace it)
set number          " line numbers
set relativenumber  " numbers are relative to current position
set title           " makes vim set a title
set mouse=a         " enable mouse controls
set ruler
set encoding=utf-8  " unicode encoding
set expandtab       " insert spaces instead of a hard tab
set autoindent      " keep the indent of the previous line
set shiftwidth=4    " how many spaces to use when tabbing
set softtabstop=4   " how far apart tab stops are. I think this does the same as
                    "     shiftwidth, but I leave it just in case.
set showcmd

inoremap {<CR> {<CR>}<ESC>ko

" settings that should only be set if running normal vim
if !has('nvim')
  set ttymouse=sgr    " fix that makes mouse stuff work in alacritty term
  set nocompatible    " don't try to be vi compatible
endif

