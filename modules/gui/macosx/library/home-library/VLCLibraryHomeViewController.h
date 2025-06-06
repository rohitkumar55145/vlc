/*****************************************************************************
 * VLCLibraryHomeViewController.h: MacOS X interface module
 *****************************************************************************
 * Copyright (C) 2023 VLC authors and VideoLAN
 *
 * Authors: Claudio Cambra <developer@claudiocambra.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston MA 02110-1301, USA.
 *****************************************************************************/

#import <Cocoa/Cocoa.h>

#import "library/VLCLibraryAbstractMediaLibrarySegmentViewController.h"

@class VLCLibraryWindow;
@class VLCLibraryHomeViewStackViewController;

@protocol VLCMediaLibraryItemProtocol;

NS_ASSUME_NONNULL_BEGIN

// Controller for the home library views

@interface VLCLibraryHomeViewController : VLCLibraryAbstractMediaLibrarySegmentViewController

@property (readonly, weak) NSView *homeLibraryView;
@property (readonly, weak) NSScrollView *homeLibraryStackViewScrollView;
@property (readonly, weak) NSStackView *homeLibraryStackView;

@property (readonly) VLCLibraryHomeViewStackViewController *stackViewController;

- (instancetype)initWithLibraryWindow:(VLCLibraryWindow *)libraryWindow;

- (void)presentHomeView;

@end

NS_ASSUME_NONNULL_END
