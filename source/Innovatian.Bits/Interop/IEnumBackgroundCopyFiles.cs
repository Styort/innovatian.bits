#region Using Directives

using System.Diagnostics.CodeAnalysis;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

#endregion

namespace Innovatian.Bits.Interop
{
    /// <summary>
    /// Use the IEnumBackgroundCopyFiles interface to enumerate the files that a
    /// job contains. To get an IEnumBackgroundCopyFiles interface pointer, call
    /// the IBackgroundCopyJob::EnumFiles method.
    /// </summary>
    [ComImport]
    [InterfaceType( ComInterfaceType.InterfaceIsIUnknown )]
    [Guid( "CA51E165-C365-424C-8D41-24AAA4FF3C40" )]
    internal interface IEnumBackgroundCopyFiles
    {
        /// <summary>
        /// Retrieves a specified number of items in the enumeration sequence.
        /// If there are fewer than the requested number of elements left in the
        /// sequence, it retrieves the remaining elements.
        /// </summary>
        /// <param name="celt">
        /// Number of elements requested.
        /// </param>
        /// <param name="rgelt">
        /// Array of IBackgroundCopyFile objects. You must release each object
        /// in rgelt when done.
        /// </param>
        /// <param name="pceltFetched">
        /// Number of elements returned in rgelt. You can set pceltFetched to
        /// NULL if celt is one. Otherwise, initialize the value of pceltFetched
        /// to 0 before calling this method.
        /// </param>
        [SuppressMessage( "Microsoft.Naming", "CA1704:IdentifiersShouldBeSpelledCorrectly", MessageId = "pcelt" )]
        [SuppressMessage( "Microsoft.Naming", "CA1704:IdentifiersShouldBeSpelledCorrectly", MessageId = "rgelt" )]
        [SuppressMessage( "Microsoft.Naming", "CA1716:IdentifiersShouldNotMatchKeywords", MessageId = "Next" )]
        [SuppressMessage( "Microsoft.Design", "CA1021:AvoidOutParameters", MessageId = "2#" )]
        [SuppressMessage( "Microsoft.Design", "CA1021:AvoidOutParameters", MessageId = "1#" )]
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void Next( [In] uint celt, [MarshalAs( UnmanagedType.Interface )] out IBackgroundCopyFile rgelt,
                   [In] [Out] ref uint pceltFetched );

        /// <summary>
        /// Skips the next specified number of elements in the enumeration
        /// sequence. If there are fewer elements left in the sequence than the
        /// requested number of elements to skip, it skips past the last element
        /// in the sequence.
        /// </summary>
        /// <param name="celt">
        /// Number of elements to skip.
        /// </param>
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void Skip( [In] uint celt );

        /// <summary>
        /// Resets the enumeration sequence to the beginning.
        /// </summary>
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void Reset();

        /// <summary>
        /// Creates another IEnumBackgroundCopyFiles enumerator that contains
        /// the same enumeration state as the current one. Using this method, a
        /// client can record a particular point in the enumeration sequence,
        /// and then return to that point at a later time. The new enumerator
        /// supports the same interface as the original one.
        /// </summary>
        /// <param name="ppEnumFiles">
        /// Receives the interface pointer to the enumeration object. If the
        /// method is unsuccessful, the value of this output variable is
        /// undefined. You must release ppEnumFiles when done.
        /// </param>
        [SuppressMessage( "Microsoft.Design", "CA1021:AvoidOutParameters", MessageId = "0#" )]
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void Clone( [MarshalAs( UnmanagedType.Interface )] out IEnumBackgroundCopyFiles ppEnumFiles );

        /// <summary>
        /// Retrieves a count of the number of files in the enumeration.
        /// </summary>
        /// <param name="pCount">
        /// Number of files in the enumeration.
        /// </param>
        [SuppressMessage( "Microsoft.Naming", "CA1704:IdentifiersShouldBeSpelledCorrectly", MessageId = "p" )]
        [SuppressMessage( "Microsoft.Design", "CA1021:AvoidOutParameters", MessageId = "0#" )]
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void GetCount( out uint pCount );
    }
}