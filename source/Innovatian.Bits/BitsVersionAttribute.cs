#region License

//
// Copyright � 2009 Ian Davis <ian.f.davis@gmail.com>
// 
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#endregion

#region Using Directives

using System;

#endregion

namespace Innovatian.Bits
{
    public class BitsVersionAttribute : Attribute
    {
        public BitsVersionAttribute( BitsVersion version )
        {
            Version = version;
        }

        public BitsVersion Version { get; private set; }
    }

    public enum BitsVersion
    {
        Bits_10,
        Bits_15,
        Bits_20,
        Bits_25,
        Bits_30
    }
}