cc_binary(
  name = "lines",
  srcs = ["lines.c"],
)

genrule(
  name = "words",
  srcs = ["@llvm-src//file"],
  tools = ["lines"],
  outs = ["words.txt"],
  cmd = "tar xzf $(location @llvm-src//file) && find . -type f | xargs cat | tr -sc 'a-zA-Z0-9_' ' ' | $(location lines) > $@"
)
