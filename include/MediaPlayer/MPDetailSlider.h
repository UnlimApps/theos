/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UIKit/UISlider.h>

@class NSTimer, UIImageView, UILabel, NSString;
@protocol MPDetailSliderDelegate;

@interface MPDetailSlider : UISlider {
	unsigned _allowsDetailScrubbing : 1;
	id _delegate;
	float _detailScrubbingVerticalRange;
	UIImageView* _downloadingTrackOverlay;
	UIImageView* _thumbImageView;
	UIImageView* _glowDetailScrubImageView;
	unsigned _isTracking : 1;
	unsigned _didBeginTracking : 1;
	unsigned _needsCommit : 1;
	unsigned _canCommit : 1;
	unsigned _active : 1;
	CGPoint _beginLocationInView;
	CGPoint _previousLocationInView;
	CGPoint _lastCommittedLocationInView;
	double _currentTime;
	double _duration;
	double _availableDuration;
	float _minScale;
	unsigned _durationAllowsDetailScrubbing : 1;
	UILabel* _currentTimeLabel;
	UILabel* _currentTimeInverseLabel;
	float _trackInset;
	float _maxTrackWidth;
	UIEdgeInsets _timeLabelInsets;
	int _scrubValue;
	unsigned _autoscrubActive : 1;
	NSTimer* _autoscrubTimer;
	int _style;
}
@property(assign, nonatomic) id<MPDetailSliderDelegate> delegate;
@property(assign, nonatomic) double duration;
@property(assign, nonatomic) double availableDuration;
@property(assign, nonatomic) UIEdgeInsets timeLabelInsets;
@property(assign, nonatomic) float detailScrubbingVerticalRange;
@property(readonly, assign, nonatomic) NSString* localizedScrubSpeedText;
@property(assign, nonatomic) BOOL allowsDetailScrubbing;
@property(assign, nonatomic, getter=isActive) BOOL active;
+(float)defaultHeight;
-(id)initWithFrame:(CGRect)frame style:(int)style maxTrackWidth:(float)width;
-(id)initWithFrame:(CGRect)frame style:(int)style;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)frame;
-(id)createThumbView;
-(id)currentThumbImage;
-(CGRect)trackRectForBounds:(CGRect)bounds;
-(CGRect)thumbRectForBounds:(CGRect)bounds trackRect:(CGRect)rect value:(float)value;
-(void)setValue:(float)value animated:(BOOL)animated;
-(BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;
-(void)_autoscrubTick:(id)tick;
-(BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;
-(void)endTrackingWithTouch:(id)touch withEvent:(id)event;
-(void)cancelTrackingWithEvent:(id)event;
-(BOOL)isTracking;
-(void)cancelTracking;
-(void)_setupControlsForStyle;
-(void)_updateTrackInset;
-(void)_adjustMinScale;
-(float)_scaleForVerticalPosition:(float)verticalPosition;
-(float)_scaleForIdealValueForVerticalPosition:(float)verticalPosition;
-(void)_updateTimeDisplayForTime:(double)time;
-(void)_updateTimeDisplayForTime:(double)time force:(BOOL)force;
-(id)_stringForCurrentTime:(double)currentTime;
-(id)_stringForInverseCurrentTime:(double)inverseCurrentTime;
-(void)_resetScrubInfo;
-(void)_commitValue;
-(void)_updateForAvailableDuraton;
-(void)_updateActiveState;
@end

