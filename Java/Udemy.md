# Java Udemy Notes

## Priminitive Types

* boolean
* byte (**8 bits**)
    * Byte.MIN_VALUE **-128** / Byte.MAX_VALUE **127**
* char (single character)
    * 2 bytes for Unicode
    * 'D' <-> '\u0044'
* short (**16 bits**)
    * Short.MIN_VALUE **-32768** / Short.MAX_VALUE **32767**
* int (**32 bits**)
    * Integer.MIN_VALUE **-2147483648** / Integer.MAX_VALUE **2147483647**
    * Underflow / Overflow
* long (**64 bits**)
    * 100L, force Java to treat the value as long
* float (**32 bits**)
* double (**64 bits**)
    * In Java, double is faster than float in process due to Java design and chip design. **Double** is recommended.

### Type Casting

```Java
byte myNewByteValue = (byte) (Int Value) 
```

