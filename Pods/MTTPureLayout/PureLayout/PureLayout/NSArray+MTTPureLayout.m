//
//  NSArray+MTTPureLayout.m
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

#import "NSArray+MTTPureLayout.h"
#import "ALView+MTTPureLayout.h"
#import "NSLayoutConstraint+MTTPureLayout.h"
#import "MTTPureLayout+Internal.h"


#pragma mark - NSArray+MTTPureLayout

@implementation NSArray (MTTPureLayout)


#pragma mark Array of Constraints

/**
 Activates the constraints in this array.
 */
- (void)mtt_autoInstallConstraints
{
#if __MTTPureLayout_MinBaseSDK_iOS_8_0 || __MTTPureLayout_MinBaseSDK_OSX_10_10
    if ([NSLayoutConstraint respondsToSelector:@selector(activateConstraints:)]) {
        for (id object in self) {
            if ([object isKindOfClass:[NSLayoutConstraint class]]) {
                [MTTALView mttal_applyGlobalStateToConstraint:object];
            }
        }
        if ([MTTALView mttal_preventAutomaticConstraintInstallation]) {
            [[MTTALView mttal_currentArrayOfCreatedConstraints] addObjectsFromArray:self];
        } else {
            [NSLayoutConstraint activateConstraints:self];
        }
        return;
    }
#endif /* __PureLayout_MinBaseSDK_iOS_8_0 || __PureLayout_MinBaseSDK_OSX_10_10 */
    
    for (id object in self) {
        if ([object isKindOfClass:[NSLayoutConstraint class]]) {
            [((NSLayoutConstraint *) object) mtt_autoInstall];
        }
    }
}

/**
 Deactivates the constraints in this array.
 */
- (void)mtt_autoRemoveConstraints
{
#if __MTTPureLayout_MinBaseSDK_iOS_8_0 || __MTTPureLayout_MinBaseSDK_OSX_10_10
    if ([NSLayoutConstraint respondsToSelector:@selector(deactivateConstraints:)]) {
        [NSLayoutConstraint deactivateConstraints:self];
        return;
    }
#endif /* __PureLayout_MinBaseSDK_iOS_8_0 || __PureLayout_MinBaseSDK_OSX_10_10 */
    
    for (id object in self) {
        if ([object isKindOfClass:[NSLayoutConstraint class]]) {
            [((NSLayoutConstraint *) object) mtt_autoRemove];
        }
    }
}

#if __MTTPureLayout_MinBaseSDK_iOS_8_0

/**
 Sets the string as the identifier for the constraints in this array. Available in iOS 7.0 and OS X 10.9 and later.
 The identifier will be printed along with each constraint's description.
 This is helpful to document the constraints' purpose and aid in debugging.
 
 @param identifier A string used to identify the constraints in this array.
 @return This array.
 */
- (instancetype)mtt_autoIdentifyConstraints:(NSString *)identifier
{
    for (id object in self) {
        if ([object isKindOfClass:[NSLayoutConstraint class]]) {
            [((NSLayoutConstraint *) object) mtt_autoIdentify:identifier];
        }
    }
    return self;
}

#endif /* __PureLayout_MinBaseSDK_iOS_8_0 */


#pragma mark Array of Views

/**
 Aligns views in this array to one another along a given edge.
 Note: This array must contain at least 2 views, and all views must share a common superview.
 
 @param edge The edge to which the views will be aligned.
 @return An array of constraints added.
 */
- (NSArray *)mtt_autoAlignViewsToEdge:(MTTALEdge)edge
{
    NSAssert([self mttal_containsMinimumNumberOfViews:2], @"This array must contain at least 2 views.");
    NSMutableArray *constraints = [NSMutableArray new];
    MTTALView *previousView = nil;
    for (id object in self) {
        if ([object isKindOfClass:[MTTALView class]]) {
            MTTALView *view = (MTTALView *)object;
            view.translatesAutoresizingMaskIntoConstraints = NO;
            if (previousView) {
                [constraints addObject:[view mtt_autoPinEdge:edge toEdge:edge ofView:previousView]];
            }
            previousView = view;
        }
    }
    return constraints;
}

/**
 Aligns views in this array to one another along a given axis.
 Note: This array must contain at least 2 views, and all views must share a common superview.
 
 @param axis The axis to which the views will be aligned.
 @return An array of constraints added.
 */
- (NSArray *)mtt_autoAlignViewsToAxis:(MTTALAxis)axis
{
    NSAssert([self mttal_containsMinimumNumberOfViews:2], @"This array must contain at least 2 views.");
    NSMutableArray *constraints = [NSMutableArray new];
    MTTALView *previousView = nil;
    for (id object in self) {
        if ([object isKindOfClass:[MTTALView class]]) {
            MTTALView *view = (MTTALView *)object;
            view.translatesAutoresizingMaskIntoConstraints = NO;
            if (previousView) {
                [constraints addObject:[view mtt_autoAlignAxis:axis toSameAxisOfView:previousView]];
            }
            previousView = view;
        }
    }
    return constraints;
}

/**
 Matches a given dimension of all the views in this array.
 Note: This array must contain at least 2 views, and all views must share a common superview.
 
 @param dimension The dimension to match for all of the views.
 @return An array of constraints added.
 */
- (NSArray *)mtt_autoMatchViewsDimension:(MTTALDimension)dimension
{
    NSAssert([self mttal_containsMinimumNumberOfViews:2], @"This array must contain at least 2 views.");
    NSMutableArray *constraints = [NSMutableArray new];
    MTTALView *previousView = nil;
    for (id object in self) {
        if ([object isKindOfClass:[MTTALView class]]) {
            MTTALView *view = (MTTALView *)object;
            view.translatesAutoresizingMaskIntoConstraints = NO;
            if (previousView) {
                [constraints addObject:[view mtt_autoMatchDimension:dimension toDimension:dimension ofView:previousView]];
            }
            previousView = view;
        }
    }
    return constraints;
}

/**
 Sets the given dimension of all the views in this array to a given size.
 Note: This array must contain at least 1 view.
 
 @param dimension The dimension of each of the views to set.
 @param size The size to set the given dimension of each view to.
 @return An array of constraints added.
 */
- (NSArray *)mtt_autoSetViewsDimension:(MTTALDimension)dimension toSize:(CGFloat)size
{
    NSAssert([self mttal_containsMinimumNumberOfViews:1], @"This array must contain at least 1 view.");
    NSMutableArray *constraints = [NSMutableArray new];
    for (id object in self) {
        if ([object isKindOfClass:[MTTALView class]]) {
            MTTALView *view = (MTTALView *)object;
            view.translatesAutoresizingMaskIntoConstraints = NO;
            [constraints addObject:[view mtt_autoSetDimension:dimension toSize:size]];
        }
    }
    return constraints;
}

/**
 Sets all of the views in this array to a given size.
 Note: This array must contain at least 1 view.
 
 @param size The size to set each view's dimensions to.
 @return An array of constraints added.
 */
- (NSArray *)mtt_autoSetViewsDimensionsToSize:(CGSize)size
{
    NSMutableArray *constraints = [NSMutableArray new];
    [constraints addObjectsFromArray:[self mtt_autoSetViewsDimension:MTTALDimensionWidth toSize:size.width]];
    [constraints addObjectsFromArray:[self mtt_autoSetViewsDimension:MTTALDimensionHeight toSize:size.height]];
    return constraints;
}


/**
 Distributes the views in this array equally along the selected axis in their superview.
 Views will be the same size (variable) in the dimension along the axis and will have spacing (fixed) between them,
 including from the first and last views to their superview.
 
 @param axis The axis along which to distribute the views.
 @param alignment The attribute to use to align all the views to one another.
 @param spacing The fixed amount of spacing between each view.
 @return An array of constraints added.
 */
- (NSArray *)mtt_autoDistributeViewsAlongAxis:(MTTALAxis)axis
                                    alignedTo:(MTTALAttribute)alignment
                             withFixedSpacing:(CGFloat)spacing
{
    return [self mtt_autoDistributeViewsAlongAxis:axis
                                        alignedTo:alignment
                                 withFixedSpacing:spacing
                                     insetSpacing:YES];
}

/**
 Distributes the views in this array equally along the selected axis in their superview.
 Views will be the same size (variable) in the dimension along the axis and will have spacing (fixed) between them.
 The first and last views can optionally be inset from their superview by the same amount of spacing as between views.
 
 @param axis The axis along which to distribute the views.
 @param alignment The attribute to use to align all the views to one another.
 @param spacing The fixed amount of spacing between each view.
 @param shouldSpaceInsets Whether the first and last views should be equally inset from their superview.
 @return An array of constraints added.
 */
- (NSArray *)mtt_autoDistributeViewsAlongAxis:(MTTALAxis)axis
                                    alignedTo:(MTTALAttribute)alignment
                             withFixedSpacing:(CGFloat)spacing
                                 insetSpacing:(BOOL)shouldSpaceInsets
{
    return [self mtt_autoDistributeViewsAlongAxis:axis
                                        alignedTo:alignment
                                 withFixedSpacing:spacing
                                     insetSpacing:shouldSpaceInsets
                                     matchedSizes:YES];
}

/**
 Distributes the views in this array equally along the selected axis in their superview.
 Views will have fixed spacing between them, and can optionally be constrained to the same size in the dimension along the axis.
 The first and last views can optionally be inset from their superview by the same amount of spacing as between views.
 
 @param axis The axis along which to distribute the views.
 @param alignment The attribute to use to align all the views to one another.
 @param spacing The fixed amount of spacing between each view.
 @param shouldSpaceInsets Whether the first and last views should be equally inset from their superview.
 @param shouldMatchSizes Whether all views will be constrained to be the same size in the dimension along the axis.
                         NOTE: All views must specify an intrinsic content size if passing NO, otherwise the layout will be ambiguous!
 @return An array of constraints added.
 */
- (NSArray *)mtt_autoDistributeViewsAlongAxis:(MTTALAxis)axis
                                    alignedTo:(MTTALAttribute)alignment
                             withFixedSpacing:(CGFloat)spacing
                                 insetSpacing:(BOOL)shouldSpaceInsets
                                 matchedSizes:(BOOL)shouldMatchSizes
{
    NSAssert([self mttal_containsMinimumNumberOfViews:2], @"This array must contain at least 2 views to distribute.");
    MTTALDimension matchedDimension;
    MTTALEdge firstEdge, lastEdge;
    switch (axis) {
        case MTTALAxisHorizontal:
        case MTTALAxisBaseline: // same value as MTTALAxisLastBaseline
#if __MTTPureLayout_MinBaseSDK_iOS_8_0
        case MTTALAxisFirstBaseline:
#endif /* __PureLayout_MinBaseSDK_iOS_8_0 */
            matchedDimension = MTTALDimensionWidth;
            firstEdge = MTTALEdgeLeading;
            lastEdge = MTTALEdgeTrailing;
            break;
        case MTTALAxisVertical:
            matchedDimension = MTTALDimensionHeight;
            firstEdge = MTTALEdgeTop;
            lastEdge = MTTALEdgeBottom;
            break;
        default:
            NSAssert(nil, @"Not a valid MTTALAxis.");
            return nil;
    }
    CGFloat leadingSpacing = shouldSpaceInsets ? spacing : 0.0;
    CGFloat trailingSpacing = shouldSpaceInsets ? spacing : 0.0;
    
    NSMutableArray *constraints = [NSMutableArray new];
    MTTALView *previousView = nil;
    for (id object in self) {
        if ([object isKindOfClass:[MTTALView class]]) {
            MTTALView *view = (MTTALView *)object;
            view.translatesAutoresizingMaskIntoConstraints = NO;
            if (previousView) {
                // Second, Third, ... View
                [constraints addObject:[view mtt_autoPinEdge:firstEdge toEdge:lastEdge ofView:previousView withOffset:spacing]];
                if (shouldMatchSizes) {
                    [constraints addObject:[view mtt_autoMatchDimension:matchedDimension toDimension:matchedDimension ofView:previousView]];
                }
                [constraints addObject:[view mttal_alignAttribute:alignment toView:previousView forAxis:axis]];
            }
            else {
                // First view
                [constraints addObject:[view mtt_autoPinEdgeToSuperviewEdge:firstEdge withInset:leadingSpacing]];
            }
            previousView = view;
        }
    }
    if (previousView) {
        // Last View
        [constraints addObject:[previousView mtt_autoPinEdgeToSuperviewEdge:lastEdge withInset:trailingSpacing]];
    }
    return constraints;
}

/**
 Distributes the views in this array equally along the selected axis in their superview.
 Views will be the same size (fixed) in the dimension along the axis and will have spacing (variable) between them,
 including from the first and last views to their superview.
 
 @param axis The axis along which to distribute the views.
 @param alignment The attribute to use to align all the views to one another.
 @param size The fixed size of each view in the dimension along the given axis.
 @return An array of constraints added.
 */
- (NSArray *)mtt_autoDistributeViewsAlongAxis:(MTTALAxis)axis
                                    alignedTo:(MTTALAttribute)alignment
                                withFixedSize:(CGFloat)size
{
    return [self mtt_autoDistributeViewsAlongAxis:axis
                                        alignedTo:alignment
                                    withFixedSize:size
                                     insetSpacing:YES];
}

/**
 Distributes the views in this array equally along the selected axis in their superview.
 Views will be the same size (fixed) in the dimension along the axis and will have spacing (variable) between them.
 The first and last views can optionally be inset from their superview by the same amount of spacing as between views.
 
 @param axis The axis along which to distribute the views.
 @param alignment The attribute to use to align all the views to one another.
 @param size The fixed size of each view in the dimension along the given axis.
 @param shouldSpaceInsets Whether the first and last views should be equally inset from their superview.
 @return An array of constraints added.
 */
- (NSArray *)mtt_autoDistributeViewsAlongAxis:(MTTALAxis)axis
                                    alignedTo:(MTTALAttribute)alignment
                                withFixedSize:(CGFloat)size
                                 insetSpacing:(BOOL)shouldSpaceInsets
{
    NSAssert([self mttal_containsMinimumNumberOfViews:2], @"This array must contain at least 2 views to distribute.");
    MTTALDimension fixedDimension;
    NSLayoutAttribute attribute;
    switch (axis) {
        case MTTALAxisHorizontal:
        case MTTALAxisBaseline: // same value as MTTALAxisLastBaseline
#if __MTTPureLayout_MinBaseSDK_iOS_8_0
        case MTTALAxisFirstBaseline:
#endif /* __PureLayout_MinBaseSDK_iOS_8_0 */
            fixedDimension = MTTALDimensionWidth;
            attribute = NSLayoutAttributeCenterX;
            break;
        case MTTALAxisVertical:
            fixedDimension = MTTALDimensionHeight;
            attribute = NSLayoutAttributeCenterY;
            break;
        default:
            NSAssert(nil, @"Not a valid MTTALAxis.");
            return nil;
    }
#if TARGET_OS_IPHONE
#   if !defined(PURELAYOUT_APP_EXTENSIONS)
    BOOL isRightToLeftLayout = [[UIApplication sharedApplication] userInterfaceLayoutDirection] == UIUserInterfaceLayoutDirectionRightToLeft;
#   else
    // App Extensions may not access -[UIApplication sharedApplication]; fall back to checking the bundle's preferred localization character direction
    BOOL isRightToLeftLayout = [NSLocale characterDirectionForLanguage:[[NSBundle mainBundle] preferredLocalizations][0]] == NSLocaleLanguageDirectionRightToLeft;
#   endif /* !defined(PURELAYOUT_APP_EXTENSIONS) */
#else
    BOOL isRightToLeftLayout = [[NSApplication sharedApplication] userInterfaceLayoutDirection] == NSUserInterfaceLayoutDirectionRightToLeft;
#endif /* TARGET_OS_IPHONE */
    BOOL shouldFlipOrder = isRightToLeftLayout && (axis != MTTALAxisVertical); // imitate the effect of leading/trailing when distributing horizontally
    
    NSMutableArray *constraints = [NSMutableArray new];
    NSArray *views = [self mttal_copyViewsOnly];
    NSUInteger numberOfViews = [views count];
    MTTALView *commonSuperview = [views mttal_commonSuperviewOfViews];
    MTTALView *previousView = nil;
    for (NSUInteger i = 0; i < numberOfViews; i++) {
        MTTALView *view = shouldFlipOrder ? views[numberOfViews - i - 1] : views[i];
        view.translatesAutoresizingMaskIntoConstraints = NO;
        [constraints addObject:[view mtt_autoSetDimension:fixedDimension toSize:size]];
        CGFloat multiplier, constant;
        if (shouldSpaceInsets) {
            multiplier = (i * 2.0 + 2.0) / (numberOfViews + 1.0);
            constant = (multiplier - 1.0) * size / 2.0;
        } else {
            multiplier = (i * 2.0) / (numberOfViews - 1.0);
            constant = (-multiplier + 1.0) * size / 2.0;
        }
        // If the multiplier is very close to 0, set it to the minimum value to prevent the second item in the constraint from being lost. Filed as rdar://19168380
        if (fabs(multiplier) < MTT_PURELAYOUT_MULTIPLIER_MIN_VALUE) {
            multiplier = MTT_PURELAYOUT_MULTIPLIER_MIN_VALUE;
        }
        NSLayoutConstraint *constraint = [NSLayoutConstraint constraintWithItem:view attribute:attribute relatedBy:NSLayoutRelationEqual toItem:commonSuperview attribute:attribute multiplier:multiplier constant:constant];
        [constraint mtt_autoInstall];
        [constraints addObject:constraint];
        if (previousView) {
            [constraints addObject:[view mttal_alignAttribute:alignment toView:previousView forAxis:axis]];
        }
        previousView = view;
    }
    return constraints;
}

#pragma mark Internal Helper Methods

/**
 Returns the common superview for the views in this array.
 Raises an exception if the views in this array do not share a common superview.
 
 @return The common superview for the views in this array.
 */
- (MTTALView *)mttal_commonSuperviewOfViews
{
    MTTALView *commonSuperview = nil;
    MTTALView *previousView = nil;
    for (id object in self) {
        if ([object isKindOfClass:[MTTALView class]]) {
            MTTALView *view = (MTTALView *)object;
            if (previousView) {
                commonSuperview = [view mttal_commonSuperviewWithView:commonSuperview];
            } else {
                commonSuperview = view;
            }
            previousView = view;
        }
    }
    NSAssert(commonSuperview, @"Can't constrain views that do not share a common superview. Make sure that all the views in this array have been added into the same view hierarchy.");
    return commonSuperview;
}

/**
 Determines whether this array contains a minimum number of views.
 
 @param minimumNumberOfViews The minimum number of views to check for.
 @return YES if this array contains at least the minimum number of views, NO otherwise.
 */
- (BOOL)mttal_containsMinimumNumberOfViews:(NSUInteger)minimumNumberOfViews
{
    NSUInteger numberOfViews = 0;
    for (id object in self) {
        if ([object isKindOfClass:[MTTALView class]]) {
            numberOfViews++;
            if (numberOfViews >= minimumNumberOfViews) {
                return YES;
            }
        }
    }
    return numberOfViews >= minimumNumberOfViews;
}

/**
 Creates a copy of this array containing only the view objects in it.
 
 @return A new array containing only the views that are in this array.
 */
- (NSArray *)mttal_copyViewsOnly
{
    NSMutableArray *viewsOnlyArray = [NSMutableArray arrayWithCapacity:[self count]];
    for (id object in self) {
        if ([object isKindOfClass:[MTTALView class]]) {
            [viewsOnlyArray addObject:object];
        }
    }
    return viewsOnlyArray;
}

@end
