//
//  PureLayoutDefines.h
//  v2.0.5
//  https://github.com/smileyborg/PureLayout
//
//  Copyright (c) 2014-2015 Tyler Fox
//
//  This code is distributed under the terms and conditions of the MIT license.
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to
//  deal in the Software without restriction, including without limitation the
//  rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
//  sell copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
//  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
//  IN THE SOFTWARE.
//

#ifndef MTTPureLayoutDefines_h
#define MTTPureLayoutDefines_h

#import <Foundation/Foundation.h>

#define __MTTPureLayout_MinBaseSDK_iOS_8_0                   TARGET_OS_IPHONE && __IPHONE_OS_VERSION_MAX_ALLOWED > __IPHONE_7_1
#define __MTTPureLayout_MinSysVer_iOS_7_0                    TARGET_OS_IPHONE && floor(NSFoundationVersionNumber) > NSFoundationVersionNumber_iOS_6_1
#define __MTTPureLayout_MinSysVer_iOS_8_0                    TARGET_OS_IPHONE && floor(NSFoundationVersionNumber) > NSFoundationVersionNumber_iOS_7_1

#define __MTTPureLayout_MinBaseSDK_OSX_10_10                 !TARGET_OS_IPHONE && __MAC_OS_X_VERSION_MAX_ALLOWED > __MAC_10_9
#define __MTTPureLayout_MinSysVer_OSX_10_9                   !TARGET_OS_IPHONE && floor(NSFoundationVersionNumber) > NSFoundationVersionNumber10_8_4

#if TARGET_OS_IPHONE
#   import <UIKit/UIKit.h>

#   define MTTALView                                      UIView
#   define MTTALEdgeInsets                                UIEdgeInsets
#   define MTTALEdgeInsetsZero                            UIEdgeInsetsZero
#   define MTTALEdgeInsetsMake                            UIEdgeInsetsMake
#   define MTTALLayoutConstraintAxis                      UILayoutConstraintAxis
#   define MTTALLayoutConstraintOrientation               MTTALLayoutConstraintAxis
#   define MTTALLayoutConstraintAxisHorizontal            UILayoutConstraintAxisHorizontal
#   define MTTALLayoutConstraintAxisVertical              UILayoutConstraintAxisVertical
#   define MTTALLayoutConstraintOrientationHorizontal     MTTALLayoutConstraintAxisHorizontal
#   define MTTALLayoutConstraintOrientationVertical       MTTALLayoutConstraintAxisVertical
#   define MTTALLayoutPriority                            UILayoutPriority
#   define MTTALLayoutPriorityRequired                    UILayoutPriorityRequired
#   define MTTALLayoutPriorityDefaultHigh                 UILayoutPriorityDefaultHigh
#   define MTTALLayoutPriorityDefaultLow                  UILayoutPriorityDefaultLow
#   define MTTALLayoutPriorityFittingSizeLevel            UILayoutPriorityFittingSizeLevel
#   define MTTALLayoutPriorityFittingSizeCompression      MTTALLayoutPriorityFittingSizeLevel
#else
#   import <Cocoa/Cocoa.h>

#   define MTTALView                                      NSView
#   define MTTALEdgeInsets                                NSEdgeInsets
#   define MTTALEdgeInsetsZero                            NSEdgeInsetsMake(0, 0, 0, 0)
#   define MTTALEdgeInsetsMake                            NSEdgeInsetsMake
#   define MTTALLayoutConstraintOrientation               NSLayoutConstraintOrientation
#   define MTTALLayoutConstraintAxis                      MTTALLayoutConstraintOrientation
#   define MTTALLayoutConstraintOrientationHorizontal     NSLayoutConstraintOrientationHorizontal
#   define MTTALLayoutConstraintOrientationVertical       NSLayoutConstraintOrientationVertical
#   define MTTALLayoutConstraintAxisHorizontal            MTTALLayoutConstraintOrientationHorizontal
#   define MTTALLayoutConstraintAxisVertical              MTTALLayoutConstraintOrientationVertical
#   define MTTALLayoutPriority                            NSLayoutPriority
#   define MTTALLayoutPriorityRequired                    NSLayoutPriorityRequired
#   define MTTALLayoutPriorityDefaultHigh                 NSLayoutPriorityDefaultHigh
#   define MTTALLayoutPriorityDefaultLow                  NSLayoutPriorityDefaultLow
#   define MTTALLayoutPriorityFittingSizeCompression      NSLayoutPriorityFittingSizeCompression
#   define MTTALLayoutPriorityFittingSizeLevel            MTTALLayoutPriorityFittingSizeCompression
#endif /* TARGET_OS_IPHONE */


#pragma mark MTTPureLayout Attributes

/** Constants that represent edges of a view. */
typedef NS_ENUM(NSInteger, MTTALEdge) {
    /** The left edge of the view. */
    MTTALEdgeLeft = NSLayoutAttributeLeft,
    /** The right edge of the view. */
    MTTALEdgeRight = NSLayoutAttributeRight,
    /** The top edge of the view. */
    MTTALEdgeTop = NSLayoutAttributeTop,
    /** The bottom edge of the view. */
    MTTALEdgeBottom = NSLayoutAttributeBottom,
    /** The leading edge of the view (left edge for left-to-right languages like English, right edge for right-to-left languages like Arabic). */
    MTTALEdgeLeading = NSLayoutAttributeLeading,
    /** The trailing edge of the view (right edge for left-to-right languages like English, left edge for right-to-left languages like Arabic). */
    MTTALEdgeTrailing = NSLayoutAttributeTrailing
};

/** Constants that represent dimensions of a view. */
typedef NS_ENUM(NSInteger, MTTALDimension) {
    /** The width of the view. */
    MTTALDimensionWidth = NSLayoutAttributeWidth,
    /** The height of the view. */
    MTTALDimensionHeight = NSLayoutAttributeHeight
};

/** Constants that represent axes of a view. */
typedef NS_ENUM(NSInteger, MTTALAxis) {
    /** A vertical line through the middle of the view's left and right edges. */
    MTTALAxisVertical = NSLayoutAttributeCenterX,
    /** A horizontal line through the middle of the view's top and bottom edges. */
    MTTALAxisHorizontal = NSLayoutAttributeCenterY,
    
    /** A horizontal line at the baseline of the last line of text in the view. (For views that do not draw text, will be equivalent to MTTALEdgeBottom.) Same as MTTALAxisLastBaseline. */
    MTTALAxisBaseline = NSLayoutAttributeBaseline,
    /** A horizontal line at the baseline of the last line of text in the view. (For views that do not draw text, will be equivalent to MTTALEdgeBottom.) */
    MTTALAxisLastBaseline = MTTALAxisBaseline,
    #if __MTTPureLayout_MinBaseSDK_iOS_8_0
    /** A horizontal line at the baseline of the first line of text in a view. (For views that do not draw text, will be equivalent to MTTALEdgeTop.) Available in iOS 8.0 and later. */
    MTTALAxisFirstBaseline = NSLayoutAttributeFirstBaseline
    #endif /* __PureLayout_MinBaseSDK_iOS_8_0 */
};

#if __MTTPureLayout_MinBaseSDK_iOS_8_0

/** Constants that represent layout margins of a view. Available in iOS 8.0 and later. */
typedef NS_ENUM(NSInteger, MTTALMargin) {
    /** The left margin of the view, based on the view's layoutMargins left inset. */
    MTTALMarginLeft = NSLayoutAttributeLeftMargin,
    /** The right margin of the view, based on the view's layoutMargins right inset. */
    MTTALMarginRight = NSLayoutAttributeRightMargin,
    /** The top margin of the view, based on the view's layoutMargins top inset. */
    MTTALMarginTop = NSLayoutAttributeTopMargin,
    /** The bottom margin of the view, based on the view's layoutMargins bottom inset. */
    MTTALMarginBottom = NSLayoutAttributeBottomMargin,
    /** The leading margin of the view, based on the view's layoutMargins left/right (depending on language direction) inset. */
    MTTALMarginLeading = NSLayoutAttributeLeadingMargin,
    /** The trailing margin of the view, based on the view's layoutMargins left/right (depending on language direction) inset. */
    MTTALMarginTrailing = NSLayoutAttributeTrailingMargin
};

/** Constants that represent axes of the layout margins of a view. Available in iOS 8.0 and later. */
typedef NS_ENUM(NSInteger, MTTALMarginAxis) {
    /** A vertical line through the middle of the view's left and right margins. */
    MTTALMarginAxisVertical = NSLayoutAttributeCenterXWithinMargins,
    /** A horizontal line through the middle of the view's top and bottom margins. */
    MTTALMarginAxisHorizontal = NSLayoutAttributeCenterYWithinMargins
};

#endif /* __PureLayout_MinBaseSDK_iOS_8_0 */

/** An attribute of a view that can be used in auto layout constraints. These constants are identical to the more specific enum types: 
    MTTALEdge, MTTALAxis, MTTALDimension, MTTALMargin, MTTALMarginAxis. It is safe to cast a more specific enum type to the MTTALAttribute type. */
typedef NS_ENUM(NSInteger, MTTALAttribute) {
    /** The left edge of the view. */
    MTTALAttributeLeft = MTTALEdgeLeft,
    /** The right edge of the view. */
    MTTALAttributeRight = MTTALEdgeRight,
    /** The top edge of the view. */
    MTTALAttributeTop = MTTALEdgeTop,
    /** The bottom edge of the view. */
    MTTALAttributeBottom = MTTALEdgeBottom,
    /** The leading edge of the view (left edge for left-to-right languages like English, right edge for right-to-left languages like Arabic). */
    MTTALAttributeLeading = MTTALEdgeLeading,
    /** The trailing edge of the view (right edge for left-to-right languages like English, left edge for right-to-left languages like Arabic). */
    MTTALAttributeTrailing = MTTALEdgeTrailing,
    /** The width of the view. */
    MTTALAttributeWidth = MTTALDimensionWidth,
    /** The height of the view. */
    MTTALAttributeHeight = MTTALDimensionHeight,
    /** A vertical line through the middle of the view's left and right edges. */
    MTTALAttributeVertical = MTTALAxisVertical,
    /** A horizontal line through the middle of the view's top and bottom edges. */
    MTTALAttributeHorizontal = MTTALAxisHorizontal,
    /** A horizontal line at the baseline of the last line of text in the view. (For views that do not draw text, will be equivalent to MTTALEdgeBottom.) Same as MTTALAxisLastBaseline. */
    MTTALAttributeBaseline = MTTALAxisBaseline,
    /** A horizontal line at the baseline of the last line of text in the view. (For views that do not draw text, will be equivalent to MTTALEdgeBottom.) */
    MTTALAttributeLastBaseline = MTTALAxisLastBaseline,
#if __MTTPureLayout_MinBaseSDK_iOS_8_0
    /** A horizontal line at the baseline of the first line of text in a view. (For views that do not draw text, will be equivalent to MTTALEdgeTop.) Available in iOS 8.0 and later. */
    MTTALAttributeFirstBaseline = MTTALAxisFirstBaseline,
    /** The left margin of the view, based on the view's layoutMargins left inset. */
    MTTALAttributeMarginLeft = MTTALMarginLeft,
    /** The right margin of the view, based on the view's layoutMargins right inset. */
    MTTALAttributeMarginRight = MTTALMarginRight,
    /** The top margin of the view, based on the view's layoutMargins top inset. */
    MTTALAttributeMarginTop = MTTALMarginTop,
    /** The bottom margin of the view, based on the view's layoutMargins bottom inset. */
    MTTALAttributeMarginBottom = MTTALMarginBottom,
    /** The leading margin of the view, based on the view's layoutMargins left/right (depending on language direction) inset. */
    MTTALAttributeMarginLeading = MTTALMarginLeading,
    /** The trailing margin of the view, based on the view's layoutMargins left/right (depending on language direction) inset. */
    MTTALAttributeMarginTrailing = MTTALMarginTrailing,
    /** A vertical line through the middle of the view's left and right margins. */
    MTTALAttributeMarginAxisVertical = MTTALMarginAxisVertical,
    /** A horizontal line through the middle of the view's top and bottom margins. */
    MTTALAttributeMarginAxisHorizontal = MTTALMarginAxisHorizontal
#endif /* __PureLayout_MinBaseSDK_iOS_8_0 */
};

/** A block containing method calls to the MTTPureLayout API. Takes no arguments and has no return value. */
typedef void(^MTTALConstraintsBlock)(void);

#endif /* PureLayoutDefines_h */
