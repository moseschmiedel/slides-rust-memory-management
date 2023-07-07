# Hiring a garbage collector

<div class="flex w-full justify-around items-baseline">

<figure>
<img src="/Java-Logo.png" class="w-12"/>
<figcaption class="w-12 text-sm italic text-center">Fig.4</figcaption>
</figure>
<figure>
<img src="/JavaScript-logo.png" class="w-20"/>
<figcaption class="w-20 text-sm italic text-center">Fig.5</figcaption>
</figure>
<figure>
<img src="/Python_logo_and_wordmark.svg" class="w-56"/>
<figcaption class="w-56 text-sm italic text-center">Fig.6</figcaption>
</figure>

</div>

<v-click>
<div class="flex w-full items-end justify-center">
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

<div>
<Arrow x1="390" y1="300" x2="550" y2="300" width="3" color="orange" />
</div>

<figure class="ml-48">
<img src="/Müllauto.JPG" class="w-72"/>
<figcaption class="w-72 text-sm italic text-center">Fig.7 - garbage collector</figcaption>
</figure>

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

# Hiring a garbage collector

<div class="flex w-full justify-around items-baseline">

<figure>
<img src="/Java-Logo.png" class="w-12"/>
<figcaption class="w-12 text-sm italic text-center">Fig.4</figcaption>
</figure>
<figure>
<img src="/JavaScript-logo.png" class="w-20"/>
<figcaption class="w-20 text-sm italic text-center">Fig.5</figcaption>
</figure>
<figure>
<img src="/Python_logo_and_wordmark.svg" class="w-56"/>
<figcaption class="w-56 text-sm italic text-center">Fig.6</figcaption>
</figure>

</div>

<div class="flex w-full items-end justify-center">
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

<div>
<Arrow x1="390" y1="300" x2="550" y2="300" width="3" color="gray" />
<Arrow x1="550" y1="400" x2="390" y2="400" width="3" color="orange" />
</div>

<figure class="ml-48">
<img src="/Müllauto.JPG" class="w-72"/>
<figcaption class="w-72 text-sm italic text-center">Fig.7 - garbage collector</figcaption>
</figure>

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
