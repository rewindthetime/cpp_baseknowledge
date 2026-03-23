# Fundamental Types

This topic is extremely important in C++ programming. I've tried to write everything down in detail so that it's as understandable as possible. Here's a list of categories so you can jump to specific points. By the way, I learned how to use Markdown here.. <3

## Categories
- [Notes (Important)](#Notes)
- [Integer Types](#integers)
- [Decimal Types](#decimal)
- [Boolean Type](#bool)
- [Character Type](#character-type)

---

## Notes


<details>
<summary>short</summary>
<a id="short"></a>

## short ⚠️
**Risks & Issues:**
- Overflow / Underflow → values wrap around
- Easy to exceed range in calculations
- Implicit conversion to `int` can cause confusion

</details>

---

<details>
<summary>int</summary>
<a id="int"></a>

## int ⚠️
**Risks & Issues:**
- Integer Overflow (very common)
```cpp
int x = 2000000000 + 1; // overflow
```
- Multiplication can overflow silently
- Division by 0 → crash

</details>

---

<details>
<summary>long</summary>
<a id="long"></a>

### long ⚠️
**Risks & Issues:**
- Platform dependent size (32-bit vs 64-bit)
- Can behave differently across systems
- Same overflow issues as `int`

</details>

---

<details>
<summary>long long</summary>
<a id="longlong"></a>

### long long ⚠️
**Risks & Issues:**
- Overflow still possible with very large numbers
- Slower than smaller integer types
- Mixing with `int` can cause implicit conversion bugs

</details>

---

<details>
<summary>float</summary>
<a id="float"></a>

### float ⚠️
**Risks & Issues:**
- Precision Loss (~6–7 digits only)
- Rounding Errors
```cpp
float a = 0.1, b = 0.2;
if (a + b == 0.3) // may fail
```
- Never compare with `==`
- Overflow → `inf`, Underflow → `0`

</details>

---

<details>
<summary>double</summary>
<a id="double"></a>

### double ⚠️
**Risks & Issues:**
- Still has rounding errors
- Not suitable for exact values (e.g. money)
- Comparisons must use tolerance

</details>

---

<details>
<summary>long double</summary>
<a id="longdouble"></a>

### long double ⚠️
**Risks & Issues:**
- Not consistent across platforms
- May not give more precision depending on compiler
- Harder to rely on in portable code

</details>



---

<details>
<summary>char</summary>
<a id="char"></a>

### char ⚠️
**Risks & Issues:**
- Signed vs Unsigned confusion
- Used as number → unexpected behavior
- ASCII dependence
- Overflow possible
```cpp
char c = 127 + 1; // overflow
```

</details>



---



## Integers
| Type | Bytes | Range | 
| :--- | :--- | :--- |
| [short](#short) | 2 | -32,768 to 32,767 | 
| [int](#int) | 4 | -2 Billion to 2 Billion |
| [long](#long) | 4 | -2 Billion to 2 Billion |
| [long long](#longlong) | 8 | very very large.. 

---
## Decimal


| Type | Bytes | Range |
| :--- | :--- | :--- |
| [float](#float) | | 4 | -3.E38 to 3.4E38 |
| [double](#double) | 8 | -1.7E308 to 1.7E308 |
| [long double](#longdouble)| 8 | -3.4E932 to 1.7E4832 |

---

## Bool

| Type | Bytes | Range | 
| :--- | :---  | :---  |
| [bool](https://www.youtube.com/watch?v=AkSMuU_1_mo&themeRefresh=1) | 1 | true / false |
| [char](#char) | 1 | -128 - 127 