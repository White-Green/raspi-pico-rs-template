# raspi-pico-rs-template

Raspberry Pi Pico向けのプログラムをRustで作るためのテンプレートです。

This is a template to write a program for Raspberry Pi Pico by Rust.

# Getting Started
まず、このテンプレートリポジトリから新たにリポジトリを作ってcloneします(またはこのリポジトリをダウンロード)

At first, Create a repository from this template and clone it to a local machine. (or download this repository)

```bash
$ cd /path/to/cloned/directory
$ mkdir build
$ cd build
$ cmake ../cmake
$ make
```


# How to Edit a Code
プログラムのエントリーポイント(main関数)は `src/lib.rs`にあります。
利用できる関数は `make doc` コマンドを実行して `target/thumbv6m-none-eabi/doc` にアクセスすれば調べることができます。

The entry-point(main function) is in `src/lib.rs`.
Run `make doc` and visit `target/thumbv6m-none-eabi/doc` to see a list of functions that can be used.

# Advanced Topics
## 別でダウンロードしてあるSDKを利用する方法
既にダウンロードしてあるSDKを利用する場合、環境変数 `PICO_SDK_PATH` にパスを設定してください。

## How to use the SDK that downloaded to another directory
Set path in environment variable `PICO_SDK_PATH` to use SDK that in another directory.

## 出力物の名前を変える方法
出力の `pico.uf2` を `hoge.uf2` に変えたい場合、 `cmake/CMakeLists.txt` の `set(RESULT_FILE_NAME pico)` を`set(RESULT_FILE_NAME hoge)` に変更します。

## How to change the output file name
Change `set(RESULT_FILE_NAME pico)` to `set(RESULT_FILE_NAME hoge)` in `cmake/CMakeLists.txt` to change `pico.uf2` of the output file to `hoge.uf2`. 

## crate名を変更する方法
`Cargo.toml` のnameを `hoge` に変更した場合、 `cmake/CMakeLists.txt` の `set(LIB_NAME raspi_pico_rs_template)` を `set(LIB_NAME hoge)` に変更してください。

## How to change the crate name
When you change the crate name in `Cargo.toml` to `hoge`, you should change `set(LIB_NAME raspi_pico_rs_template)` in `cmake/CMakeLists.txt` to `set(LIB_NAME hoge)`.

## SDK内の他の関数に対してもバインディングを生成する方法
`#include<pico/stdlib.h>`により読みこまれないSDK内の他の関数に対してバインディングを生成したい場合、 `cmake/entry.c` 内にincludeの記述を増やすことで生成できます。

## How to generate bindings to other functions in SDK
Append include directive to `cmake/entry.c` to generate bindings to other functions that are not included by `#include<pico/stdlib.h>`.
