//
//  MTTALView+MTTPureLayout.h
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


#pragma mark - MTTALView+MTTPureLayout

/**
 A category on UIView/NSView that provides a simple yet powerful interface for creating Auto Layout constraints.
 */
@interface MTTALView (MTTPureLayout)


#pragma mark Factory & Initializer Methods

/** Creates and returns a new view that does not convert the autoresizing mask into constraints. */
+ (instancetype)mtt_newAutoLayoutView;

/** Initializes and returns a new view that does not convert the autoresizing mask into constraints. */
- (instancetype)initForAutoLayoutMTT;


#pragma mark Create Constraints Without Installing

/** Prevents constraints created in the given constraints block from being automatically installed (activated).
    The constraints created from calls to the MTTPureLayout API in the block are returned in a single array. */
+ (NSArray *)mtt_autoCreateConstraintsWithoutInstalling:(MTTALConstraintsBlock)block;


#pragma mark Set Priority For Constraints

/** Sets the constraint priority to the given value for all constraints created using the MTTPureLayout API within the given constraints block.
    NOTE: This method will have no effect (and will NOT set the priority) on constraints created or added without using the MTTPureLayout API! */
+ (void)mtt_autoSetPriority:(MTTALLayoutPriority)priority forConstraints:(MTTALConstraintsBlock)block;


#pragma mark Set Identifier For Constraints

#if __MTTPureLayout_MinBaseSDK_iOS_8_0

/** Sets the identifier for all constraints created using the MTTPureLayout API within the given constraints block.
    NOTE: This method will have no effect (and will NOT set the identifier) on constraints created or added without using the MTTPureLayout API! */
+ (void)mtt_autoSetIdentifier:(NSString *)identifier forConstraints:(MTTALConstraintsBlock)block;

#endif /* __PureLayout_MinBaseSDK_iOS_8_0 */


#pragma mark Center & Align in Superview

/** Centers the view in its superview. */
- (NSArray *)mtt_autoCenterInSuperview;

/** Aligns the view to the same axis of its superview. */
- (NSLayoutConstraint *)mtt_autoAlignAxisToSuperviewAxis:(MTTALAxis)axis;

#if __MTTPureLayout_MinBaseSDK_iOS_8_0

/** Centers the view in its superview's margins. Available in iOS 8.0 and later. */
- (NSArray *)mtt_autoCenterInSuperviewMargins;

/** Aligns the view to the corresponding margin axis of its superview. Available in iOS 8.0 and later. */
- (NSLayoutConstraint *)mtt_autoAlignAxisToSuperviewMarginAxis:(MTTALAxis)axis;

#endif /* __PureLayout_MinBaseSDK_iOS_8_0 */


#pragma mark Pin Edges to Superview

/** Pins the given edge of the view to the same edge of its superview. */
- (NSLayoutConstraint *)mtt_autoPinEdgeToSuperviewEdge:(MTTALEdge)edge;

/** Pins the given edge of the view to the same edge of its superview with an inset. */
- (NSLayoutConstraint *)mtt_autoPinEdgeToSuperviewEdge:(MTTALEdge)edge withInset:(CGFloat)inset;

/** Pins the given edge of the view to the same edge of its superview with an inset as a maximum or minimum. */
- (NSLayoutConstraint *)mtt_autoPinEdgeToSuperviewEdge:(MTTALEdge)edge withInset:(CGFloat)inset relation:(NSLayoutRelation)relation;

/** Pins the edges of the view to the edges of its superview with the given edge insets. */
- (NSArray *)mtt_autoPinEdgesToSuperviewEdgesWithInsets:(MTTALEdgeInsets)insets;

/** Pins 3 of the 4 edges of the view to the edges of its superview with the given edge insets, excluding one edge. */
- (NSArray *)mtt_autoPinEdgesToSuperviewEdgesWithInsets:(MTTALEdgeInsets)insets excludingEdge:(MTTALEdge)edge;

#if __MTTPureLayout_MinBaseSDK_iOS_8_0

/** Pins the given edge of the view to the corresponding margin of its superview. Available in iOS 8.0 and later. */
- (NSLayoutConstraint *)mtt_autoPinEdgeToSuperviewMargin:(MTTALEdge)edge;

/** Pins the given edge of the view to the corresponding margin of its superview as a maximum or minimum. Available in iOS 8.0 and later. */
- (NSLayoutConstraint *)mtt_autoPinEdgeToSuperviewMargin:(MTTALEdge)edge relation:(NSLayoutRelation)relation;

/** Pins the edges of the view to the margins of its superview. Available in iOS 8.0 and later. */
- (NSArray *)mtt_autoPinEdgesToSuperviewMargins;

/** Pins 3 of the 4 edges of the view to the margins of its superview excluding one edge. Available in iOS 8.0 and later. */
- (NSArray *)mtt_autoPinEdgesToSuperviewMarginsExcludingEdge:(MTTALEdge)edge;

#endif /* __PureLayout_MinBaseSDK_iOS_8_0 */


#pragma mark Pin Edges

/** Pins an edge of the view to a given edge of another view. */
- (NSLayoutConstraint *)mtt_autoPinEdge:(MTTALEdge)edge toEdge:(MTTALEdge)toEdge ofView:(MTTALView *)otherView;

/** Pins an edge of the view to a given edge of another view with an offset. */
- (NSLayoutConstraint *)mtt_autoPinEdge:(MTTALEdge)edge toEdge:(MTTALEdge)toEdge ofView:(MTTALView *)otherView withOffset:(CGFloat)offset;

/** Pins an edge of the view to a given edge of another view with an offset as a maximum or minimum. */
- (NSLayoutConstraint *)mtt_autoPinEdge:(MTTALEdge)edge toEdge:(MTTALEdge)toEdge ofView:(MTTALView *)otherView withOffset:(CGFloat)offset relation:(NSLayoutRelation)relation;


#pragma mark Align Axes

/** Aligns an axis of the view to the same axis of another view. */
- (NSLayoutConstraint *)mtt_autoAlignAxis:(MTTALAxis)axis toSameAxisOfView:(MTTALView *)otherView;

/** Aligns an axis of the view to the same axis of another view with an offset. */
- (NSLayoutConstraint *)mtt_autoAlignAxis:(MTTALAxis)axis toSameAxisOfView:(MTTALView *)otherView withOffset:(CGFloat)offset;


#pragma mark Match Dimensions

/** Matches a dimension of the view to a given dimension of another view. */
- (NSLayoutConstraint *)mtt_autoMatchDimension:(MTTALDimension)dimension toDimension:(MTTALDimension)toDimension ofView:(MTTALView *)otherView;

/** Matches a dimension of the view to a given dimension of another view with an offset. */
- (NSLayoutConstraint *)mtt_autoMatchDimension:(MTTALDimension)dimension toDimension:(MTTALDimension)toDimension ofView:(MTTALView *)otherView withOffset:(CGFloat)offset;

/** Matches a dimension of the view to a given dimension of another view with an offset as a maximum or minimum. */
- (NSLayoutConstraint *)mtt_autoMatchDimension:(MTTALDimension)dimension toDimension:(MTTALDimension)toDimension ofView:(MTTALView *)otherView withOffset:(CGFloat)offset relation:(NSLayoutRelation)relation;

/** Matches a dimension of the view to a multiple of a given dimension of another view. */
- (NSLayoutConstraint *)mtt_autoMatchDimension:(MTTALDimension)dimension toDimension:(MTTALDimension)toDimension ofView:(MTTALView *)otherView withMultiplier:(CGFloat)multiplier;

/** Matches a dimension of the view to a multiple of a given dimension of another view as a maximum or minimum. */
- (NSLayoutConstraint *)mtt_autoMatchDimension:(MTTALDimension)dimension toDimension:(MTTALDimension)toDimension ofView:(MTTALView *)otherView withMultiplier:(CGFloat)multiplier relation:(NSLayoutRelation)relation;


#pragma mark Set Dimensions

/** Sets the view to a specific size. */
- (NSArray *)mtt_autoSetDimensionsToSize:(CGSize)size;

/** Sets the given dimension of the view to a specific size. */
- (NSLayoutConstraint *)mtt_autoSetDimension:(MTTALDimension)dimension toSize:(CGFloat)size;

/** Sets the given dimension of the view to a specific size as a maximum or minimum. */
- (NSLayoutConstraint *)mtt_autoSetDimension:(MTTALDimension)dimension toSize:(CGFloat)size relation:(NSLayoutRelation)relation;


#pragma mark Set Content Compression Resistance & Hugging

/** Sets the priority of content compression resistance for an axis.
    NOTE: This method must be called from within the block passed into the method +[UIView mtt_autoSetPriority:forConstraints:] */
- (void)mtt_autoSetContentCompressionResistancePriorityForAxis:(MTTALAxis)axis;

/** Sets the priority of content hugging for an axis.
    NOTE: This method must be called from within the block passed into the method +[UIView mtt_autoSetPriority:forConstraints:] */
- (void)mtt_autoSetContentHuggingPriorityForAxis:(MTTALAxis)axis;


#pragma mark Constrain Any Attributes

/** Constrains an attribute of the view to a given attribute of another view. */
- (NSLayoutConstraint *)mtt_autoConstrainAttribute:(MTTALAttribute)attribute toAttribute:(MTTALAttribute)toAttribute ofView:(MTTALView *)otherView;

/** Constrains an attribute of the view to a given attribute of another view with an offset. */
- (NSLayoutConstraint *)mtt_autoConstrainAttribute:(MTTALAttribute)attribute toAttribute:(MTTALAttribute)toAttribute ofView:(MTTALView *)otherView withOffset:(CGFloat)offset;

/** Constrains an attribute of the view to a given attribute of another view with an offset as a maximum or minimum. */
- (NSLayoutConstraint *)mtt_autoConstrainAttribute:(MTTALAttribute)attribute toAttribute:(MTTALAttribute)toAttribute ofView:(MTTALView *)otherView withOffset:(CGFloat)offset relation:(NSLayoutRelation)relation;

/** Constrains an attribute of the view to a given attribute of another view with a multiplier. */
- (NSLayoutConstraint *)mtt_autoConstrainAttribute:(MTTALAttribute)attribute toAttribute:(MTTALAttribute)toAttribute ofView:(MTTALView *)otherView withMultiplier:(CGFloat)multiplier;

/** Constrains an attribute of the view to a given attribute of another view with a multiplier as a maximum or minimum. */
- (NSLayoutConstraint *)mtt_autoConstrainAttribute:(MTTALAttribute)attribute toAttribute:(MTTALAttribute)toAttribute ofView:(MTTALView *)otherView withMultiplier:(CGFloat)multiplier relation:(NSLayoutRelation)relation;


#pragma mark Pin to Layout Guides (iOS only)

#if TARGET_OS_IPHONE

/** Pins the top edge of the view to the top layout guide of the given view controller with an inset. Available on iOS only. */
- (NSLayoutConstraint *)mtt_autoPinToTopLayoutGuideOfViewController:(UIViewController *)viewController withInset:(CGFloat)inset;

/** Pins the top edge of the view to the top layout guide of the given view controller with an inset as a maximum or minimum. Available on iOS only. */
- (NSLayoutConstraint *)mtt_autoPinToTopLayoutGuideOfViewController:(UIViewController *)viewController withInset:(CGFloat)inset relation:(NSLayoutRelation)relation;

/** Pins the bottom edge of the view to the bottom layout guide of the given view controller with an inset. Available on iOS only. */
- (NSLayoutConstraint *)mtt_autoPinToBottomLayoutGuideOfViewController:(UIViewController *)viewController withInset:(CGFloat)inset;

/** Pins the bottom edge of the view to the bottom layout guide of the given view controller with an inset as a maximum or minimum. Available on iOS only. */
- (NSLayoutConstraint *)mtt_autoPinToBottomLayoutGuideOfViewController:(UIViewController *)viewController withInset:(CGFloat)inset relation:(NSLayoutRelation)relation;

#endif /* TARGET_OS_IPHONE */


#pragma mark Deprecated Methods

/** DEPRECATED as of MTTPureLayout v2.0.0. Retain a reference to and remove specific constraints instead, or recreate the view(s) entirely to remove all constraints.
    Removes all explicit constraints that affect the view.
    WARNING: Apple's constraint solver is not optimized for large-scale constraint removal; you may encounter major performance issues after using this method.
    NOTE: This method preserves implicit constraints, such as intrinsic content size constraints, which you usually do not want to remove. */
- (void)mtt_autoRemoveConstraintsAffectingView __attribute__((deprecated));

/** DEPRECATED as of MTTPureLayout v2.0.0. Retain a reference to and remove specific constraints instead, or recreate the view(s) entirely to remove all constraints.
    Removes all constraints that affect the view, optionally including implicit constraints.
    WARNING: Apple's constraint solver is not optimized for large-scale constraint removal; you may encounter major performance issues after using this method.
    NOTE: Implicit constraints are auto-generated lower priority constraints, and you usually do not want to remove these. */
- (void)mtt_autoRemoveConstraintsAffectingViewIncludingImplicitConstraints:(BOOL)shouldRemoveImplicitConstraints __attribute__((deprecated));

/** DEPRECATED as of MTTPureLayout v2.0.0. Retain a reference to and remove specific constraints instead, or recreate the view(s) entirely to remove all constraints.
    Recursively removes all explicit constraints that affect the view and its subviews.
    WARNING: Apple's constraint solver is not optimized for large-scale constraint removal; you may encounter major performance issues after using this method.
    NOTE: This method preserves implicit constraints, such as intrinsic content size constraints, which you usually do not want to remove. */
- (void)mtt_autoRemoveConstraintsAffectingViewAndSubviews __attribute__((deprecated));

/** DEPRECATED as of MTTPureLayout v2.0.0. Retain a reference to and remove specific constraints instead, or recreate the view(s) entirely to remove all constraints.
    Recursively removes all constraints from the view and its subviews, optionally including implicit constraints.
    WARNING: Apple's constraint solver is not optimized for large-scale constraint removal; you may encounter major performance issues after using this method.
    NOTE: Implicit constraints are auto-generated lower priority constraints, and you usually do not want to remove these. */
- (void)mtt_autoRemoveConstraintsAffectingViewAndSubviewsIncludingImplicitConstraints:(BOOL)shouldRemoveImplicitConstraints __attribute__((deprecated));

@end
