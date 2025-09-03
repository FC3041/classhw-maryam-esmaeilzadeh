namespace exam3;

class Program
{
    static void Main(string[] args)
    {
        Console.WriteLine("Hello, World!");


    }


}
public class Animal
{
    public virtual string MakeSound()
    {
        return "Some generic animal sound";
    }
}
    
public class Dog : Animal
{
    public override string MakeSound()
    {
        return "Woof";
    }
}

public class MyPointType1
{
    public int X;
    public int Y;

}

public struct MyPointType2
{
    public int X;
    public int Y;

}

// public class Comparer<T> : IComparable<T>
// {
//     T x;
//     T y;

//     public Comparer(T x2, T y2)
//     {
//         x = x2;
//         y = y2;
//     }

//     public string GetLarger()
//     {
//         int l = CompareTo(x.length , y.length);
//         if (l == 1) { return x; }
//         if (l == -1) { return y; }

//     }
//     public int GetLarger()
//     {
//         if (x > y) { return x; }
//         if (x < y) { return y; }
//         if (x = y) { return x; }

//     }
//     public object GetLarger()
//     {
//         return (GetLarger(x.x , y.x));
//     }
//     public int CompareTo(int a, int b)
//     {
//         if (a > b) { return 1; }
//         if (a < b) { return -1; }
//         if (a == b) { return 1; }

//     }

//}

public interface IDisposable
{
    void Dispose();
}


public class ResourceManager : IDisposable
{
    public bool IsDisposed = false;


    // ~ResourceManager()
    // {
    //     this.IsDisposed = true;
    // }

    public void Dispose()
    {
        this.IsDisposed = true;
    }

    // protected virtual void Dispose(bool disposing)
    // {
    //     if (!this.IsDisposed)
    //     {

    //         this.IsDisposed = true;
    //     }
    // }


    // ~ResourceManager()
    // {
    //     this.Dispose(true);
    // }

    // public virtual void Dispose()
    // {
    //     this.Dispose(true);        
    // }

    // protected virtual void Dispose(bool x)
    // {
    //     if (!this.IsDisposed)
    //     {
    //         this.IsDisposed = true;
    //     }
    // }
}


// public static class LinqProblems()
// {
// }
 