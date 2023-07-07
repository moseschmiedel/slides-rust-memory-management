# Rust's approach: Let the compiler do it!

<div class="flex items-center">

<figure>
    <img src="/Original_Ferris.svg" class="w-32" />
    <figcaption class="italic text-sm text-center w-32">Fig.8</figcaption>
</figure>

<ul class="ml-4">
    <li>modern programming language</li>
    <li>no garbage collection</li>
</ul>

</div>

<v-click>
<div class="flex justify-start w-full">

```rust {lines: false}
fn main() {
    let mut incomplete_answer: Number =
        Number::new(20);
    add_one(&mut incomplete_answer);
    let answer_of_everything =
        mul_by_two(&incomplete_answer);
    println!(
        "the answer to everything is {}",
        answer_of_everything.number
    );
}
```
<div>

<figure class="ml-24 mt-18">
    <img src="/Gears.png" class="w-18" />
    <figcaption class="italic text-sm w-24">Fig.9 - compiler</figcaption>
</figure>
<Arrow x1="390" y1="260" x2="680" y2="260"/>
</div>

<div class="text-8xl ml-42">
<div class="i-tabler-binary" />
</div>

</div>

<v-click>
<Arrow x1="770" y1="300" x2="770" y2="360"/>
<Arrow x1="790" y1="360" x2="790" y2="300"/>


<div class="flex justify-end -mt-20">
<div class="px-2 pb-2 bg-green-600 mt-8 w-[250px] rounded border-gray-600 border-2">
<strong class="text-white">Memory</strong>
<div class="overflow-hidden flex-none w-[230px] h-[104px] bg-white rounded border-2 border-gray-500">
<div
    class="w-full h-[50px] bg-gray-200 border-b-2 border-gray-500 text-center text-4xl"
    >
    1
</div>
<div
    class="w-full h-[50px] bg-gray-200 text-center text-4xl"
    >
    42
</div>
</div>
</div>
</div>
</v-click>

</v-click>

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
hideInToc: true
---

# Ownership & Borrowing

<div class="flex w-full justify-center items-center text-4xl">
<div class="mt-16">

<div class="border-2 rounded border-gray-500 text-lg overflow-hidden">
<div class="rounded-br border-b-2 border-r-2 border-gray-500 w-min px-1 bg-gray-100">
Owner
</div>

```rust {lines: false}
let mut owner = 42;
```
</div>

</div>
</div>

<v-click>
<div class="flex w-full justify-start items-center text-4xl mt-4">

<div class="flex flex-col items-center">
<div class="border-2 rounded border-gray-500 text-lg overflow-hidden w-min">
<div class="rounded-br border-b-2 border-r-2 border-gray-500 w-min px-1 bg-gray-100">
Reference
</div>
<Arrow x1="300" x2="400" y1="260" y2="200" />

```rust {lines: false}
let ref1 = &owner;
```
</div>

<div class="ml-30 mt-4 border-2 rounded border-gray-500 text-lg overflow-hidden w-min">
<div class="rounded-br border-b-2 border-r-2 border-gray-500 w-min px-1 bg-gray-100">
Reference
</div>

<Arrow x1="350" x2="420" y1="345" y2="235" />

```rust {lines: false}
let ref2 = &owner;
```
</div>

<div class="mt-4 ml-60 border-2 rounded border-gray-500 text-lg overflow-hidden w-min">
<div class="rounded-br border-b-2 border-r-2 border-gray-500 w-min px-1 bg-gray-100">
Reference
</div>

<Arrow x1="410" x2="450" y1="430" y2="238" />

```rust {lines: false}
let ref3 = &owner;
```
</div>
</div>

<div class="h-full flex flex-col items-center justify-evenly ml-8">
<div class="bg-gray-600 w-[3px] h-30"></div>
<div class="text-3xl">or</div>
<div class="bg-gray-600 w-[3px] h-30"></div>
</div>

<div class="ml-20 border-2 rounded border-gray-500 text-lg overflow-hidden">
<div class="rounded-br border-b-2 border-r-2 border-gray-500 w-min px-1 bg-gray-100">
Mutable reference
</div>

<Arrow x1="610" x2="550" y1="330" y2="238" />

```rust {lines: false}
let ref1 = &mut owner;
```
</div>

</div>
</v-click>

<!--
# Ownership
- variable is owner of memory
- responsible for cleaning up -> deallocating memory

# Borrowing
- other variables may use memory of another variable -> REFERENCE
- just one mutable at a time
- not responsible for cleaning up
-->
