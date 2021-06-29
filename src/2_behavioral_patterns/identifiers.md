## Behavioral Patterns

### Chain of Responsibility
```cpp
class HelpHandler;
class Widget;
class Button;
class Dialog;
class Application;
```

### Command
```cpp
class Command;
class OpenCommand;
class PasteCommand;
template <class Receiver> class SimpleCommand
class MacroCommand;
```
### Interpreter
```cpp
class BooleanExp;
class Context;
class VariableExp;
class AndExp;
class OrExp;
class AndExp;
```
### Iterator
```cpp
template <class Item> class ReverseListIterator;
class Employee;
template <class Item> class SkipList;
template <class Item> class SkipListIterator;
template <class Item> class AbstractList;
template <class Item> class IteratorPtr;
template <class Item> class ListTraverser;
class PrintNEmployees;
template <class Item> class FilteringListTraverser;
```
### Mediator
```cpp
class DialogDirector;
class Widget;
class ListBox;
class EntryField;
class Button;
class FontDialogDirector;
```

### Memento
```cpp
class Graphic;
class MoveCommand;
class ConstraintSolverMemento;
class ConstraintSolver;
template <class Item> class Collection;
class ItemType;
```

### Observer
```cpp
class Subject;
class Observer;
class ClockTimer;
class DigitalClock;
class AnalogClock;
```

### State
```cpp
class TCPOctetStream;
class TCPState;
class TCPConnection;
class TCPEstablished;
class TCPListen;
class TCPClosed;
```

### Strategy
```cpp
class Composition;
class Compositor;
class SimpleCompositor;
class TeXCompositor;
class ArrayCompositor;
```

### Template Method
```cpp
class View;
```

### Visitor
```cpp
class Equipment;
class EquipmentVisitor;
class PricingVisitor;
class InventoryVisitor;
```
