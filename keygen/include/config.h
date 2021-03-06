
/** ***************************************************************************
*
*  Copyright 2018 Jose Fernando Lopez Fernandez - All Rights Reserved
*  See the file AUTHORS included with the application distribution for
*  specific information.
*
*  Redistribution and use in source and binary forms, with or without
*  modification, are permitted provided that the following
*  conditions are met:
*
*   * Redistributions of source code must retain the above copyright
*     notice, this list of conditions and the following disclaimer.
*
*   * Redistributions in binary form must reproduce the above
*     copyright notice, this list of conditions and the following
*     disclaimer in the documentation and/or other materials provided
*     with the distribution.
*
*     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND
*     CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,
*     INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
*     MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
*     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
*     CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
*     SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
*     NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
*     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
*     HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
*     CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
*     OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
*     EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*
*  ***************************************************************************
*
*  @author Jose Fernando Lopez Fernandez
*  @date 19-June-2018
*  @brief This file contains configuration settings for the application.
*
*  Tasks:
*      1. @todo Add file details
*      2. @todo Add file details
*
*  **************************************************************************/

#ifndef KEYGEN_INCLUDE_CONFIG_H_
#define KEYGEN_INCLUDE_CONFIG_H_

#include <iostream>
#include <string>
#include <string_view>

/** CMake Documentation:
 *  CMake Commands [https://cmake.org/cmake/help/v3.11/manual/cmake-commands.7.html]
 *  
 */

namespace System
{
    namespace Host
    {
        /** @todo Add documentation for host system configurations
         *  @brief CMAKE_HOST_WIN32 will be false when running a Cygwin
         *  environment, while CMAKE_HOST_UNIX will be true when the system is
         *  Unix or Unix-like, which includes both Apple and Cygwin.
         *  
         */

        const auto Windows              = "1";
        const auto Apple                = "";
        const auto Unix                 = "";

        namespace Processor
        {
            const auto Architecture     = "AMD64";
        } // namespace Processor
    } // namespace Host

    namespace Toolchains
    {
        namespace Compilers
        {
            namespace C
            {
                const auto Name         = "";
                const auto Version      = "";
                const auto Standard     = "";
                const auto StandardReq  = "";
                const auto Extensions   = "";
                const auto Features     = "";
                const auto FlagsBase    = "";
                const auto FlagsDebug   = "";
                const auto FlagsRelease = "";
                const auto IncludesDir  = "";
                const auto StandardLib  = "";

                inline void Print() noexcept
                {
                    std::cout << "<C Compiler Info>\n\n";
                }
            } // namespace C

            namespace CXX
            {
                const auto Name         = "MSVC";
                const auto Version      = "19.14.26430.0";
                const auto Standard     = "";
                const auto StandardReq  = "";
                const auto Extensions   = "";
                const auto Features     = "cxx_std_11;cxx_std_98;cxx_aggregate_default_initializers;cxx_alias_templates;cxx_alignas;cxx_alignof;cxx_attributes;cxx_attribute_deprecated;cxx_auto_type;cxx_binary_literals;cxx_constexpr;cxx_contextual_conversions;cxx_decltype;cxx_decltype_auto;cxx_default_function_template_args;cxx_defaulted_functions;cxx_defaulted_move_initializers;cxx_delegating_constructors;cxx_deleted_functions;cxx_digit_separators;cxx_enum_forward_declarations;cxx_explicit_conversions;cxx_extended_friend_declarations;cxx_extern_templates;cxx_final;cxx_func_identifier;cxx_generalized_initializers;cxx_generic_lambdas;cxx_inheriting_constructors;cxx_inline_namespaces;cxx_lambdas;cxx_lambda_init_captures;cxx_local_type_template_args;cxx_long_long_type;cxx_noexcept;cxx_nonstatic_member_init;cxx_nullptr;cxx_override;cxx_range_for;cxx_raw_string_literals;cxx_reference_qualified_functions;cxx_return_type_deduction;cxx_right_angle_brackets;cxx_rvalue_references;cxx_sizeof_member;cxx_static_assert;cxx_strong_enums;cxx_template_template_parameters;cxx_thread_local;cxx_trailing_return_types;cxx_unicode_literals;cxx_uniform_initialization;cxx_unrestricted_unions;cxx_user_literals;cxx_variable_templates;cxx_variadic_macros;cxx_variadic_templates;cxx_std_14;cxx_std_17";
                const auto FlagsBase    = "";
                const auto FlagsDebug   = "";
                const auto FlagsRelease = "";
                const auto IncludesDir  = "";
                const auto StandardLib  = "kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib";

                inline void Print() noexcept
                {
                    std::cout << "<CXX Compiler Info>\n\n";
                }
            } // namespace CXX
        } // namespace Compilers
    } // namespace Toolchains
} // namespace System

namespace KeyGen
{
    namespace Program
    {
        namespace Metadata
        {
            const std::string description = "Cross-platform password generator written in C++.";
        }

        // @todo Change to string_view
        //inline auto Description() noexcept -> decltype (auto)
        //{
        //    return Metadata::description;
        //}

        std::string Description() noexcept
        {
            return Metadata::description;
        }

        inline void PrintDescription() noexcept
        {
            std::cout << "Description: " << Description() << "\n";
        }
    }

    namespace Version
    {
        const std::string Major = "0";
        const std::string Minor = "2";
        const std::string Patch = "0";
        const std::string Tweak = "0";

        inline std::string String() noexcept
        {
            return (Major + "." + Minor + "." + Patch + "." + Tweak);
        }

        inline void Print() noexcept
        {
            std::cout << "Version: " << KeyGen::Version::String() << "\n";
        }
    } // namespace Version
} // namespace KeyGen

#endif // KEYGEN_INCLUDE_CONFIG_H_
