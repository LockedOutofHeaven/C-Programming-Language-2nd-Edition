# C Programming Language

### What is Storage duration

Every object has a property called __storage duration__, which limits the object lifetime.

* __automatic__
* __static__
* __thread__
* __allocated__

### What is Linkage

* __no linkage__
* __internal linkage__
* __external linkage__

### Storage-Class specifiers

* automatic duration and no linkage
  * __auto__
  * __register__ (address of this variable cannot be taken)
* static duration
  * __static__ internal linkage (unless at block scope)
  * __extern__ external linkage (unless already declared internal)

If no storage-class specifier is provided, the defaults are:

  1. `extern` for all functions
  2. `extern` for objects at file scope
  3. `auto` for objects at block scope

### Resources

* [C Language Reference](https://docs.microsoft.com/en-us/cpp/c-language/c-language-reference?view=vs-2017)
* [C Programming Notes](http://www.eskimo.com/~scs/cclass/notes/top.html)