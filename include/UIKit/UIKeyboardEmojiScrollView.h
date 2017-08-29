/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import "UIScrollViewDelegate.h"
#import <UIKit/UIView.h>

@class UILabel, UIPageControl, NSMutableArray, UIKeyboardEmojiCategory, UIScrollView;
@protocol UIKeyboardEmojiController;

@interface UIKeyboardEmojiScrollView : UIView <UIScrollViewDelegate> {
	UIKeyboardEmojiCategory* _category;
	UIPageControl* _pageControl;
	UIScrollView* _scrollView;
	UILabel* _categoryLabel;
	NSMutableArray* _pages;
	int _currentPage;
	id<UIKeyboardEmojiController> _controller;
}
@property(assign) id<UIKeyboardEmojiController> controller;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(void)setFrame:(CGRect)frame;
-(void)forceLayout;
-(void)doLayout;
-(id)localizedStringForKey:(id)key;
-(void)layoutRecents;
-(void)delayedLayout:(id)layout;
-(void)layoutPages;
-(void)interruptScrolling;
-(void)clearPages;
-(void)setCategory:(id)category;
-(void)pageChanged;
-(void)scrollViewDidEndScrollingAnimation:(id)scrollView;
-(void)scrollViewWillBeginDecelerating:(id)scrollView;
-(void)ensureSurrounded:(int)surrounded;
-(int)currentPage;
-(void)drawRect:(CGRect)rect;
-(void)setScrollDelay:(double)delay;
-(void)goToFirstPage;
@end

