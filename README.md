# gof-designpatterns-cpp

## Table of contents

- [gof-designpatterns-cpp](#gof-designpatterns-cpp)
  - [Table of contents](#table-of-contents)
  - [About](#about)
  - [Design Pattern sources](#design-pattern-sources)
    - [Creational Patterns](#creational-patterns)
    - [Structural Patterns](#structural-patterns)
    - [Behavioral Patterns](#behavioral-patterns)
    - [Foundation Classes](#foundation-classes)
  - [Building](#building)
    - [Alternate build systems](#alternate-build-systems)

## About

This repository consists of design patterns/sample code described in<br>
<b><i>Design Patterns - Elements of Reusable Object-Oriented Design</i></b><br>by Erich Gamma, Richard Helm, Ralph Johnson, and John Vlissides<br>

<b><i>Design Patterns</i></b> is also known by the community as <i>GoF</i>, aka <i>Gang-of-four</i>. (four authors)

The sources were taken straight from the textbook -- but I plan to refactor some of the code<br>
for modern C++, and as well as adapting the code to my preferred naming convention for C/C++ sources.<br>

<b>Note: This repository is a work in progress.</b> I need to:
- Transfer code from the textbook to respective folders/source files in this repo
- Refactor code for my preferred naming convention
  - (I'll be using <b>`snake_case`</b>, as opposed to <b>`camelCase`</b> or <b>`PascalCase`</b>.)
- Look for places where I can adapt the code to modern-C++.

My purpose is to:
- refresh/refine my understanding of the design patterns in <i>GoF</i>,<br>
- log my progress along the way
- and have a catalogue of sources to easily browse/run at my convenience.

[(back to table of contents)](#table-of-contents)

## Design Pattern sources

### [Creational Patterns](./src/0_creational_patterns)
  - [Abstract Factory](./src/0_creational_patterns/abstract_factory)

  - [Builder](./src/0_creational_patterns/builder)

  - [Factory Method](./src/0_creational_patterns/factory_method)

  - [Prototype](./src/0_creational_patterns/prototype)

  - [Singleton](./src/0_creational_patterns/singleton)


[(back to table of contents)](#table-of-contents)

### [Structural Patterns](./src/1_structural_patterns)
  - [Adapter](./src/1_structural_patterns/adapter)

  - [Bridge](./src/1_structural_patterns/bridge)

  - [Composite](./src/1_structural_patterns/composite)

  - [Decorator](./src/1_structural_patterns/decorator)

  - [Facade](./src/1_structural_patterns/facade)

  - [Flyweight](./src/1_structural_patterns/flyweight)

  - [Proxy](./src/1_structural_patterns/proxy)


[(back to table of contents)](#table-of-contents)

### [Behavioral Patterns](./src/2_behavioral_patterns)
  - [Chain of Responsibility](./src/2_behavioral_patterns/chain_of_responsibility)

  - [Command](./src/2_behavioral_patterns/command)

  - [Interpreter](./src/2_behavioral_patterns/interpreter)

  - [Iterator](./src/2_behavioral_patterns/iterator)

  - [Mediator](./src/2_behavioral_patterns/mediator)

  - [Memento](./src/2_behavioral_patterns/memento)

  - [Observer](./src/2_behavioral_patterns/observer)

  - [State](./src/2_behavioral_patterns/state)

  - [Strategy](./src/2_behavioral_patterns/strategy)

  - [Template Method](./src/2_behavioral_patterns/template_method)

  - [Visitor](./src/2_behavioral_patterns/visitor)

[(back to table of contents)](#table-of-contents)

### [Foundation Classes](./src/3_foundation_classes)
  - [Iterator](./src/3_foundation_classes/iterator)

  - [List](./src/3_foundation_classes/list)

  - [List Iterator](./src/3_foundation_classes/list_iterator)

  - [Point](./src/3_foundation_classes/point)

  - [Rect](./src/3_foundation_classes/rect)

[(back to table of contents)](#table-of-contents)

## Building

Run the included `makebuilds` script to have `cmake`<br>
create Unix-Makefile builds in the following modes:
- `Debug`
- `Release`
- `MinSizeRel`
- `RelWithDebInfo`

```
% ./makebuilds
```

A `build/make` subdirectory will be created with subdirectories<br>
of the modes described above. 

If we want to create a `Debug` build of the program in the `demo` directory<br>
(which will also build the sources in the `src` directory):

```
make -C ./build/make/Debug/demo
```

Generally, you would invoke `make` as follows:
```
make -C ./build/make/[build-mode]/[target-name]
```

After running `make`, you can run the `demo` executable:
```
./build/make/Debug/demo/demo
```

Generally:
```
./build/make/[build-mode]/[target-name]/[executable-name]
```

The `makebuilds` script (without comments/newlines) looks like this:

```zsh
#!/bin/zsh

## Remove any previous build folders
rm -rf ./build/make/Debug/* || true
rm -rf ./build/make/Release/* || true
rm -rf ./build/make/RelWithDebInfo/* || true
rm -rf ./build/make/MinSizeRel/* || true || true

cmake -S ./ -B ./build/make/Debug -DCMAKE_BUILD_TYPE=Debug
cmake -S ./ -B ./build/make/Release -DCMAKE_BUILD_TYPE=Release
cmake -S ./ -B ./build/make/RelWithDebInfo -DCMAKE_BUILD_TYPE=RelWithDebInfo
cmake -S ./ -B ./build/make/MinSizeRel -DCMAKE_BUILD_TYPE=MinSizeRel
```

[(back to table of contents)](#table-of-contents)

### Alternate build systems

If you want to use an alternative build system, i.e. Xcode or Visual Studio<br>
(see the list of supported generators on your system using `cmake -help`), invoke the following:
```
% cmake -S ./ -B ./build/[generator-name] -G "[generator-name]"
```

For example, for Xcode:
```
% cmake -S ./ -B ./build/xcode -G "Xcode"
```

[(back to table of contents)](#table-of-contents)
