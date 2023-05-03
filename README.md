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

