# One bilion counter

## NodeJS

Execution time: **0.774199s**

```sh
node app
```


```js
console.time("count");

let i = 1000000000;
while (i > 0) {
  i--;
}

console.timeEnd("count");
```

## Rust

Execution time: **0.000000131s**

```sh
cargo run --release
```

```rust
use std::time::Instant;

fn main() {
    let start: Instant = Instant::now();
    let mut count: u32 = 1_000_000_000;

    while count > 0 {
        count -= 1;
    }
    let elapsed: f64 = start.elapsed().as_secs_f64();

    println!("{}", elapsed);
}
```

## C

Execution time: **0.000000s**

```sh
gcc -O2 -o count  main.c 
```

```c
#include <stdio.h>
#include <time.h>

int main()
{
    unsigned long count = 1000000000;
    time_t start_t, end_t;
    double diff_t;

    time(&start_t);
    while (count > 0)
    {
        count--;
    }
    time(&end_t);
    diff_t = difftime(end_t, start_t);

    printf("%f", diff_t);

    return 0;
}
```
