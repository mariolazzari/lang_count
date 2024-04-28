var start = DateTime.Now;
ulong count = 1000000000;

while (count > 0)
{
    count--;
}

var stop = DateTime.Now;
Console.WriteLine(stop - start);

