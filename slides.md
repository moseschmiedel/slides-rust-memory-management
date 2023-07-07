---
theme: academic
themeConfig:
  paginationX: r
  paginationY: b
class: text-center
highlighter: shiki
lineNumbers: true
info: |
  ## Slides for Talk about Memory Management in Rust
drawings:
  persist: false
fonts:
  sans: Source Sans Pro
  serif: Source Serif Pro
  mono: JuliaMono
title: Rusted Memory Management
layout: cover
coverAuthor: Mose Schmiedel
coverDate: 7/7/2023
coverBackgroundUrl: /background.jpg
coverBackgroundSource: Georges Grondin, Public domain, via Wikimedia Commons
coverBackgroundSourceUrl: https://upload.wikimedia.org/wikipedia/commons/2/26/Rusty_wall.jpg
hideInToc: true
---

# Rusted Memory Management

<!--
- thank you for joining my presentation about `Rusted Memory Management`
- please save your questions for the end
- slide number are in bottom right corner ->
    may be used for reference when asking a question
-->

---
hideInToc: true
---

# Outline

<Toc />

<div class="mt-10">

## Key Questions
- What is **memory management**?
- What can we learn from **Rust** about memory management?
</div>

---
src: ./pages/why-memory-management.md
---

---
src: ./pages/manual-memory-management.md
---

---
src: ./pages/garbage-collection.md
---

---
src: ./pages/rust-memory-management.md
---

---
hideInToc: true
---

<div class="flex flex-column w-full h-full items-center justify-around">
<div class="text-3xl text-center font-bold">
    <div v-click class="mt-8">
    Memory management is essential for efficient hardware usage!
    </div>
    <div v-click class="mt-8">
    Memory management is solvable at compile time!
    </div>
</div>
</div>

<!--
1. What is **memory management**?
2. Every computer system with a **limited amount of memory** needs to manage
    this memory, so that it knows when specific parts of the memory may
    be **reused**.
3. What can we learn from **Rust** about memory management?
4. By following some simple **software design rules** we can enable
    the **compiler to solve** memory management for us!
-->

---
layout: index
indexEntries:
    -
        title: C Logo - Qq1040058283, Public domain, via Wikimedia Commons
        uri: https://upload.wikimedia.org/wikipedia/commons/1/19/C_Logo.png
    -
        title: C++ Logo - Jeremy Kratz, Public domain, via Wikimedia Commons
        uri: https://upload.wikimedia.org/wikipedia/commons/1/18/ISO_C%2B%2B_Logo.svg
    -
        title: Human at Laptop clipart - HiClipart
        uri: https://www.hiclipart.com/free-transparent-background-png-clipart-dnlci
    -
        title: Java Logo - Oracle
        uri: https://de.wikipedia.org/wiki/Datei:Java-Logo.svg
    -
        title: JavaScript Logo - Ramaksoud2000 via Chris Williams, Public domain, via Wikimedia Commons
        uri: https://upload.wikimedia.org/wikipedia/commons/6/6a/JavaScript-logo.png
    -
        title: Python Logo - Python Software Foundation
        uri: https://www.python.org/community/logos/
    -
        title: Müllauto - Michael Meding at de.wikipedia, CC BY-SA 2.0 DE <https://creativecommons.org/licenses/by-sa/2.0/de/deed.en>, via Wikimedia Commons
        uri: https://upload.wikimedia.org/wikipedia/commons/4/4b/M%C3%BCllauto.JPG
    -
        title: Ferris - Karen Rustad Tölva, CC0, via Wikimedia Commons
        uri: https://upload.wikimedia.org/wikipedia/commons/0/0f/Original_Ferris.svg
    -
        title: Gears - Stefan Schweihofer, CC0, via Wikimedia Commons
        uri: https://upload.wikimedia.org/wikipedia/commons/7/7d/Gears.png
indexRedirectType: external
---

---
layout: end
---
# Q&A

<div class="mt-8">

### Resources about Rust:
- https://doc.rust-lang.org/book/
- https://doc.rust-lang.org/rust-by-example/
- https://github.com/rust-lang/rustlings
</div>

<style>
ul {
    list-style-type: none;
}
</style>


---
src: ./pages/manual-memory-management-long.md
---

---
src: ./pages/garbage-collection-long.md
---

---
src: ./pages/rust-memory-management-long.md
---
