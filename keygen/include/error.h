
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
*  @brief This file contains err handling procedures and codes.
*
*  Tasks:
*      1. @todo Add file details
*      2. @todo Add file details
*
*  **************************************************************************/

#ifndef KEYGEN_ERROR_H_
#define KEYGEN_ERROR_H_

#include <iostream>
#include <string>
#include <string_view>

void LogMsg(const std::string_view& message)
{
    std::clog << "[LOG]: " << message << "\n";
}

#endif // KEYGEN_ERROR_H_
