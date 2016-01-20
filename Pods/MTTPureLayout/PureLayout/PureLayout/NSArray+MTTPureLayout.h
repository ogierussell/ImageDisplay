//
//  NSArray+MTTPureLayout.h
//  v2.0.5
//  https://github.com/smileyborg/PureLayout
//
//  Copyright (c) 2012 Richard Turton
//  Copyright (c) 2013-2015 Tyler Fox
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

#import "MTTPureLayoutDefines.h"


#pragma mark - NSArray+MTTPureLayout

/**
 A category on NSArray that provides a simple yet powerful interface to:
    - Manage an array of Auto Layout constraints
    - Apply constraints to an array of views
 */
@interface NSArray (MTTPureLayout)


#pragma mark Array of Constraints

/** Activates the constraints in this array. */
- (void)mtt_autoInstallConstraints;

/** Deactivates the constraints in this array. */
- (void)mtt_autoRemoveConstraints;

#if __MTTPureLayout_MinBaseSDK_iOS_8_0

/** Sets the string as the identifier for the constraints in this array. Available in iOS 7.0 and OS X 10.9 and later. */
- (instancetype)mtt_autoIdentifyConstraints:(NSString *)identifier;

#endif /* __PureLayout_MinBaseSDK_iOS_8_0 */


#pragma mark Array of Views

/** Aligns views in this array to one another along a given edge. */
- (NSArray *)mtt_autoAlignViewsToEdge:(MTTALEdge)edge;

/** Aligns views in this array to one another along a given axis. */
- (NSArray *)mtt_autoAlignViewsToAxis:(MTTALAxis)axis;

/** Matches a given dimension of all the views in this array. */
- (NSArray *)mtt_autoMatchViewsDimension:(MTTALDimension)dimension;

/** Sets the given dimension of all the views in this array to a given size. */
- (NSArray *)mtt_autoSetViewsDimension:(MTTALDimension)dimension toSize:(CGFloat)size;

/** Sets all of the views in this array to a given size. */
- (NSArray *)mtt_autoSetViewsDimensionsToSize:(CGSize)size;


/** Distributes the views in this array equally along the selected axis in their superview. Views will be the same size (variable) in the dimension along the axis and will have spacing (fixed) between them. */
- (NSArray *)mtt_autoDistributeViewsAlongAxis:(MTTALAxis)axis
                                    alignedTo:(MTTALAttribute)alignment
                             withFixedSpacing:(CGFloat)spacing;

/** Distributes the views in this array equally along the selected axis in their superview. Views will be the same size (variable) in the dimension along the axis and will have spacing (fixed) between them, with optional insets from the first and last views to their superview. */
- (NSArray *)mtt_autoDistributeViewsAlongAxis:(MTTALAxis)axis
                                    alignedTo:(MTTALAttribute)alignment
                             withFixedSpacing:(CGFloat)spacing
                                 insetSpacing:(BOOL)shouldSpaceInsets;

/** Distributes the views in this array equally along the selected axis in their superview. Views will have spacing (fixed) between them, with optional insets from the first and last views to their superview, and optionally constrained to the same size in the dimension along the axis. */
- (NSArray *)mtt_autoDistributeViewsAlongAxis:(MTTALAxis)axis
                                    alignedTo:(MTTALAttribute)alignment
                             withFixedSpacing:(CGFloat)spacing
                                 insetSpacing:(BOOL)shouldSpaceInsets
                                 matchedSizes:(BOOL)shouldMatchSizes;


/** Distributes the views in this array equally along the selected axis in their superview. Views will be the same size (fixed) in the dimension along the axis and will have spacing (variable) between them. */
- (NSArray *)mtt_autoDistributeViewsAlongAxis:(MTTALAxis)axis
                                    alignedTo:(MTTALAttribute)alignment
                                withFixedSize:(CGFloat)size;

/** Distributes the views in this array equally along the selected axis in their superview. Views will be the same size (fixed) in the dimension along the axis and will have spacing (variable) between them, with optional insets from the first and last views to their superview. */
- (NSArray *)mtt_autoDistributeViewsAlongAxis:(MTTALAxis)axis
                                    alignedTo:(MTTALAttribute)alignment
                                withFixedSize:(CGFloat)size
                                 insetSpacing:(BOOL)shouldSpaceInsets;

@end
