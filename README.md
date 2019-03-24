# Fefes Word Splitting Challenge

Based on an old [post](https://blog.fefe.de/?ts=a2689de5)(2008) on Fefes Blog and a renewed [call](https://blog.fefe.de/?ts=a269eb94) for participation.

My intention with this repository is to get more experience with the [bazel](bazel.build) build tool.

## Task
The [task description](https://ptrace.fefe.de/wp/README.txt) is qutie simple: 

Count all words (seperated by white space) in standard input and print them sorted by number of occurence.

## Solutions
Currently submited [solutions](https://ptrace.fefe.de/wp/)

|Implementation|Mem/MB|Time|
|-|-|-|
|C wp2 (gcc 8.3.0)	|31	|3.74s user 0.17s system 99% cpu 3.914 total
|  C (gcc 8.3.0)		|43	|3.80s user 0.13s system 99% cpu 3.935 total
|  Rust wpopt 1.33.0|	250	|5.26s user 0.44s system 99% cpu 5.712 total
|  C++ (sparsepp)	|62	|6.60s user 0.22s system 99% cpu 6.816 total
|  Rust wpb 1.33.0|	59|	7.08s user 0.27s system 99% cpu 7.348 total
|  Rust 1.33.0		|74	|7.71s user 0.40s system 99% cpu 8.113 total
|  C++ (g++ 8.3.0)|	78|	7.87s user 0.29s system 99% cpu 8.162 total
|  C++/Boost 2.68	|57|	8.12s user 0.70s system 99% cpu 8.822 total
|  mawk 1.3.4		|55	|8.21s user 0.31s system 101% cpu 8.431 total
|  Go dev 1.12.1+	|107	|9.57s user 0.85s system 102% cpu 10.172 total
|  LuaJIT 2.0.5		|455	|10.19s user 0.49s system 99% cpu 10.680 total
|  Java wp2 11.0.2|	441	|10.63s user 0.51s system 118% cpu 9.417 total
|  PHP 7.1.27		|61	|10.72s user 0.24s system 99% cpu 10.960 total
|  Python 2.7.15		|127|	12.98s user 0.40s system 99% cpu 13.431 total
|  Java 11.0.2	|	462	|15.01s user 1.14s system 120% cpu 13.419 total
|  Perl 5.28.0	|	139|	15.15s user 0.24s system 99% cpu 15.392 total
|  Go 1.4.3		|109	|15.45s user 0.89s system 100% cpu 16.317 total
|  Python 3 6.4		|109|	17.38s user 0.27s system 99% cpu 17.659 total
|  Lua 5.2.4		|616	|17.46s user 0.81s system 99% cpu 18.267 total
|  Go (gccgo 8.3.0)|123	|20.03s user 1.55s system 103% cpu 20.842 total
|  OCaml 4.09.0		|84	|20.57s user 0.21s system 99% cpu 20.788 total
|  sh		||		24.15s user 2.06s system 110% cpu 23.619 total
|  JS (node 10.15.3)	|934|	29.10s user 2.19s system 106% cpu 29.309 total
|  Ruby 2.6.2p47	|	111|	36.79s user 0.30s system 99% cpu 37.117 total
