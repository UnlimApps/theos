/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import <UIKit/UIView.h>
#import <UIKit/UIProgressView.h>
#import <Availability2.h>

@interface UIProgressView ()
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
+(int)_styleImageIndexForStyle:(int)style barStyle:(int)style2;
+(void)_loadResourcesForStyle:(int)style barStyle:(int)style2;
#else
+(CGSize)defaultSize;
+(void)_loadResourcesForStyle:(int)style;
#endif
// inherited: -(id)initWithFrame:(CGRect)frame;
// in a protocol: -(id)initWithCoder:(id)coder;
// in a protocol: -(void)encodeWithCoder:(id)coder;
// -(CGSize)sizeThatFits:(CGSize)fits;
-(void)drawOverlayProgressView:(CGRect)view;
-(void)drawProgressView:(CGRect)view;
// -(void)drawRect:(CGRect)rect;
@end

@interface UIProgressView (UIKitAccessibilityInterfaceBuilderSupport)
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
@end

#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
@interface UIProgressView (Private)
+(CGSize)defaultSize;
-(int)barStyle;
-(void)setBarStyle:(int)style;
@end
#endif
