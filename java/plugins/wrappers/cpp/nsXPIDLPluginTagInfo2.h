/* -*- Mode: C++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*-
 * The contents of this file are subject to the Mozilla Public
 * License Version 1.1 (the "License"); you may not use this file
 * except in compliance with the License. You may obtain a copy of
 * the License at http://www.mozilla.org/MPL/
 *
 * Software distributed under the License is distributed on an "AS
 * IS" basis, WITHOUT WARRANTY OF ANY KIND, either express or
 * implied. See the License for the specific language governing
 * rights and limitations under the License.
 *
 * The Original Code is mozilla.org code.
 *
 * The Initial Developer of the Original Code is Sun Microsystems,
 * Inc. Portions created by Sun are
 * Copyright (C) 1999 Sun Microsystems, Inc. All
 * Rights Reserved.
 *
 * Contributor(s):
 * Serge Pikalev <sep@sparc.spb.su>
 */

#ifndef _nsXPIDLPluginTagInfo2_included_
#define _nsXPIDLPluginTagInfo2_included_

#include "nsIXPIDLPluginTagInfo2.h"
#include "nsIPluginTagInfo2.h"

#include "nsXPIDLPluginTagInfo.h"

class nsXPIDLPluginTagInfo2 : public nsXPIDLPluginTagInfo, public nsIXPIDLPluginTagInfo2
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIXPIDLPLUGINTAGINFO2
  NS_DECL_NSIXPIDLPLUGINTAGINFO

  nsXPIDLPluginTagInfo2();
  nsXPIDLPluginTagInfo2( nsIPluginTagInfo2 *tagInfo );
  virtual ~nsXPIDLPluginTagInfo2();

  nsIPluginTagInfo2 *tagInfo;
};

#endif // _nsXPIDLPluginTagInfo2_included_
