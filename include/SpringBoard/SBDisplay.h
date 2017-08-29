/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UIKit.h>
#import "SpringBoard-Structs.h"
#import <Availability2.h>

@class NSMutableSet, NSMutableDictionary;

@interface SBDisplay : NSObject {
	NSMutableDictionary* _displayValues;
	NSMutableDictionary* _activationValues;
	NSMutableDictionary* _deactivationValues;
	unsigned _displaySettings;
	unsigned _activationSettings;
	unsigned _deactivationSettings;
	NSMutableSet* _suppressVolumeHudCategories;
	float _autoDimOverride;
	float _autoLockOverride;
	float _accelerometerSampleInterval;
	unsigned _expectsFaceContact : 1;
	unsigned _accelerometerDeviceOrientationChangedEventsEnabled : 1;
	unsigned _proximityEventsEnabled : 1;
	unsigned _showsProgress;
}
+(NSString *)_displayStatePath;
+(void)loadDisplayStates;
+(void)purgeOrphanedDisplayStates;
+(void)saveDisplayStates;
+(void)performDelayedSaveDisplayStates;
+(id)_applicationStateIDForDisplayIdentifier:(id)displayIdentifier urlScheme:(id)scheme;
+(id)_defaultValueForKey:(id)key applicationStateID:(id)anId;
+(void)setDefaultValue:(id)value forKey:(id)key displayIdentifier:(id)identifier urlScheme:(id)scheme;
+(id)defaultValueForKey:(id)key displayIdentifier:(id)identifier urlScheme:(id)scheme;
+(void)resetDefaultValuesForDisplayIdentifier:(id)displayIdentifier urlScheme:(id)scheme;
// inherited: -(void)dealloc;
-(id)copyWithZone:(NSZone*)zone;
-(NSString *)displayIdentifier;
-(id)urlScheme;
-(void)clearDisplaySettings;
-(void)setDisplaySetting:(unsigned)setting flag:(BOOL)flag;
-(void)setDisplaySetting:(unsigned)setting value:(id)value;
-(id)displayValue:(unsigned)value;
-(BOOL)displaySetting:(unsigned)setting;
-(void)clearActivationSettings;
-(void)setActivationSetting:(unsigned)setting flag:(BOOL)flag;
-(void)setActivationSetting:(unsigned)setting value:(id)value;
-(id)activationValue:(unsigned)value;
-(BOOL)activationSetting:(unsigned)setting;
-(void)clearDeactivationSettings;
-(void)setDeactivationSetting:(unsigned)setting flag:(BOOL)flag;
-(BOOL)deactivationSetting:(unsigned)setting;
-(void)setDeactivationSetting:(unsigned)setting value:(id)value;
-(id)deactivationValue:(unsigned)value;
-(void)activate;
-(void)launchSucceeded:(BOOL)succeeded;
-(void)deactivate;
-(void)deactivated;
-(void)deactivateAfterLocking;
-(void)kill;
-(void)_exitedCommon;
-(void)exitedAbnormally;
-(void)exitedNormally;
-(BOOL)allowsEventOnlySuspension;
-(BOOL)allowsDoubleHeightStatusBar:(BOOL)bar;
-(void)updateStatusBar:(double)bar;
-(int)defaultStatusBarMode;
-(int)statusBarMode;
-(double)autoDimTime;
-(void)setAutoDimTime:(double)time;
-(double)autoLockTime;
-(void)setAutoLockTime:(double)time;
-(void)setExpectsFaceContact:(BOOL)contact;
-(BOOL)expectsFaceContact;
-(void)setAccelerometerSampleInterval:(double)interval;
-(double)accelerometerSampleInterval;
-(void)setAccelerometerDeviceOrientationChangedEventsEnabled:(BOOL)enabled;
-(BOOL)accelerometerDeviceOrientationChangedEventsEnabled;
-(void)setProximityEventsEnabled:(BOOL)enabled;
-(BOOL)proximityEventsEnabled;
-(void)setShowsProgress:(BOOL)progress;
-(BOOL)showsProgress;
-(void)setSystemVolumeHUDEnabled:(BOOL)enabled forCategory:(id)category;
-(BOOL)showSystemVolumeHUDForCategory:(id)category;
// inherited: -(id)description;
-(NSString*)descriptionForDisplaySettings:(unsigned)displaySettings;
-(NSString*)displaySettingsDescription;
-(NSString*)descriptionForActivationSettings:(unsigned)activationSettings;
-(NSString*)activationSettingsDescription;
-(NSString*)descriptionForDeactivationSettings:(unsigned)deactivationSettings;
-(NSString*)deactivationSettingsDescription;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
-(void)updateStatusBar:(double)bar orientation:(UIInterfaceOrientation)orientation fence:(int)fence animation:(int)animation startTime:(double)time;
-(void)updateStatusBar:(double)bar orientation:(UIInterfaceOrientation)orientation;
-(UIInterfaceOrientation)launchInterfaceOrientationForCurrentOrientation;
-(UIInterfaceOrientation)launchInterfaceOrientationForCurrentOrientation:(UIInterfaceOrientation)orientation;
-(BOOL)defaultClassicAppZoomedIn;
-(BOOL)classicAppZoomedIn;
#endif
#if __IPHONE_OS_VERSION_MIN_REQUIRED < __IPHONE_3_2
-(void)updateStatusBar:(double)bar fence:(int)fence animation:(int)animation startTime:(double)time;
-(UIInterfaceOrientation)defaultStatusBarOrientation;
-(UIInterfaceOrientation)statusBarOrientation;
#endif
@end

