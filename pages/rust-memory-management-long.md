# Rust's approach: Let the compiler do it!

<div class="flex">

```rust
struct Number {
    pub number: i32,
}
impl Number {
    fn new(number: i32) -> Number {
        Number { number }
    }
}

fn add_one(a: &mut Number) {
    let one: Number = Number::new(1);
    a.number += one.number;
}

fn mul_by_two(a: &Number) -> Number {
    return Number::new(a.number * 2);
}
```

<div class="ml-4">

<figure class="mb-6">
    <img src="/Original_Ferris.svg" class="w-24" />
    <figcaption class="italic text-sm text-center w-24">Fig.3</figcaption>
</figure>


```rust{all}{startLine: 18}
fn main() {
    let mut incomplete_answer: Number = Number::new(20);
    add_one(&mut incomplete_answer);
    let answer_of_everything = mul_by_two(&incomplete_answer);
    println!(
        "the answer to everything is {}",
        answer_of_everything.number
    );
}
```
</div>
</div>

<!--
### compiler managed memory
1. no garbage collection
1. code looks like garbage collected code -> no `free()`
2. not garbage collected -> compiler determines which memory has to be
    deallocated at which point
3. mental model of compiler that inserts `free()` into source code
4. where? -> show places
5. Ownership: only one variable may own memory ->
        is responsible for deallocation
6. memory is deallocated when going out-of-scope
6. explain Borrowing: memory owned by another variable may be borrowed
7. immutable -> infinitely many
8. mutable -> only one at a time
7. why do all this?
8. best of garbage collection: memory management mistakes get avoided
        like forgetting to deallocate memory thats not used anymore
9. best of do-it-yourself: no overhead for running a
        garbage collector -> PERFORMANCE!
-->

---
title: insert free
hideInToc: true
---

# Rust's approach: Let the compiler do it!

<div class="flex">

```rust{13}
struct Number {
    pub number: i32,
}
impl Number {
    fn new(number: i32) -> Number {
        Number { number }
    }
}

fn add_one(a: &mut Number) {
    let one: Number = Number::new(1);
    a.number += one.number;
    // COMPILER: free(one);
}

fn mul_by_two(a: &Number) -> Number {
    return Number::new(a.number * 2);
}
```

<div class="ml-4">

<figure class="mb-6">
    <img src="/Original_Ferris.svg" class="w-24" />
    <figcaption class="italic text-sm text-center w-24">Fig.3</figcaption>
</figure>


```rust{26-27}{startLine: 18}
fn main() {
    let mut incomplete_answer: Number = Number::new(20);
    add_one(&mut incomplete_answer);
    let answer_of_everything = mul_by_two(&incomplete_answer);
    println!(
        "the answer to everything is {}",
        answer_of_everything.number
    );
    // COMPILER: free(incomplete_answer);
    // COMPILER: free(answer_of_everything);
}
```
</div>
</div>

<!--
### compiler managed memory
1. code looks like garbage collected code -> no `free()`
2. not garbage collected -> compiler determines which memory has to be
    deallocated at which point
3. mental model of compiler that inserts `free()` into source code
4. where? -> show places
5. Ownership: only one variable may own memory ->
        is responsible for deallocation
6. memory is deallocated when going out-of-scope
6. explain Borrowing: memory owned by another variable may be borrowed
7. immutable -> infinitely many
8. mutable -> only one at a time
7. why do all this?
8. best of garbage collection: memory management mistakes get avoided
        like forgetting to deallocate memory thats not used anymore
9. best of do-it-yourself: no overhead for running a
        garbage collector -> PERFORMANCE!
-->

---
title: ownership
hideInToc: true
---

# Rust's approach: Let the compiler do it!

<div class="flex">

```rust{0}
struct Number {
    pub number: i32,
}
impl Number {
    fn new(number: i32) -> Number {
        Number { number }
    }
}

fn add_one(a: &mut Number) {
    let one: Number = Number::new(1);
    a.number += one.number;
    // COMPILER: free(one);
}

fn mul_by_two(a: &Number) -> Number {
    return Number::new(a.number * 2);
}
```

<div class="ml-4">

<figure class="mb-6">
    <img src="/Original_Ferris.svg" class="w-24" />
    <figcaption class="italic text-sm text-center w-24">Fig.3</figcaption>
</figure>


```rust{19,26}{startLine: 18}
fn main() {
    let mut incomplete_answer: Number = Number::new(20);
    add_one(&mut incomplete_answer);
    let answer_of_everything = mul_by_two(&incomplete_answer);
    println!(
        "the answer to everything is {}",
        answer_of_everything.number
    );
    // COMPILER: free(incomplete_answer);
    // COMPILER: free(answer_of_everything);
}
```
</div>
</div>

<!--
### compiler managed memory
1. code looks like garbage collected code -> no `free()`
2. not garbage collected -> compiler determines which memory has to be
    deallocated at which point
3. mental model of compiler that inserts `free()` into source code
4. where? -> show places
5. Ownership: only one variable may own memory ->
        is responsible for deallocation
6. memory is deallocated when going out-of-scope
6. explain Borrowing: memory owned by another variable may be borrowed
7. immutable -> infinitely many
8. mutable -> only one at a time
7. why do all this?
8. best of garbage collection: memory management mistakes get avoided
        like forgetting to deallocate memory thats not used anymore
9. best of do-it-yourself: no overhead for running a
        garbage collector -> PERFORMANCE!
-->

---
title: borrowing
hideInToc: true
---

# Rust's approach: Let the compiler do it!

<div class="flex">

```rust{10,16}
struct Number {
    pub number: i32,
}
impl Number {
    fn new(number: i32) -> Number {
        Number { number }
    }
}

fn add_one(a: &mut Number) {
    let one: Number = Number::new(1);
    a.number += one.number;
    // COMPILER: free(one);
}

fn mul_by_two(a: &Number) -> Number {
    return Number::new(a.number * 2);
}
```

<div class="ml-4">

<figure class="mb-6">
    <img src="/Original_Ferris.svg" class="w-24" />
    <figcaption class="italic text-sm text-center w-24">Fig.3</figcaption>
</figure>


```rust{20,21}{startLine: 18}
fn main() {
    let mut incomplete_answer: Number = Number::new(20);
    add_one(&mut incomplete_answer);
    let answer_of_everything = mul_by_two(&incomplete_answer);
    println!(
        "the answer to everything is {}",
        answer_of_everything.number
    );
    // COMPILER: free(incomplete_answer);
    // COMPILER: free(answer_of_everything);
}
```
</div>
</div>

<!--
### compiler managed memory
1. code looks like garbage collected code -> no `free()`
2. not garbage collected -> compiler determines which memory has to be
    deallocated at which point
3. mental model of compiler that inserts `free()` into source code
4. where? -> show places
5. Ownership: only one variable may own memory ->
        is responsible for deallocation
6. memory is deallocated when going out-of-scope
6. explain Borrowing: memory owned by another variable may be borrowed
7. immutable -> infinitely many
8. mutable -> only one at a time
7. why do all this?
8. best of garbage collection: memory management mistakes get avoided
        like forgetting to deallocate memory thats not used anymore
9. best of do-it-yourself: no overhead for running a
        garbage collector -> PERFORMANCE!
-->

---
title: all rust
hideInToc: true
---

# Rust's approach: Let the compiler do it!

<div class="flex">

```rust
struct Number {
    pub number: i32,
}
impl Number {
    fn new(number: i32) -> Number {
        Number { number }
    }
}

fn add_one(a: &mut Number) {
    let one: Number = Number::new(1);
    a.number += one.number;
    // COMPILER: free(one);
}

fn mul_by_two(a: &Number) -> Number {
    return Number::new(a.number * 2);
}
```

<div class="ml-4">

<figure class="mb-6">
    <img src="/Original_Ferris.svg" class="w-24" />
    <figcaption class="italic text-sm text-center w-24">Fig.3</figcaption>
</figure>


```rust{all}{startLine: 18}
fn main() {
    let mut incomplete_answer: Number = Number::new(20);
    add_one(&mut incomplete_answer);
    let answer_of_everything = mul_by_two(&incomplete_answer);
    println!(
        "the answer to everything is {}",
        answer_of_everything.number
    );
    // COMPILER: free(incomplete_answer);
    // COMPILER: free(answer_of_everything);
}
```
</div>
</div>

<!--
### compiler managed memory
1. code looks like garbage collected code -> no `free()`
2. not garbage collected -> compiler determines which memory has to be
    deallocated at which point
3. mental model of compiler that inserts `free()` into source code
4. where? -> show places
5. Ownership: only one variable may own memory ->
        is responsible for deallocation
6. memory is deallocated when going out-of-scope
6. explain Borrowing: memory owned by another variable may be borrowed
7. immutable -> infinitely many
8. mutable -> only one at a time
7. why do all this?
8. best of garbage collection: memory management mistakes get avoided
        like forgetting to deallocate memory thats not used anymore
9. best of do-it-yourself: no overhead for running a
        garbage collector -> PERFORMANCE!
-->
