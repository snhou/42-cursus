# Makefile

* set a rule in Makefile

```
command_echo:
    echo "hello world"
```

* Dependency in Makefile

```
command_dependency: command_echo
    echo "hello world again"
```

* variable

<pre class="language-makefile"><code class="lang-makefile"><strong>TEXT = "test"
</strong>command_test:
    echo $(TEXT)
</code></pre>

```
%.o: %.foo
    fooc $(FOOFLAGS) -o $@ -c $<
Then, whenever make needs to build xyzzy.o, and there is a file named xyzzy.foo, it will use that rule to compile it.
```

```
all: library.cpp main.cpp
In this case:

$@ evaluates to all
$< evaluates to library.cpp
$^ evaluates to library.cpp main.cpp
```
