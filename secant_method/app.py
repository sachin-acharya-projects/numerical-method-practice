from math import pow
def f(x): return pow(x, 3) - 2 * x - 5

def main():
    x0: float = 0
    x1: float = 0
    x2: float = 0
    f0: float = 0
    f1: float = 0
    f2: float = 0
    e: float = 0
    step: int = 1
    N: int = 0
    
    x0, x1 = input("What are the initial guesses x0 and x1 are? ").split(" ")
    error = input("What is the tolerable error? ")
    FIX: int = len(error.split(".")[1]) - 1
    e = float(error)
    N = int(input("What is the maximum number of iteration? "))
    x0 = float(x0)
    x1 = float(x1)
    print("Step\t\tx0\tx1\tx2\tf(x2)")
    f2 = 0
    while (True):
        f0 = f(x0)
        f1 = f(x1)
        
        if (f0 == f1):
            print("Mathematical Error")
            exit(0)
            
        x2 = x1 - (x1 - x0) * f1 / (f1 - f0)
        f2 = f(x2)
        
        print(f"{step:0<{FIX}}\t\t{x0:.{FIX}f}\t{x1:.{FIX}f}\t{x2:.{FIX}f}\t{f2:.{FIX}f}")
        x0 = x1
        f0 = f1
        x1 = x2
        f1 = f2
        
        step += 1
        
        if step > N:
            print("Not Convergent")
            exit(0)
        if not abs(f2) > e: break
    print(f"\nThe ROOT is {x2:.{FIX}f}")

if __name__ == "__main__":
    main()