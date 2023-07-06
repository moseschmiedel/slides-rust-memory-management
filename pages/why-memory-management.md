# Why do we need Memory Management?

<div class="flex w-full">
<div class="px-2 pb-2 bg-green-600 mt-4 rounded border-gray-600 border-2">
<strong class="text-white">Memory</strong>
<div class="flex-none w-[400px] h-[380px] overflow-hidden bg-white rounded border-2 border-gray-500 mt-2">
<div
    class="w-full h-[50px] bg-gray-200 border-b-2 border-gray-500 text-center text-4xl"
    >
1
</div>
</div>
</div>
<div class="ml-3">

```js{all}{lines: false}
let foo = 1;
```

</div>
</div>

<style>
code {
    font-size: 3em;
    line-height: normal;
}
</style>

<!--
1. Picture of RAM (Block of Memory)
2. declare variable
3. use memory for variable *(allocation)*
4. declare another variable
3. allocate more memory
3. memory cannot get reused because it's only declared when we need memory,
    not when we don't need it anymore
5. we don't have infinite memory, so we need to reuse the already allocated
memory at some point in the future
-->

---
hideInToc: true
---

# Why do we need Memory Management?

<div class="flex w-full">
<div class="px-2 pb-2 bg-green-600 mt-4 rounded border-gray-600 border-2">
<strong class="text-white">Memory</strong>
<div class="flex-none w-[400px] h-[380px] overflow-hidden bg-white rounded border-2 border-gray-500 mt-2">
<div
    class="w-full h-[50px] bg-gray-200 border-b-2 border-gray-500 text-center text-4xl"
    >
1
</div>
<div
    class="w-full h-[50px] bg-gray-200 border-b-2 border-gray-500 text-center text-4xl"
    >
42
</div>
</div>
</div>
<div class="ml-3">

```js{all}{lines: false}
let foo = 1;
let foo = 42;
```

<style>
code {
    font-size: 3em;
    line-height: normal;
}
</style>

</div>
</div>

<!--
1. Picture of RAM (Block of Memory)
2. declare variable
3. use memory for variable *(allocation)*
4. declare another variable
3. allocate more memory
3. memory cannot get reused because it's only declared when we need memory,
    not when we don't need it anymore
5. we don't have infinite memory, so we need to reuse the already allocated
memory at some point in the future
-->

---
hideInToc: true
---

# Why do we need Memory Management?

<div class="flex w-full">
<div class="px-2 pb-2 bg-green-600 mt-4 rounded border-gray-600 border-2">
<strong class="text-white">Memory</strong>
<div class="flex-none w-[400px] h-[380px] overflow-hidden bg-white rounded border-2 border-gray-500 mt-2">
<div
    class="w-full h-[50px] bg-gray-200 border-b-2 border-gray-500 text-center text-4xl"
    >
1
</div>
<div
    class="w-full h-[50px] bg-gray-200 border-b-2 border-gray-500 text-center text-4xl"
    >
42
</div>
<div
    class="flex w-full h-[50px] bg-gray-200 border-b-2 border-gray-500 text-center text-4xl "
    >
<div class="self-center w-full h-10 text-center i-tabler-dots-vertical"/>
</div>
</div>
</div>
<div class="ml-3">

```js{all}{lines: false}
let foo = 1;
let foo = 42;
```
<div class="self-center w-full h-10 text-center i-tabler-dots-vertical"/>

<style>
code {
    font-size: 3em;
    line-height: normal;
}
</style>

</div>
</div>

<!--
1. Picture of RAM (Block of Memory)
2. declare variable
3. use memory for variable *(allocation)*
4. declare another variable
3. allocate more memory
3. memory cannot get reused because it's only declared when we need memory,
    not when we don't need it anymore
5. we don't have infinite memory, so we need to reuse the already allocated
memory at some point in the future
-->
