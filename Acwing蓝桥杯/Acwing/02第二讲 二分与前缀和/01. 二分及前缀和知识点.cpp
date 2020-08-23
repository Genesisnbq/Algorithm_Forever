// todo 整数二分
// 1. 确定一个区间, 使得目标值一定在区间中
// 2. 想一个性质, 满足: 1. 性质具有二段性 95%
//                   2. 答案是二段性的分界点
//                   |------------------------|
//                   |------------| |---------|
// todo               L                        R
//                 答案有两种, 一种是左半段的终点, 另一种是右半段的起点
// todo            因为整个二分是离散的值, 所以 Mid 可以在左也可以在右
//答案在左区间的终点: [L,mid-1]   [mid,R]
//                 如果 mid 在左半边, 那么答案必然在右半边
//                 否则 答案在左半边
while(l < r)
{
    mid = (l + r + 1) / 2; //上取整(解决了 l=r-1的时候   mid=(l+r)/2=l r不变,死循环了)
    if(mid在左区间)
        l = mid; //在写 l = mid 的时候, 在上面补上+1就行啦
    else
        r = mid - 1;
}

//答案在右区间的起点: [L,mid]   [mid+1,R]
//                 如果 mid 在左半边, 那么答案必然在左半边
//                 否则答案在右半边
while(l < r)
{
    mid = (l + r) / 2;
    if(mid在左区间)
        l = mid + 1;
    else
        r = mid;
}

// todo  真正写代码的时候, 也不需要真正把图画出来, 只需要看  判断的时候写的是l=mid 还是r=mid
// todo  如果是 l=mid 就在上面补上+1


// 三分法
