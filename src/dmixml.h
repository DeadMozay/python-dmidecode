/*
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software
 *   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA
 *
 *   For the avoidance of doubt the "preferred form" of this code is one which
 *   is in an open unpatent encumbered format. Where cryptographic key signing
 *   forms part of the process of creating an executable the information
 *   including keys needed to generate an equivalently functional executable
 *   are deemed to be part of the source code.
 */

#ifndef _XMLHELPER_H
#define _XMLHELPER_H

#include <stdarg.h>
#include <libxml/tree.h>

xmlAttr *dmixml_AddAttribute(xmlNode *node, const char *atrname, const char *fmt, ...);
xmlNode *dmixml_AddTextChild(xmlNode *node, const char *tagname, const char *fmt, ...);
xmlNode *dmixml_AddTextContent(xmlNode *node, const char *fmt, ...);

#endif