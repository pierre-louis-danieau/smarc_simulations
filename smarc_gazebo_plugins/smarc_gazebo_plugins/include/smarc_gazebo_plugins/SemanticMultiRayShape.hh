/*
 * This file was modified from the original version within Gazebo:
 *
 * Copyright (C) 2014 Open Source Robotics Foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 * 
 * Modifications:
 *
 * Copyright 2018 Nils Bore (nbore@kth.se)
 *
 * Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

#ifndef SEMANTIC_MULTIRAY_SHAPE_HH
#define SEMANTIC_MULTIRAY_SHAPE_HH

#include <gazebo/physics/MultiRayShape.hh>

namespace gazebo
{

  //class MultiRayShape;

  namespace physics {
    
    /// \class MultiRayShape MultiRayShape.hh physics/physics.hh
    /// \brief Laser collision contains a set of ray-collisions,
    /// structured to simulate a laser range scanner.
    class SemanticMultiRayShape : public MultiRayShape
    {
      /// \brief Constructor.
      /// \param[in] _parent Parent collision shape.
      public: explicit SemanticMultiRayShape(CollisionPtr _parent);

      /// \brief Destructor.
      public: virtual ~SemanticMultiRayShape();

      public: RayShapePtr GetRay(unsigned int _index);
      
	  public: static RayShapePtr StaticGetRay(MultiRayShapePtr _parent, unsigned int _index);

    };

    typedef boost::shared_ptr<SemanticMultiRayShape> SemanticMultiRayShapePtr;

  }

}

#endif // SEMANTIC_MULTIRAY_SHAPE_HH
