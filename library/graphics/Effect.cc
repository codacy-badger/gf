/*
 * Gamedev Framework (gf)
 * Copyright (C) 2016-2019 Julien Bernard
 *
 * This software is provided 'as-is', without any express or implied
 * warranty.  In no event will the authors be held liable for any damages
 * arising from the use of this software.
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software. If you use this software
 *    in a product, an acknowledgment in the product documentation would be
 *    appreciated but is not required.
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 * 3. This notice may not be removed or altered from any source distribution.
 */
#include <gf/Effect.h>

#include "config.h"

namespace gf {
#ifndef DOXYGEN_SHOULD_SKIP_THIS
inline namespace v1 {
#endif

  TransitionEffect::TransitionEffect(const char *vertexShader, const char *fragmentShader)
  : Effect(vertexShader, fragmentShader)
  {
    setUniform("u_progress", 0.0f);
  }

  void TransitionEffect::setProgress(float progress) {
    setUniform("u_progress", progress);
  }

#ifndef DOXYGEN_SHOULD_SKIP_THIS
}
#endif
}
