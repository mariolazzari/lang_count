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
