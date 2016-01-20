//
//  NSLayoutConstraint+MTTPureLayout.m
//  v2.0.5
//  https://github.com/smileyborg/PureLayout
//
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

#import "NSLayoutConstraint+MTTPureLayout.h"
#import "ALView+MTTPureLayout.h"
#import "MTTPureLayout+Internal.h"


#pragma mark - NSLayoutConstraint+MTTPureLayout

@implementation NSLayoutConstraint (MTTPureLayout)


#pragma mark Installing & Removing Constraints

/**
 Activates the constraint.
 */
- (void)mtt_autoInstall
{
#if __MTTPureLayout_MinBaseSDK_iOS_8_0 || __MTTPureLayout_MinBaseSDK_OSX_10_10
    if ([self respondsToSelector:@selector(setActive:)]) {
        [MTTALView mttal_applyGlobalStateToConstraint:self];
        if ([MTTALView mttal_preventAutomaticConstraintInstallation]) {
            [[MTTALView mttal_currentArrayOfCreatedConstraints] addObject:self];
        } else {
            self.active = YES;
        }
        return;
    }
#endif /* __PureLayout_MinBaseSDK_iOS_8_0 || __PureLayout_MinBaseSDK_OSX_10_10 */
    
    NSAssert(self.firstItem || self.secondItem, @"Can't install a constraint with nil firstItem and secondItem.");
    if (self.firstItem) {
        if (self.secondItem) {
            NSAssert([self.firstItem isKindOfClass:[MTTALView class]] && [self.secondItem isKindOfClass:[MTTALView class]], @"Can only automatically install a constraint if both items are views.");
            MTTALView *commonSuperview = [self.firstItem mttal_commonSuperviewWithView:self.secondItem];
            [commonSuperview mttal_addConstraint:self];
        } else {
            NSAssert([self.firstItem isKindOfClass:[MTTALView class]], @"Can only automatically install a constraint if the item is a view.");
            [self.firstItem mttal_addConstraint:self];
        }
    } else {
        NSAssert([self.secondItem isKindOfClass:[MTTALView class]], @"Can only automatically install a constraint if the item is a view.");
        [self.secondItem mttal_addConstraint:self];
    }
}

/**
 Deactivates the constraint.
 */
- (void)mtt_autoRemove
{
#if __MTTPureLayout_MinBaseSDK_iOS_8_0 || __MTTPureLayout_MinBaseSDK_OSX_10_10
    if ([self respondsToSelector:@selector(setActive:)]) {
        self.active = NO;
        return;
    }
#endif /* __PureLayout_MinBaseSDK_iOS_8_0 || __PureLayout_MinBaseSDK_OSX_10_10 */
    
    if (self.secondItem) {
        MTTALView *commonSuperview = [self.firstItem mttal_commonSuperviewWithView:self.secondItem];
        while (commonSuperview) {
            if ([commonSuperview.constraints containsObject:self]) {
                [commonSuperview removeConstraint:self];
                return;
            }
            commonSuperview = commonSuperview.superview;
        }
    }
    else {
        [self.firstItem removeConstraint:self];
        return;
    }
    NSAssert(nil, @"Failed to remove constraint: %@", self);
}


#pragma mark Identify Constraints

#if __MTTPureLayout_MinBaseSDK_iOS_8_0 || __MTTPureLayout_MinBaseSDK_OSX_10_10

/**
 Sets the string as the identifier for this constraint. Available in iOS 7.0 and OS X 10.9 and later.
 The identifier will be printed along with the constraint's description.
 This is helpful to document a constraint's purpose and aid in debugging.
 
 @param identifier A string used to identify this constraint.
 @return This constraint.
 */
- (instancetype)mtt_autoIdentify:(NSString *)identifier
{
    if ([self respondsToSelector:@selector(setIdentifier:)]) {
        self.identifier = identifier;
    }
    return self;
}

#endif /* __PureLayout_MinBaseSDK_iOS_8_0 || __PureLayout_MinBaseSDK_OSX_10_10 */


#pragma mark Internal Methods

/**
 Returns the corresponding NSLayoutAttribute for the given MTTALAttribute.
 
 @return The layout attribute for the given MTTALAttribute.
 */
+ (NSLayoutAttribute)mttal_layoutAttributeForAttribute:(MTTALAttribute)attribute
{
    NSLayoutAttribute layoutAttribute = NSLayoutAttributeNotAnAttribute;
    switch (attribute) {
        case MTTALEdgeLeft:
            layoutAttribute = NSLayoutAttributeLeft;
            break;
        case MTTALEdgeRight:
            layoutAttribute = NSLayoutAttributeRight;
            break;
        case MTTALEdgeTop:
            layoutAttribute = NSLayoutAttributeTop;
            break;
        case MTTALEdgeBottom:
            layoutAttribute = NSLayoutAttributeBottom;
            break;
        case MTTALEdgeLeading:
            layoutAttribute = NSLayoutAttributeLeading;
            break;
        case MTTALEdgeTrailing:
            layoutAttribute = NSLayoutAttributeTrailing;
            break;
        case MTTALDimensionWidth:
            layoutAttribute = NSLayoutAttributeWidth;
            break;
        case MTTALDimensionHeight:
            layoutAttribute = NSLayoutAttributeHeight;
            break;
        case MTTALAxisVertical:
            layoutAttribute = NSLayoutAttributeCenterX;
            break;
        case MTTALAxisHorizontal:
            layoutAttribute = NSLayoutAttributeCenterY;
            break;
        case MTTALAxisBaseline: // same value as MTTALAxisLastBaseline
            layoutAttribute = NSLayoutAttributeBaseline;
            break;
#if __MTTPureLayout_MinBaseSDK_iOS_8_0
        case MTTALAxisFirstBaseline:
            NSAssert(__MTTPureLayout_MinSysVer_iOS_8_0, @"MTTALAxisFirstBaseline is only supported on iOS 8.0 or higher.");
            layoutAttribute = NSLayoutAttributeFirstBaseline;
            break;
        case MTTALMarginLeft:
            NSAssert(__MTTPureLayout_MinSysVer_iOS_8_0, @"ALEdgeLeftMargin is only supported on iOS 8.0 or higher.");
            layoutAttribute = NSLayoutAttributeLeftMargin;
            break;
        case MTTALMarginRight:
            NSAssert(__MTTPureLayout_MinSysVer_iOS_8_0, @"MTTALEdgeRightMargin is only supported on iOS 8.0 or higher.");
            layoutAttribute = NSLayoutAttributeRightMargin;
            break;
        case MTTALMarginTop:
            NSAssert(__MTTPureLayout_MinSysVer_iOS_8_0, @"MTTALEdgeTopMargin is only supported on iOS 8.0 or higher.");
            layoutAttribute = NSLayoutAttributeTopMargin;
            break;
        case MTTALMarginBottom:
            NSAssert(__MTTPureLayout_MinSysVer_iOS_8_0, @"ALEdgeBottomMargin is only supported on iOS 8.0 or higher.");
            layoutAttribute = NSLayoutAttributeBottomMargin;
            break;
        case MTTALMarginLeading:
            NSAssert(__MTTPureLayout_MinSysVer_iOS_8_0, @"ALEdgeLeadingMargin is only supported on iOS 8.0 or higher.");
            layoutAttribute = NSLayoutAttributeLeadingMargin;
            break;
        case MTTALMarginTrailing:
            NSAssert(__MTTPureLayout_MinSysVer_iOS_8_0, @"ALEdgeTrailingMargin is only supported on iOS 8.0 or higher.");
            layoutAttribute = NSLayoutAttributeTrailingMargin;
            break;
        case MTTALMarginAxisVertical:
            NSAssert(__MTTPureLayout_MinSysVer_iOS_8_0, @"MTTALAxisVerticalMargin is only supported on iOS 8.0 or higher.");
            layoutAttribute = NSLayoutAttributeCenterXWithinMargins;
            break;
        case MTTALMarginAxisHorizontal:
            NSAssert(__MTTPureLayout_MinSysVer_iOS_8_0, @"ALAxisHorizontalMargin is only supported on iOS 8.0 or higher.");
            layoutAttribute = NSLayoutAttributeCenterYWithinMargins;
            break;
#endif /* __PureLayout_MinBaseSDK_iOS_8_0 */
        default:
            NSAssert(nil, @"Not a valid MTTALAttribute.");
            break;
    }
    return layoutAttribute;
}

/**
 Returns the corresponding MTTALLayoutConstraintAxis for the given MTTALAxis.
 
 @return The constraint axis for the given axis.
 */
+ (MTTALLayoutConstraintAxis)mttal_constraintAxisForAxis:(MTTALAxis)axis
{
    MTTALLayoutConstraintAxis constraintAxis;
    switch (axis) {
        case MTTALAxisVertical:
            constraintAxis = MTTALLayoutConstraintAxisVertical;
            break;
        case MTTALAxisHorizontal:
        case MTTALAxisBaseline: // same value as MTTALAxisLastBaseline
#if __MTTPureLayout_MinBaseSDK_iOS_8_0
        case MTTALAxisFirstBaseline:
#endif /* __PureLayout_MinBaseSDK_iOS_8_0 */
            constraintAxis = MTTALLayoutConstraintAxisHorizontal;
            break;
        default:
            NSAssert(nil, @"Not a valid MTTALAxis.");
            constraintAxis = MTTALLayoutConstraintAxisHorizontal; // default to a random value to satisfy the compiler
            break;
    }
    return constraintAxis;
}

#if __MTTPureLayout_MinBaseSDK_iOS_8_0

/**
 Returns the corresponding margin for the given edge.
 
 @param edge The edge to convert to the corresponding margin.
 @return The margin for the given edge.
 */
+ (MTTALMargin)mttal_marginForEdge:(MTTALEdge)edge
{
    NSAssert(__MTTPureLayout_MinSysVer_iOS_8_0, @"Margin attributes are only supported on iOS 8.0 or higher.");
    MTTALMargin margin;
    switch (edge) {
        case MTTALEdgeLeft:
            margin = MTTALMarginLeft;
            break;
        case MTTALEdgeRight:
            margin = MTTALMarginRight;
            break;
        case MTTALEdgeTop:
            margin = MTTALMarginTop;
            break;
        case MTTALEdgeBottom:
            margin = MTTALMarginBottom;
            break;
        case MTTALEdgeLeading:
            margin = MTTALMarginLeading;
            break;
        case MTTALEdgeTrailing:
            margin = MTTALMarginTrailing;
            break;
        default:
            NSAssert(nil, @"Not a valid MTTALEdge.");
            margin = MTTALMarginLeft; // default to a random value to satisfy the compiler
            break;
    }
    return margin;
}

/**
 Returns the corresponding margin axis for the given axis.
 
 @param axis The axis to convert to the corresponding margin axis.
 @return The margin axis for the given axis.
 */
+ (MTTALMarginAxis)mttal_marginAxisForAxis:(MTTALAxis)axis
{
    NSAssert(__MTTPureLayout_MinSysVer_iOS_8_0, @"Margin attributes are only supported on iOS 8.0 or higher.");
    MTTALMarginAxis marginAxis;
    switch (axis) {
        case MTTALAxisVertical:
            marginAxis = MTTALMarginAxisVertical;
            break;
        case MTTALAxisHorizontal:
            marginAxis = MTTALMarginAxisHorizontal;
            break;
        case MTTALAxisBaseline:
        case MTTALAxisFirstBaseline:
            NSAssert(nil, @"The baseline axis attributes do not have corresponding margin axis attributes.");
            marginAxis = MTTALMarginAxisVertical; // default to a random value to satisfy the compiler
            break;
        default:
            NSAssert(nil, @"Not a valid MTTALAxis.");
            marginAxis = MTTALMarginAxisVertical; // default to a random value to satisfy the compiler
            break;
    }
    return marginAxis;
}

#endif /* __PureLayout_MinBaseSDK_iOS_8_0 */

@end
