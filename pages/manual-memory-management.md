# do-it-yourself

<div class="flex w-full justify-center items-baseline">

<figure>
<img src="/C-Logo.png" class="w-20"/>
<figcaption class="w-20 text-sm italic text-center">Fig.1</figcaption>
</figure>
<figure class="ml-56">
<img src="/ISO_C++_Logo.svg" class="w-20"/>
<figcaption class="w-20 text-sm italic text-center">Fig.2</figcaption>
</figure>

</div>

<v-click>
<div class="flex w-full items-end justify-between">
<figure>
<img src="/human-laptop.png" class="w-48"/>
<figcaption class="w-48 text-sm italic text-center">Fig.3</figcaption>
</figure>

<div>
<Arrow x1="250" y1="350" x2="340" y2="350" width="3" color="orange" />
</div>

<div class="mb-10">

```c {lines: false}
int main() {
    int *answer_of_everything =
        malloc(sizeof(int));
    ...
    free(answer_of_everything);
}
```

</div>

<div class="invisible">
<Arrow x1="585" y1="350" x2="665" y2="350" width="3" color="orange" />
</div>

<div class="px-2 pb-2 bg-green-600 mt-8 w-[250px] rounded border-gray-600 border-2">
<strong class="text-white">Memory</strong>
<div class="overflow-hidden flex-none w-[230px] h-[204px] bg-white rounded border-2 border-gray-500">
<div
    class="w-full h-[100px] bg-gray-200 border-b-2 border-gray-500 text-center text-4xl"
    >
    1
</div>
<div
    class="w-full h-[100px] bg-gray-200 text-center text-4xl"
    >
    42
</div>
</div>
</div>

</div>
</v-click>

<!--
### garbage collector explanation:
1. allocate memory for `Number incompleteAnswer = new Number(20)`
2. run `addOne` -> allocate memory for `Number one = new Number(1)`
3. memory is full!!!
4. try to run mulByTwo -> doesn't work -> run garbage collector
5. garbage collector identifies, that `Number one` is not needed anymore -> mark it as reusable **(deallocation)**
6. allocate memory for `new Number(a.number * 2)`
7. return to `main` -> `Number answerOfEverything` references memory previously allocated
8. print answer
-->

---
hideInToc: true
---

# do-it-yourself

<div class="flex w-full justify-center items-baseline">

<figure>
<img src="/C-Logo.png" class="w-20"/>
<figcaption class="w-20 text-sm italic text-center">Fig.1</figcaption>
</figure>
<figure class="ml-56">
<img src="/ISO_C++_Logo.svg" class="w-20"/>
<figcaption class="w-20 text-sm italic text-center">Fig.2</figcaption>
</figure>

</div>

<div class="flex w-full items-end justify-between">
<figure>
<img src="/human-laptop.png" class="w-48"/>
<figcaption class="w-48 text-sm italic text-center">Fig.3</figcaption>
</figure>

<div>
<Arrow x1="250" y1="350" x2="340" y2="350" width="3" color="gray" />
</div>

<div class="mb-10">

```c {lines: false}
int main() {
    int *answer_of_everything =
        malloc(sizeof(int));
    ...
    free(answer_of_everything);
}
```

</div>

<div>
<Arrow x1="585" y1="350" x2="665" y2="350" width="3" color="orange" />
</div>

<div class="px-2 pb-2 bg-green-600 mt-8 w-[250px] rounded border-gray-600 border-2">
<strong class="text-white">Memory</strong>
<div class="overflow-hidden flex-none w-[230px] h-[204px] bg-white rounded border-2 border-gray-500">
<div
    class="w-full h-[100px] bg-gray-200 border-b-2 border-gray-500 text-center text-4xl"
    >
    1
</div>
</div>
</div>

</div>

<!--
### garbage collector explanation:
1. allocate memory for `Number incompleteAnswer = new Number(20)`
2. run `addOne` -> allocate memory for `Number one = new Number(1)`
3. memory is full!!!
4. try to run mulByTwo -> doesn't work -> run garbage collector
5. garbage collector identifies, that `Number one` is not needed anymore -> mark it as reusable **(deallocation)**
6. allocate memory for `new Number(a.number * 2)`
7. return to `main` -> `Number answerOfEverything` references memory previously allocated
8. print answer
-->
