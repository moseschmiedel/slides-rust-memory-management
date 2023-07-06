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
coverBackgroundUrl: ./assets/background2.jpg
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
src: ./pages/garbage-collection.md
---

---
src: ./pages/manual-memory-management.md
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
1. What is **memory management**?<br>
2. Every computer system with a limited amount of memory needs to manage
    this memory, so that it knows when specific parts of the memory may
    be reused.
3. What can we learn from **Rust** about memory management?<br>
4. By following some simple software design rules we can enable
    the compiler to solve memory management for us!
-->

---
layout: index
indexEntries:
    -
        title: Java Logo
        uri: https://de.wikipedia.org/wiki/Datei:Java-Logo.svg
    -
        title: C Logo - Qq1040058283, Public domain, via Wikimedia Commons
        uri: https://upload.wikimedia.org/wikipedia/commons/1/19/C_Logo.png
    -
        title: Ferris - Karen Rustad Tölva, CC0, via Wikimedia Commons
        uri: https://upload.wikimedia.org/wikipedia/commons/0/0f/Original_Ferris.svg
indexRedirectType: external
---
