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

Note: These hyperlinks do not work anymore.
I am in the process of reworking my folder structure.

### [Creational Patterns](./src/0_creational_patterns)
  - [Abstract Factory](./src/0_creational_patterns/abstract_factory)
    - [`header.hpp`](./src/0_creational_patterns/abstract_factory/header.hpp)
    - [`source.cpp`](./src/0_creational_patterns/abstract_factory/source.cpp)
    - [`main.cpp`](./src/0_creational_patterns/abstract_factory/main.cpp)
  - [Builder](./src/0_creational_patterns/builder)
    - [`header.hpp`](./src/0_creational_patterns/builder/header.hpp)
    - [`source.cpp`](./src/0_creational_patterns/builder/source.cpp)
    - [`main.cpp`](./src/0_creational_patterns/builder/main.cpp)
  - [Factory Method](./src/0_creational_patterns/factory_method)
    - [`header.hpp`](./src/0_creational_patterns/factory_method/header.hpp)
    - [`source.cpp`](./src/0_creational_patterns/factory_method/source.cpp)
    - [`main.cpp`](./src/0_creational_patterns/factory_method/main.cpp)
  - [Prototype](./src/0_creational_patterns/prototype)
    - [`header.hpp`](./src/0_creational_patterns/prototype/header.hpp)
    - [`source.cpp`](./src/0_creational_patterns/prototype/source.cpp)
    - [`main.cpp`](./src/0_creational_patterns/protoype/main.cpp)
  - [Singleton](./src/0_creational_patterns/singleton)
    - [`header.hpp`](./src/0_creational_patterns/singleton/header.hpp)
    - [`source.cpp`](./src/0_creational_patterns/singleton/source.cpp)
    - [`main.cpp`](./src/0_creational_patterns/singleton/main.cpp)

[(back to table of contents)](#table-of-contents)

### [Structural Patterns](./src/1_structural_patterns)
  - [Adapter](./src/1_structural_patterns/adapter)
    - [`header.hpp`](./src/1_structural_patterns/adapter/header.hpp)
    - [`source.cpp`](./src/1_structural_patterns/adapter/source.cpp)
    - [`main.cpp`](./src/1_structural_patterns/adapter/main.cpp)
  - [Bridge](./src/1_structural_patterns/bridge)
    - [`header.hpp`](./src/1_structural_patterns/bridge/header.hpp)
    - [`source.cpp`](./src/1_structural_patterns/bridge/source.cpp)
    - [`main.cpp`](./src/1_structural_patterns/bridge/main.cpp)
  - [Composite](./src/1_structural_patterns/composite)
    - [`header.hpp`](./src/1_structural_patterns/composite/header.hpp)
    - [`source.cpp`](./src/1_structural_patterns/composite/source.cpp)
    - [`main.cpp`](./src/1_structural_patterns/composite/main.cpp)
  - [Decorator](./src/1_structural_patterns/decorator)
    - [`header.hpp`](./src/1_structural_patterns/decorator/header.hpp)
    - [`source.cpp`](./src/1_structural_patterns/decorator/source.cpp)
    - [`main.cpp`](./src/1_structural_patterns/decorator/main.cpp)
  - [Facade](./src/1_structural_patterns/facade)
    - [`header.hpp`](./src/1_structural_patterns/facade/header.hpp)
    - [`source.cpp`](./src/1_structural_patterns/facade/source.cpp)
    - [`main.cpp`](./src/1_structural_patterns/facade/main.cpp)
  - [Flyweight](./src/1_structural_patterns/flyweight)
    - [`header.hpp`](./src/1_structural_patterns/flyweight/header.hpp)
    - [`source.cpp`](./src/1_structural_patterns/flyweight/source.cpp)
    - [`main.cpp`](./src/1_structural_patterns/flyweight/main.cpp)
  - [Proxy](./src/1_structural_patterns/proxy)
    - [`header.hpp`](./src/1_structural_patterns/proxy/header.hpp)
    - [`source.cpp`](./src/1_structural_patterns/proxy/source.cpp)
    - [`main.cpp`](./src/1_structural_patterns/proxy/main.cpp)

[(back to table of contents)](#table-of-contents)

### [Behavioral Patterns](./src/2_behavioral_patterns)
  - [Chain of Responsibility](./src/2_behavioral_patterns/chain_of_responsibility)
    - [`header.hpp`](./src/2_behavioral_patterns/chain_of_responsibility/header.hpp)
    - [`source.cpp`](./src/2_behavioral_patterns/chain_of_responsibility/source.cpp)
    - [`main.cpp`](./src/2_behavioral_patterns/chain_of_responsibility/main.cpp)
  - [Command](./src/2_behavioral_patterns/command)
    - [`header.hpp`](./src/2_behavioral_patterns/command/header.hpp)
    - [`source.cpp`](./src/2_behavioral_patterns/command/source.cpp)
    - [`main.cpp`](./src/2_behavioral_patterns/command/main.cpp)
  - [Interpreter](./src/2_behavioral_patterns/interpreter)
    - [`header.hpp`](./src/2_behavioral_patterns/interpreter/header.hpp)
    - [`source.cpp`](./src/2_behavioral_patterns/interpreter/source.cpp)
    - [`main.cpp`](./src/2_behavioral_patterns/interpreter/main.cpp)
  - [Iterator](./src/2_behavioral_patterns/iterator)
    - [`header.hpp`](./src/2_behavioral_patterns/iterator/header.hpp)
    - [`source.cpp`](./src/2_behavioral_patterns/iterator/source.cpp)
    - [`main.cpp`](./src/2_behavioral_patterns/iterator/main.cpp)
  - [Mediator](./src/2_behavioral_patterns/mediator)
    - [`header.hpp`](./src/2_behavioral_patterns/mediator/header.hpp)
    - [`source.cpp`](./src/2_behavioral_patterns/mediator/source.cpp)
    - [`main.cpp`](./src/2_behavioral_patterns/mediator/main.cpp)
  - [Memento](./src/2_behavioral_patterns/memento)
    - [`header.hpp`](./src/2_behavioral_patterns/memento/header.hpp)
    - [`source.cpp`](./src/2_behavioral_patterns/memento/source.cpp)
    - [`main.cpp`](./src/2_behavioral_patterns/memento/main.cpp)
  - [Observer](./src/2_behavioral_patterns/observer)
    - [`header.hpp`](./src/2_behavioral_patterns/observer/header.hpp)
    - [`source.cpp`](./src/2_behavioral_patterns/observer/source.cpp)
    - [`main.cpp`](./src/2_behavioral_patterns/observer/main.cpp)
  - [State](./src/2_behavioral_patterns/state)
    - [`header.hpp`](./src/2_behavioral_patterns/state/header.hpp)
    - [`source.cpp`](./src/2_behavioral_patterns/state/source.cpp)
    - [`main.cpp`](./src/2_behavioral_patterns/state/main.cpp)
  - [Strategy](./src/2_behavioral_patterns/strategy)
    - [`header.hpp`](./src/2_behavioral_patterns/strategy/header.hpp)
    - [`source.cpp`](./src/2_behavioral_patterns/strategy/source.cpp)
    - [`main.cpp`](./src/2_behavioral_patterns/strategy/main.cpp)
  - [Template Method](./src/2_behavioral_patterns/template_method)
    - [`header.hpp`](./src/2_behavioral_patterns/template_method/header.hpp)
    - [`source.cpp`](./src/2_behavioral_patterns/template_method/source.cpp)
    - [`main.cpp`](./src/2_behavioral_patterns/template_method/main.cpp)
  - [Visitor](./src/2_behavioral_patterns/visitor)
    - [`header.hpp`](./src/2_behavioral_patterns/visitor/header.hpp)
    - [`source.cpp`](./src/2_behavioral_patterns/visitor/source.cpp)
    - [`main.cpp`](./src/2_behavioral_patterns/visitor/main.cpp)

[(back to table of contents)](#table-of-contents)

### [Foundation Classes](./src/3_foundation_classes)
  - [Iterator](./src/3_foundation_classes/iterator)
    - [`header.hpp`](./src/3_foundation_classes/iterator/header.hpp)
    - [`source.cpp`](./src/3_foundation_classes/iterator/source.cpp)
    - [`main.cpp`](./src/3_foundation_classes/iterator/main.cpp)
  - [List](./src/3_foundation_classes/list)
    - [`header.hpp`](./src/3_foundation_classes/list/header.hpp)
    - [`source.cpp`](./src/3_foundation_classes/list/source.cpp)
    - [`main.cpp`](./src/3_foundation_classes/list/main.cpp)
  - [List Iterator](./src/3_foundation_classes/list_iterator)
    - [`header.hpp`](./src/3_foundation_classes/list_iterator/header.hpp)
    - [`source.cpp`](./src/3_foundation_classes/list_iterator/source.cpp)
    - [`main.cpp`](./src/3_foundation_classes/list_iterator/main.cpp)
  - [Point](./src/3_foundation_classes/point)
    - [`header.hpp`](./src/3_foundation_classes/point/header.hpp)
    - [`source.cpp`](./src/3_foundation_classes/point/source.cpp)
    - [`main.cpp`](./src/3_foundation_classes/point/main.cpp)
  - [Rect](./src/3_foundation_classes/rect)
    - [`header.hpp`](./src/3_foundation_classes/rect/header.hpp)
    - [`source.cpp`](./src/3_foundation_classes/rect/source.cpp)
    - [`main.cpp`](./src/3_foundation_classes/rect/main.cpp)

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
