#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000003 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000004 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000005 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000006 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000007 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000008 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x00000009 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectManyIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000A System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000B System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000C System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Concat(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000D System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::ConcatIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000E System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Union(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000F System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::UnionIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000010 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Intersect(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000011 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::IntersectIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000012 TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000013 System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000014 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Cast(System.Collections.IEnumerable)
// 0x00000015 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::CastIterator(System.Collections.IEnumerable)
// 0x00000016 TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000017 TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000018 TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000019 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty()
// 0x0000001A System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001B System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001C System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001D System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x0000001E System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x0000001F System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x00000020 TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x00000021 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x00000022 System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x00000023 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x00000024 System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000025 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000026 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000027 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000028 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000029 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x0000002A System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000002B System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x0000002C System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x0000002D System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x0000002E System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002F System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000030 System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x00000031 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x00000032 System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x00000033 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000034 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000035 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000036 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000037 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000038 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000039 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000003A System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000003B System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x0000003C System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x0000003D System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x0000003E System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000003F System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000040 System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000041 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x00000042 System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x00000043 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000044 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000045 System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000046 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x00000047 System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x00000048 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000049 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000004A System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x0000004B System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x0000004C System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x0000004D TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x0000004E System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::.ctor(System.Int32)
// 0x0000004F System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.IDisposable.Dispose()
// 0x00000050 System.Boolean System.Linq.Enumerable/<SelectManyIterator>d__17`2::MoveNext()
// 0x00000051 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally1()
// 0x00000052 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally2()
// 0x00000053 TResult System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x00000054 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.Reset()
// 0x00000055 System.Object System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.get_Current()
// 0x00000056 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000057 System.Collections.IEnumerator System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerable.GetEnumerator()
// 0x00000058 System.Void System.Linq.Enumerable/<ConcatIterator>d__59`1::.ctor(System.Int32)
// 0x00000059 System.Void System.Linq.Enumerable/<ConcatIterator>d__59`1::System.IDisposable.Dispose()
// 0x0000005A System.Boolean System.Linq.Enumerable/<ConcatIterator>d__59`1::MoveNext()
// 0x0000005B System.Void System.Linq.Enumerable/<ConcatIterator>d__59`1::<>m__Finally1()
// 0x0000005C System.Void System.Linq.Enumerable/<ConcatIterator>d__59`1::<>m__Finally2()
// 0x0000005D TSource System.Linq.Enumerable/<ConcatIterator>d__59`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x0000005E System.Void System.Linq.Enumerable/<ConcatIterator>d__59`1::System.Collections.IEnumerator.Reset()
// 0x0000005F System.Object System.Linq.Enumerable/<ConcatIterator>d__59`1::System.Collections.IEnumerator.get_Current()
// 0x00000060 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<ConcatIterator>d__59`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000061 System.Collections.IEnumerator System.Linq.Enumerable/<ConcatIterator>d__59`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000062 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::.ctor(System.Int32)
// 0x00000063 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::System.IDisposable.Dispose()
// 0x00000064 System.Boolean System.Linq.Enumerable/<UnionIterator>d__71`1::MoveNext()
// 0x00000065 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::<>m__Finally1()
// 0x00000066 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::<>m__Finally2()
// 0x00000067 TSource System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000068 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerator.Reset()
// 0x00000069 System.Object System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerator.get_Current()
// 0x0000006A System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000006B System.Collections.IEnumerator System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000006C System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::.ctor(System.Int32)
// 0x0000006D System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::System.IDisposable.Dispose()
// 0x0000006E System.Boolean System.Linq.Enumerable/<IntersectIterator>d__74`1::MoveNext()
// 0x0000006F System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::<>m__Finally1()
// 0x00000070 TSource System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000071 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerator.Reset()
// 0x00000072 System.Object System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerator.get_Current()
// 0x00000073 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000074 System.Collections.IEnumerator System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000075 System.Void System.Linq.Enumerable/<CastIterator>d__99`1::.ctor(System.Int32)
// 0x00000076 System.Void System.Linq.Enumerable/<CastIterator>d__99`1::System.IDisposable.Dispose()
// 0x00000077 System.Boolean System.Linq.Enumerable/<CastIterator>d__99`1::MoveNext()
// 0x00000078 System.Void System.Linq.Enumerable/<CastIterator>d__99`1::<>m__Finally1()
// 0x00000079 TResult System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x0000007A System.Void System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerator.Reset()
// 0x0000007B System.Object System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerator.get_Current()
// 0x0000007C System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x0000007D System.Collections.IEnumerator System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000007E System.Void System.Linq.EmptyEnumerable`1::.cctor()
// 0x0000007F System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000080 System.Void System.Linq.Set`1::.ctor(System.Collections.Generic.IEqualityComparer`1<TElement>)
// 0x00000081 System.Boolean System.Linq.Set`1::Add(TElement)
// 0x00000082 System.Boolean System.Linq.Set`1::Remove(TElement)
// 0x00000083 System.Boolean System.Linq.Set`1::Find(TElement,System.Boolean)
// 0x00000084 System.Void System.Linq.Set`1::Resize()
// 0x00000085 System.Int32 System.Linq.Set`1::InternalGetHashCode(TElement)
// 0x00000086 System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x00000087 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000088 System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000089 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000008A System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x0000008B System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x0000008C System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x0000008D System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x0000008E TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x0000008F System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x00000090 System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x00000091 System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000092 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000093 System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x00000094 System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x00000095 System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x00000096 System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x00000097 System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x00000098 System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x00000099 System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x0000009A System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x0000009B System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x0000009C TElement[] System.Linq.Buffer`1::ToArray()
// 0x0000009D System.Void System.Collections.Generic.BitHelper::.ctor(System.Int32*,System.Int32)
extern void BitHelper__ctor_m2770BB414919277B2CF522840B54819F5082CD80 (void);
// 0x0000009E System.Void System.Collections.Generic.BitHelper::.ctor(System.Int32[],System.Int32)
extern void BitHelper__ctor_m7A8E43BE1D2A4ED086E708B6FFE693322FC9D2EB (void);
// 0x0000009F System.Void System.Collections.Generic.BitHelper::MarkBit(System.Int32)
extern void BitHelper_MarkBit_m1C6D787021BEA9D02DCA0762C09E5D443E04A86B (void);
// 0x000000A0 System.Boolean System.Collections.Generic.BitHelper::IsMarked(System.Int32)
extern void BitHelper_IsMarked_m6036A81F50D820045D3F62E52D57098A332AB608 (void);
// 0x000000A1 System.Int32 System.Collections.Generic.BitHelper::ToIntArrayLength(System.Int32)
extern void BitHelper_ToIntArrayLength_m32A0B1B014CB81891165AC325514784171C8E7B3 (void);
// 0x000000A2 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x000000A3 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x000000A4 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000A5 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
// 0x000000A6 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000A7 System.Void System.Collections.Generic.HashSet`1::CopyFrom(System.Collections.Generic.HashSet`1<T>)
// 0x000000A8 System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x000000A9 System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x000000AA System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x000000AB System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x000000AC System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x000000AD System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x000000AE System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x000000AF System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x000000B0 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x000000B1 System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x000000B2 System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000B3 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x000000B4 System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x000000B5 System.Void System.Collections.Generic.HashSet`1::UnionWith(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000B6 System.Void System.Collections.Generic.HashSet`1::IntersectWith(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000B7 System.Void System.Collections.Generic.HashSet`1::ExceptWith(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000B8 System.Boolean System.Collections.Generic.HashSet`1::SetEquals(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000B9 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x000000BA System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x000000BB System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::get_Comparer()
// 0x000000BC System.Void System.Collections.Generic.HashSet`1::TrimExcess()
// 0x000000BD System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x000000BE System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x000000BF System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x000000C0 System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x000000C1 System.Void System.Collections.Generic.HashSet`1::AddValue(System.Int32,System.Int32,T)
// 0x000000C2 System.Boolean System.Collections.Generic.HashSet`1::ContainsAllElements(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000C3 System.Void System.Collections.Generic.HashSet`1::IntersectWithHashSetWithSameEC(System.Collections.Generic.HashSet`1<T>)
// 0x000000C4 System.Void System.Collections.Generic.HashSet`1::IntersectWithEnumerable(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000C5 System.Int32 System.Collections.Generic.HashSet`1::InternalIndexOf(T)
// 0x000000C6 System.Collections.Generic.HashSet`1/ElementCount<T> System.Collections.Generic.HashSet`1::CheckUniqueAndUnfoundElements(System.Collections.Generic.IEnumerable`1<T>,System.Boolean)
// 0x000000C7 System.Boolean System.Collections.Generic.HashSet`1::AreEqualityComparersEqual(System.Collections.Generic.HashSet`1<T>,System.Collections.Generic.HashSet`1<T>)
// 0x000000C8 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x000000C9 System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x000000CA System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x000000CB System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x000000CC T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x000000CD System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x000000CE System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[206] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	BitHelper__ctor_m2770BB414919277B2CF522840B54819F5082CD80,
	BitHelper__ctor_m7A8E43BE1D2A4ED086E708B6FFE693322FC9D2EB,
	BitHelper_MarkBit_m1C6D787021BEA9D02DCA0762C09E5D443E04A86B,
	BitHelper_IsMarked_m6036A81F50D820045D3F62E52D57098A332AB608,
	BitHelper_ToIntArrayLength_m32A0B1B014CB81891165AC325514784171C8E7B3,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[206] = 
{
	6523,
	6720,
	6720,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	1490,
	1879,
	3579,
	3044,
	6413,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[58] = 
{
	{ 0x02000004, { 79, 4 } },
	{ 0x02000005, { 83, 9 } },
	{ 0x02000006, { 94, 7 } },
	{ 0x02000007, { 103, 10 } },
	{ 0x02000008, { 115, 11 } },
	{ 0x02000009, { 129, 9 } },
	{ 0x0200000A, { 141, 12 } },
	{ 0x0200000B, { 156, 1 } },
	{ 0x0200000C, { 157, 2 } },
	{ 0x0200000D, { 159, 12 } },
	{ 0x0200000E, { 171, 9 } },
	{ 0x0200000F, { 180, 12 } },
	{ 0x02000010, { 192, 12 } },
	{ 0x02000011, { 204, 6 } },
	{ 0x02000012, { 210, 2 } },
	{ 0x02000014, { 212, 8 } },
	{ 0x02000016, { 220, 3 } },
	{ 0x02000017, { 225, 5 } },
	{ 0x02000018, { 230, 7 } },
	{ 0x02000019, { 237, 3 } },
	{ 0x0200001A, { 240, 7 } },
	{ 0x0200001B, { 247, 4 } },
	{ 0x0200001D, { 251, 43 } },
	{ 0x02000020, { 294, 2 } },
	{ 0x06000004, { 0, 10 } },
	{ 0x06000005, { 10, 10 } },
	{ 0x06000006, { 20, 5 } },
	{ 0x06000007, { 25, 5 } },
	{ 0x06000008, { 30, 1 } },
	{ 0x06000009, { 31, 2 } },
	{ 0x0600000A, { 33, 2 } },
	{ 0x0600000B, { 35, 1 } },
	{ 0x0600000C, { 36, 1 } },
	{ 0x0600000D, { 37, 2 } },
	{ 0x0600000E, { 39, 1 } },
	{ 0x0600000F, { 40, 2 } },
	{ 0x06000010, { 42, 1 } },
	{ 0x06000011, { 43, 2 } },
	{ 0x06000012, { 45, 3 } },
	{ 0x06000013, { 48, 2 } },
	{ 0x06000014, { 50, 2 } },
	{ 0x06000015, { 52, 2 } },
	{ 0x06000016, { 54, 4 } },
	{ 0x06000017, { 58, 4 } },
	{ 0x06000018, { 62, 3 } },
	{ 0x06000019, { 65, 1 } },
	{ 0x0600001A, { 66, 1 } },
	{ 0x0600001B, { 67, 3 } },
	{ 0x0600001C, { 70, 2 } },
	{ 0x0600001D, { 72, 2 } },
	{ 0x0600001E, { 74, 5 } },
	{ 0x0600002E, { 92, 2 } },
	{ 0x06000033, { 101, 2 } },
	{ 0x06000038, { 113, 2 } },
	{ 0x0600003E, { 126, 3 } },
	{ 0x06000043, { 138, 3 } },
	{ 0x06000048, { 153, 3 } },
	{ 0x06000089, { 223, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[296] = 
{
	{ (Il2CppRGCTXDataType)2, 5272 },
	{ (Il2CppRGCTXDataType)3, 17390 },
	{ (Il2CppRGCTXDataType)2, 8059 },
	{ (Il2CppRGCTXDataType)2, 7241 },
	{ (Il2CppRGCTXDataType)3, 33484 },
	{ (Il2CppRGCTXDataType)2, 5466 },
	{ (Il2CppRGCTXDataType)2, 7248 },
	{ (Il2CppRGCTXDataType)3, 33509 },
	{ (Il2CppRGCTXDataType)2, 7243 },
	{ (Il2CppRGCTXDataType)3, 33492 },
	{ (Il2CppRGCTXDataType)2, 5273 },
	{ (Il2CppRGCTXDataType)3, 17391 },
	{ (Il2CppRGCTXDataType)2, 8089 },
	{ (Il2CppRGCTXDataType)2, 7250 },
	{ (Il2CppRGCTXDataType)3, 33517 },
	{ (Il2CppRGCTXDataType)2, 5500 },
	{ (Il2CppRGCTXDataType)2, 7258 },
	{ (Il2CppRGCTXDataType)3, 33556 },
	{ (Il2CppRGCTXDataType)2, 7254 },
	{ (Il2CppRGCTXDataType)3, 33535 },
	{ (Il2CppRGCTXDataType)2, 1597 },
	{ (Il2CppRGCTXDataType)3, 117 },
	{ (Il2CppRGCTXDataType)3, 118 },
	{ (Il2CppRGCTXDataType)2, 3457 },
	{ (Il2CppRGCTXDataType)3, 13878 },
	{ (Il2CppRGCTXDataType)2, 1598 },
	{ (Il2CppRGCTXDataType)3, 123 },
	{ (Il2CppRGCTXDataType)3, 124 },
	{ (Il2CppRGCTXDataType)2, 3465 },
	{ (Il2CppRGCTXDataType)3, 13880 },
	{ (Il2CppRGCTXDataType)3, 37951 },
	{ (Il2CppRGCTXDataType)2, 1614 },
	{ (Il2CppRGCTXDataType)3, 477 },
	{ (Il2CppRGCTXDataType)2, 6399 },
	{ (Il2CppRGCTXDataType)3, 26090 },
	{ (Il2CppRGCTXDataType)3, 15082 },
	{ (Il2CppRGCTXDataType)3, 37908 },
	{ (Il2CppRGCTXDataType)2, 1602 },
	{ (Il2CppRGCTXDataType)3, 147 },
	{ (Il2CppRGCTXDataType)3, 37979 },
	{ (Il2CppRGCTXDataType)2, 1618 },
	{ (Il2CppRGCTXDataType)3, 513 },
	{ (Il2CppRGCTXDataType)3, 37928 },
	{ (Il2CppRGCTXDataType)2, 1612 },
	{ (Il2CppRGCTXDataType)3, 463 },
	{ (Il2CppRGCTXDataType)2, 1978 },
	{ (Il2CppRGCTXDataType)3, 2413 },
	{ (Il2CppRGCTXDataType)3, 2414 },
	{ (Il2CppRGCTXDataType)2, 5467 },
	{ (Il2CppRGCTXDataType)3, 18823 },
	{ (Il2CppRGCTXDataType)2, 3986 },
	{ (Il2CppRGCTXDataType)3, 37894 },
	{ (Il2CppRGCTXDataType)2, 1600 },
	{ (Il2CppRGCTXDataType)3, 133 },
	{ (Il2CppRGCTXDataType)2, 4595 },
	{ (Il2CppRGCTXDataType)2, 3743 },
	{ (Il2CppRGCTXDataType)2, 3998 },
	{ (Il2CppRGCTXDataType)2, 4163 },
	{ (Il2CppRGCTXDataType)2, 4596 },
	{ (Il2CppRGCTXDataType)2, 3744 },
	{ (Il2CppRGCTXDataType)2, 3999 },
	{ (Il2CppRGCTXDataType)2, 4164 },
	{ (Il2CppRGCTXDataType)2, 4000 },
	{ (Il2CppRGCTXDataType)2, 4165 },
	{ (Il2CppRGCTXDataType)3, 13879 },
	{ (Il2CppRGCTXDataType)2, 3178 },
	{ (Il2CppRGCTXDataType)2, 3982 },
	{ (Il2CppRGCTXDataType)2, 3983 },
	{ (Il2CppRGCTXDataType)2, 4161 },
	{ (Il2CppRGCTXDataType)3, 13877 },
	{ (Il2CppRGCTXDataType)2, 3742 },
	{ (Il2CppRGCTXDataType)2, 3997 },
	{ (Il2CppRGCTXDataType)2, 3741 },
	{ (Il2CppRGCTXDataType)3, 37916 },
	{ (Il2CppRGCTXDataType)3, 12859 },
	{ (Il2CppRGCTXDataType)2, 3336 },
	{ (Il2CppRGCTXDataType)2, 3985 },
	{ (Il2CppRGCTXDataType)2, 4162 },
	{ (Il2CppRGCTXDataType)2, 4303 },
	{ (Il2CppRGCTXDataType)3, 17392 },
	{ (Il2CppRGCTXDataType)3, 17394 },
	{ (Il2CppRGCTXDataType)2, 964 },
	{ (Il2CppRGCTXDataType)3, 17393 },
	{ (Il2CppRGCTXDataType)3, 17402 },
	{ (Il2CppRGCTXDataType)2, 5276 },
	{ (Il2CppRGCTXDataType)2, 7244 },
	{ (Il2CppRGCTXDataType)3, 33493 },
	{ (Il2CppRGCTXDataType)3, 17403 },
	{ (Il2CppRGCTXDataType)2, 4054 },
	{ (Il2CppRGCTXDataType)2, 4196 },
	{ (Il2CppRGCTXDataType)3, 13888 },
	{ (Il2CppRGCTXDataType)3, 37897 },
	{ (Il2CppRGCTXDataType)2, 7255 },
	{ (Il2CppRGCTXDataType)3, 33536 },
	{ (Il2CppRGCTXDataType)3, 17395 },
	{ (Il2CppRGCTXDataType)2, 5275 },
	{ (Il2CppRGCTXDataType)2, 7242 },
	{ (Il2CppRGCTXDataType)3, 33485 },
	{ (Il2CppRGCTXDataType)3, 13887 },
	{ (Il2CppRGCTXDataType)3, 17396 },
	{ (Il2CppRGCTXDataType)3, 37896 },
	{ (Il2CppRGCTXDataType)2, 7251 },
	{ (Il2CppRGCTXDataType)3, 33518 },
	{ (Il2CppRGCTXDataType)3, 17409 },
	{ (Il2CppRGCTXDataType)2, 5277 },
	{ (Il2CppRGCTXDataType)2, 7249 },
	{ (Il2CppRGCTXDataType)3, 33510 },
	{ (Il2CppRGCTXDataType)3, 18910 },
	{ (Il2CppRGCTXDataType)3, 10260 },
	{ (Il2CppRGCTXDataType)3, 13889 },
	{ (Il2CppRGCTXDataType)3, 10259 },
	{ (Il2CppRGCTXDataType)3, 17410 },
	{ (Il2CppRGCTXDataType)3, 37898 },
	{ (Il2CppRGCTXDataType)2, 7259 },
	{ (Il2CppRGCTXDataType)3, 33557 },
	{ (Il2CppRGCTXDataType)3, 17423 },
	{ (Il2CppRGCTXDataType)2, 5279 },
	{ (Il2CppRGCTXDataType)2, 7257 },
	{ (Il2CppRGCTXDataType)3, 33538 },
	{ (Il2CppRGCTXDataType)3, 17424 },
	{ (Il2CppRGCTXDataType)2, 4057 },
	{ (Il2CppRGCTXDataType)2, 4199 },
	{ (Il2CppRGCTXDataType)3, 13893 },
	{ (Il2CppRGCTXDataType)3, 13892 },
	{ (Il2CppRGCTXDataType)2, 7246 },
	{ (Il2CppRGCTXDataType)3, 33495 },
	{ (Il2CppRGCTXDataType)3, 37902 },
	{ (Il2CppRGCTXDataType)2, 7256 },
	{ (Il2CppRGCTXDataType)3, 33537 },
	{ (Il2CppRGCTXDataType)3, 17416 },
	{ (Il2CppRGCTXDataType)2, 5278 },
	{ (Il2CppRGCTXDataType)2, 7253 },
	{ (Il2CppRGCTXDataType)3, 33520 },
	{ (Il2CppRGCTXDataType)3, 13891 },
	{ (Il2CppRGCTXDataType)3, 13890 },
	{ (Il2CppRGCTXDataType)3, 17417 },
	{ (Il2CppRGCTXDataType)2, 7245 },
	{ (Il2CppRGCTXDataType)3, 33494 },
	{ (Il2CppRGCTXDataType)3, 37901 },
	{ (Il2CppRGCTXDataType)2, 7252 },
	{ (Il2CppRGCTXDataType)3, 33519 },
	{ (Il2CppRGCTXDataType)3, 17430 },
	{ (Il2CppRGCTXDataType)2, 5280 },
	{ (Il2CppRGCTXDataType)2, 7261 },
	{ (Il2CppRGCTXDataType)3, 33559 },
	{ (Il2CppRGCTXDataType)3, 18911 },
	{ (Il2CppRGCTXDataType)3, 10262 },
	{ (Il2CppRGCTXDataType)3, 13895 },
	{ (Il2CppRGCTXDataType)3, 13894 },
	{ (Il2CppRGCTXDataType)3, 10261 },
	{ (Il2CppRGCTXDataType)3, 17431 },
	{ (Il2CppRGCTXDataType)2, 7247 },
	{ (Il2CppRGCTXDataType)3, 33496 },
	{ (Il2CppRGCTXDataType)3, 37903 },
	{ (Il2CppRGCTXDataType)2, 7260 },
	{ (Il2CppRGCTXDataType)3, 33558 },
	{ (Il2CppRGCTXDataType)3, 13884 },
	{ (Il2CppRGCTXDataType)3, 13885 },
	{ (Il2CppRGCTXDataType)3, 13896 },
	{ (Il2CppRGCTXDataType)3, 480 },
	{ (Il2CppRGCTXDataType)3, 479 },
	{ (Il2CppRGCTXDataType)2, 4046 },
	{ (Il2CppRGCTXDataType)2, 4190 },
	{ (Il2CppRGCTXDataType)3, 13886 },
	{ (Il2CppRGCTXDataType)2, 4065 },
	{ (Il2CppRGCTXDataType)2, 4213 },
	{ (Il2CppRGCTXDataType)3, 482 },
	{ (Il2CppRGCTXDataType)2, 1327 },
	{ (Il2CppRGCTXDataType)2, 1615 },
	{ (Il2CppRGCTXDataType)3, 478 },
	{ (Il2CppRGCTXDataType)3, 481 },
	{ (Il2CppRGCTXDataType)3, 149 },
	{ (Il2CppRGCTXDataType)3, 150 },
	{ (Il2CppRGCTXDataType)2, 4040 },
	{ (Il2CppRGCTXDataType)2, 4186 },
	{ (Il2CppRGCTXDataType)3, 152 },
	{ (Il2CppRGCTXDataType)2, 957 },
	{ (Il2CppRGCTXDataType)2, 1603 },
	{ (Il2CppRGCTXDataType)3, 148 },
	{ (Il2CppRGCTXDataType)3, 151 },
	{ (Il2CppRGCTXDataType)3, 515 },
	{ (Il2CppRGCTXDataType)3, 516 },
	{ (Il2CppRGCTXDataType)2, 6920 },
	{ (Il2CppRGCTXDataType)3, 31204 },
	{ (Il2CppRGCTXDataType)2, 4049 },
	{ (Il2CppRGCTXDataType)2, 4192 },
	{ (Il2CppRGCTXDataType)3, 31205 },
	{ (Il2CppRGCTXDataType)3, 518 },
	{ (Il2CppRGCTXDataType)2, 962 },
	{ (Il2CppRGCTXDataType)2, 1619 },
	{ (Il2CppRGCTXDataType)3, 514 },
	{ (Il2CppRGCTXDataType)3, 517 },
	{ (Il2CppRGCTXDataType)3, 465 },
	{ (Il2CppRGCTXDataType)2, 6918 },
	{ (Il2CppRGCTXDataType)3, 31201 },
	{ (Il2CppRGCTXDataType)2, 4043 },
	{ (Il2CppRGCTXDataType)2, 4188 },
	{ (Il2CppRGCTXDataType)3, 31202 },
	{ (Il2CppRGCTXDataType)3, 31203 },
	{ (Il2CppRGCTXDataType)3, 467 },
	{ (Il2CppRGCTXDataType)2, 959 },
	{ (Il2CppRGCTXDataType)2, 1613 },
	{ (Il2CppRGCTXDataType)3, 464 },
	{ (Il2CppRGCTXDataType)3, 466 },
	{ (Il2CppRGCTXDataType)3, 135 },
	{ (Il2CppRGCTXDataType)2, 955 },
	{ (Il2CppRGCTXDataType)3, 137 },
	{ (Il2CppRGCTXDataType)2, 1601 },
	{ (Il2CppRGCTXDataType)3, 134 },
	{ (Il2CppRGCTXDataType)3, 136 },
	{ (Il2CppRGCTXDataType)2, 8098 },
	{ (Il2CppRGCTXDataType)2, 3179 },
	{ (Il2CppRGCTXDataType)3, 12900 },
	{ (Il2CppRGCTXDataType)2, 3354 },
	{ (Il2CppRGCTXDataType)2, 8219 },
	{ (Il2CppRGCTXDataType)3, 31198 },
	{ (Il2CppRGCTXDataType)3, 31199 },
	{ (Il2CppRGCTXDataType)2, 4318 },
	{ (Il2CppRGCTXDataType)3, 31200 },
	{ (Il2CppRGCTXDataType)2, 856 },
	{ (Il2CppRGCTXDataType)2, 1606 },
	{ (Il2CppRGCTXDataType)3, 424 },
	{ (Il2CppRGCTXDataType)3, 26077 },
	{ (Il2CppRGCTXDataType)2, 6400 },
	{ (Il2CppRGCTXDataType)3, 26091 },
	{ (Il2CppRGCTXDataType)2, 1979 },
	{ (Il2CppRGCTXDataType)3, 2415 },
	{ (Il2CppRGCTXDataType)3, 26083 },
	{ (Il2CppRGCTXDataType)3, 10217 },
	{ (Il2CppRGCTXDataType)2, 992 },
	{ (Il2CppRGCTXDataType)3, 26078 },
	{ (Il2CppRGCTXDataType)2, 6396 },
	{ (Il2CppRGCTXDataType)3, 2546 },
	{ (Il2CppRGCTXDataType)2, 2016 },
	{ (Il2CppRGCTXDataType)2, 3251 },
	{ (Il2CppRGCTXDataType)3, 10223 },
	{ (Il2CppRGCTXDataType)3, 26079 },
	{ (Il2CppRGCTXDataType)3, 10212 },
	{ (Il2CppRGCTXDataType)3, 10213 },
	{ (Il2CppRGCTXDataType)3, 10211 },
	{ (Il2CppRGCTXDataType)3, 10214 },
	{ (Il2CppRGCTXDataType)2, 3247 },
	{ (Il2CppRGCTXDataType)2, 8145 },
	{ (Il2CppRGCTXDataType)3, 13882 },
	{ (Il2CppRGCTXDataType)3, 10216 },
	{ (Il2CppRGCTXDataType)2, 3880 },
	{ (Il2CppRGCTXDataType)3, 10215 },
	{ (Il2CppRGCTXDataType)2, 3746 },
	{ (Il2CppRGCTXDataType)2, 8093 },
	{ (Il2CppRGCTXDataType)2, 4016 },
	{ (Il2CppRGCTXDataType)2, 4167 },
	{ (Il2CppRGCTXDataType)3, 12883 },
	{ (Il2CppRGCTXDataType)2, 3348 },
	{ (Il2CppRGCTXDataType)3, 14561 },
	{ (Il2CppRGCTXDataType)3, 14562 },
	{ (Il2CppRGCTXDataType)2, 3638 },
	{ (Il2CppRGCTXDataType)3, 14565 },
	{ (Il2CppRGCTXDataType)2, 3638 },
	{ (Il2CppRGCTXDataType)3, 14570 },
	{ (Il2CppRGCTXDataType)2, 3749 },
	{ (Il2CppRGCTXDataType)3, 14574 },
	{ (Il2CppRGCTXDataType)3, 14582 },
	{ (Il2CppRGCTXDataType)3, 14581 },
	{ (Il2CppRGCTXDataType)2, 8217 },
	{ (Il2CppRGCTXDataType)3, 14564 },
	{ (Il2CppRGCTXDataType)3, 14563 },
	{ (Il2CppRGCTXDataType)3, 14575 },
	{ (Il2CppRGCTXDataType)2, 4313 },
	{ (Il2CppRGCTXDataType)3, 14572 },
	{ (Il2CppRGCTXDataType)3, 40114 },
	{ (Il2CppRGCTXDataType)2, 3258 },
	{ (Il2CppRGCTXDataType)3, 10245 },
	{ (Il2CppRGCTXDataType)1, 3877 },
	{ (Il2CppRGCTXDataType)2, 8106 },
	{ (Il2CppRGCTXDataType)3, 14571 },
	{ (Il2CppRGCTXDataType)1, 8106 },
	{ (Il2CppRGCTXDataType)1, 4313 },
	{ (Il2CppRGCTXDataType)2, 8217 },
	{ (Il2CppRGCTXDataType)2, 8106 },
	{ (Il2CppRGCTXDataType)2, 4018 },
	{ (Il2CppRGCTXDataType)2, 4169 },
	{ (Il2CppRGCTXDataType)3, 14567 },
	{ (Il2CppRGCTXDataType)3, 14578 },
	{ (Il2CppRGCTXDataType)3, 14577 },
	{ (Il2CppRGCTXDataType)3, 14579 },
	{ (Il2CppRGCTXDataType)3, 14584 },
	{ (Il2CppRGCTXDataType)3, 14569 },
	{ (Il2CppRGCTXDataType)3, 14566 },
	{ (Il2CppRGCTXDataType)3, 14580 },
	{ (Il2CppRGCTXDataType)3, 14573 },
	{ (Il2CppRGCTXDataType)3, 14568 },
	{ (Il2CppRGCTXDataType)3, 14576 },
	{ (Il2CppRGCTXDataType)3, 14583 },
	{ (Il2CppRGCTXDataType)2, 704 },
	{ (Il2CppRGCTXDataType)3, 10263 },
	{ (Il2CppRGCTXDataType)2, 973 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	206,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	58,
	s_rgctxIndices,
	296,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
