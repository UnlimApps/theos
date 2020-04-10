/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import <UIKit/UIView.h>
#import "UIKeyboardImpl.h"
#import <Availability2.h>

@class UIKeyboardLayout, UIKeyboardInputManager, UIDelayedAction, NSMutableDictionary, UITextInputTraits, NSArray, NSTimer, UIKeyboardLanguageIndicator, CandWord, NSString, UIAutocorrectInlinePrompt;
@class UIKeyboardCandidate, UITextInputArrowKeyHistory, NSMutableArray;
@protocol UIKeyboardCandidateList, UIKeyboardInput, UIKeyboardRecording, UIApplicationEventRecording;
@protocol UIKeyInput, UIKeyboardImplGeometryDelegate;

@protocol UIKeyboardRecording
-(void)startKeyboardRecording:(UITextInputTraits*)traits withInputMode:(NSString*)mode withString:(NSString*)str withIndex:(int)index withKeyboard:(BOOL)keyboardCanHandleKeyHitTest;
@end


@interface UIKeyboardImpl : UIView {
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
	id<UIKeyInput> m_delegate;
	UIView* m_languageIndicator;
#else
	id<UIKeyboardInput> m_delegate;
	UIKeyboardLanguageIndicator* m_languageIndicator;
#endif
	NSString* m_previousInputString;
	UIKeyboardInputManager* m_inputManager;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
	CandWord* m_autocorrection;
#else
	UIKeyboardCandidate* m_autocorrection;
#endif
	UIAutocorrectInlinePrompt* m_autocorrectPrompt;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
	UIDelayedAction* m_autocorrectPromptAction;
#endif
	NSMutableDictionary* m_autocorrectHistoryLists;
	NSArray* m_candidates;
	id<UIKeyboardCandidateList> m_candidateList;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
	id<UIKeyboardImplGeometryDelegate> m_geometryDelegate;
#endif
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_0
	NSObject<UIKeyboardRecording, UIApplicationEventRecording>* m_recorder;
#endif
	UIKeyboardLayout* m_layout;
	NSMutableDictionary* m_keyedLayouts;
	NSString* m_inputModeLastChosen;
	UIDelayedAction* m_synchronizePreferencesAction;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
	struct {
		NSTimer* timer;
		GSEventRef eventToRepeat;
		BOOL firstRepeat;
	} m_hardwareRepeat;
#endif
	NSTimer* m_autoDeleteTimer;
	unsigned m_autoDeleteCount;
	double m_autoDeleteLastDelete;
	double m_autoDeleteInterval;
	unsigned short m_autoDeleteShiftCharacter;
	UIDelayedAction* m_longPressAction;
	int m_orientation;
	CGPoint m_inputPoint;
	int m_changeCount;
	double m_changeTime;
	CFRunLoopObserverRef m_observer;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
	unsigned m_textInputChangingCount;
	BOOL m_textInputChangingText;
	BOOL m_textInputChangesIgnored;
#endif	
	UITextInputTraits* m_defaultTraits;
	UITextInputTraits* m_traits;
	int m_returnKeyState;
	int m_currentDirection;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
	BOOL m_anotherTouchWaiting;
	BOOL m_autoDeleteOK;
	BOOL m_autocapitalizationPreference;
	BOOL m_autocorrectPromptTimerFired;
	BOOL m_autocorrectionPreference;
	BOOL m_autoshift;
	BOOL m_caretShowingNow;
	BOOL m_changeNotificationDisabled;
	BOOL m_changed;
	BOOL m_delegateIsSMSTextView;
	BOOL m_delegateRequiresKeyEvents;
	BOOL m_doubleSpacePeriodPreference;
	BOOL m_hardwareKeyboardAttached;
	BOOL m_inDealloc;
	BOOL m_inHardwareKeyboardMode;
	BOOL m_initializationDone;
	BOOL m_performDecomposingDelete;
	BOOL m_performanceLoggingEnabled;
	BOOL m_preferencesNeedSynchronization;
	BOOL m_selecting;
	BOOL m_shift;
	BOOL m_shiftLocked;
	BOOL m_shiftLockedEnabled;
	BOOL m_settingShift;
	BOOL m_shouldSkipCandidateSelection;
	BOOL m_showingCandidateBar;
	BOOL m_swipeToTabPreference;
	BOOL m_updatingPreferences;
	BOOL m_zoomEnabled;
	BOOL m_zoomed;
	BOOL m_changingGeometryWithSameOrientation;
	BOOL m_suppressGeometryChangeNotifications;
	BOOL m_userChangedSelection;
	BOOL m_shouldChargeKeys;
	BOOL m_longPress;
	BOOL m_syntheticInput;
	BOOL m_replacingWord;
	BOOL m_shiftNeedsUpdate;
	BOOL m_shiftPreventAutoshift;
	BOOL m_shiftHeldDownNeedsUpdated;
	BOOL m_delegateAdoptsTextInput;
	BOOL m_delegateAdoptsTextInputPrivate;
	BOOL m_delegateAdoptsKeyboardInput;
	BOOL m_clientVariantSupportEnabled;
	BOOL m_clientVariantSupportEnabledEver;
	NSMutableArray* m_keyplaneNamesPreviousDelegate;
	NSMutableArray* m_keyplaneNamesCurrentDelegate;
	UITextInputArrowKeyHistory* m_arrowKeyHistory;
	BOOL m_preRotateShift;
	BOOL m_preRotateShiftLocked;
#else
	BOOL m_autocorrectionPreference;
	BOOL m_autocapitalizationPreference;
	BOOL m_doubleSpacePeriodPreference;
	BOOL m_autoDeleteOK;
	BOOL m_autoshift;
	BOOL m_initializationDone;
	BOOL m_preferencesNeedSynchronization;
	BOOL m_shift;
	BOOL m_shiftLockedEnabled;
	BOOL m_shiftLocked;
	BOOL m_changed;
	BOOL m_selecting;
	BOOL m_inDealloc;
	BOOL m_caretVisible;
	BOOL m_caretBlinks;
	BOOL m_caretShowingNow;
	BOOL m_updatingPreferences;
	BOOL m_anotherTouchWaiting;
	BOOL m_performDecomposingDelete;
	BOOL m_delegateIsSMSTextView;
	BOOL m_performanceLoggingEnabled;
	BOOL m_shouldSkipCandidateSelection;
	BOOL m_autocorrectPromptTimerFired;
	BOOL m_changeNotificationDisabled;
	BOOL m_userChangedSelection;
	BOOL m_shouldChargeKeys;
	BOOL m_longPress;
	BOOL m_syntheticInput;
	BOOL m_shiftNeedsUpdate;
	BOOL m_shiftPreventAutoshift;
	BOOL m_shiftHeldDownNeedsUpdated;	
#endif
}
@property(retain, nonatomic) id<UIKeyboardRecording, UIApplicationEventRecording> recorder __OSX_AVAILABLE_STARTING(__MAC_NA, __IPHONE_3_1);
@property(assign, nonatomic) BOOL shouldSkipCandidateSelection;
+(UIKeyboardImpl*)sharedInstance;
+(UIKeyboardImpl*)activeInstance;
+(void)releaseSharedInstance;
+(void)applicationWillSuspend:(UIApplication*)application;
+(CGSize)defaultSize;
+(CGSize)defaultSizeForOrientation:(UIInterfaceOrientation)orientation;
+(CGSize)defaultSizeForInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation;
+(UIInterfaceOrientation)orientationForSize:(CGSize)size;
-(id)initWithFrame:(CGRect)frame;
-(void)delayedInit;
-(void)dealloc;
-(void)clearLayouts;
-(void)removeFromSuperview;
-(void)applicationSuspendedEventsOnly:(id)only;
-(void)applicationResumedEventsOnly:(id)only;
-(void)defaultsDidChange;
-(void)defaultsDidChange:(id)defaults;
-(void)synchronizePreferencesIfNeeded;
-(void)synchronizePreferences;
-(void)touchSynchronizePreferencesTimer;
-(void)clearSynchronizePreferencesTimer;
-(BOOL)performanceLoggingPreference;
-(BOOL)autocorrectionPreference;
-(BOOL)autocorrectionPreferenceForTraits;
-(BOOL)autocapitalizationPreference;
-(BOOL)doubleSpacePeriodPreference;
-(id)UILanguagePreference;
-(BOOL)keyboardsExpandedPreference;
-(void)setKeyboardsExpandedPreference;
-(BOOL)canWriteKeyboardsExpandedPreferences;
-(id)inputModePreference;
-(id)localePreference;
-(void)setInputModePreference;
-(id)inputModeFirstPreference;
-(id)inputModeLastChosenPreference;
-(void)setInputModeLastChosenPreference;
-(id)inputModeLastUsedPreference;
-(void)setInputModeLastUsedPreference;
-(void)setKeyboardDefault:(id)aDefault forKey:(id)key;
-(id)keyboardDefaultForKey:(id)key;
-(BOOL)shiftLockPreference;
-(void)setInputMode:(id)mode;
-(void)setInputModeFromPreferences;
-(void)showInputModeIndicator;
-(void)fadeAnimationDidStop:(id)fadeAnimation finished:(id)finished;
-(BOOL)isDesiredInputMode:(id)mode;
-(BOOL)isAllowedInputMode:(id)mode;
-(void)setInputModeToNextInPreferredList;
-(void)setInputModeToNextASCIICapableInPreferredList;
-(id)inputModeLastChosen;
-(void)setOrientationForSize:(CGSize)size;
-(void)setFrame:(CGRect)frame;
-(void)setDelegate:(id)delegate force:(BOOL)force;
-(void)postEmptyDelegateNotificationIfNeeded;
-(BOOL)delegateIsSMSTextView;
-(void)setInitialDirection;
-(void)textChanged:(id)changed;
-(void)setDefaultTextInputTraits:(id)traits;
-(id)textInputTraits;
-(void)enable;
-(BOOL)callShouldInsertText:(id)call;
-(BOOL)callShouldDelete;
-(void)callChangedSelection;
-(void)callChanged;
-(void)setChanged;
-(void)clearChangedDelegate;
-(BOOL)changeNotificationDisabled;
-(void)setChangeNotificationDisabled:(BOOL)disabled;
-(void)updateObserverState;
-(void)handleObserverCallback;
-(void)prepareForGeometryChange;
-(void)geometryChangeDone:(BOOL)done;
-(CGRect)subtractKeyboardFrameFromRect:(CGRect)rect inView:(id)view;
-(void)updateLayout;
-(UIInterfaceOrientation)orientation;
-(void)setMarkedText;
-(BOOL)hasMarkedText;
-(BOOL)hasEditableMarkedText;
-(id)searchStringForMarkedText;
-(void)prepareForSelectionChange;
-(void)setSelectionWithPoint:(CGPoint)point;
-(void)updateForChangedSelection;
-(void)updateInputManagerAutoShiftFlag;
-(BOOL)shouldSwitchInputMode:(id)mode __OSX_AVAILABLE_STARTING(__MAC_NA, __IPHONE_3_1);
-(void)recomputeActiveInputModes;
-(void)notifyShiftState;
-(void)updateShiftState;
-(void)setShiftOffIfNeeded;
-(void)toggleShift;
-(void)setShift:(BOOL)shift;
-(void)setShift:(BOOL)shift autoshift:(BOOL)autoshift;
-(void)setShiftPreventAutoshift:(BOOL)autoshift;
-(void)setShiftNeedsUpdate;
-(BOOL)isShifted;
-(BOOL)isAutoShifted;
-(BOOL)isShiftLocked;
-(BOOL)shiftLockedEnabled;
-(void)clearShiftState;
-(void)forceShiftUpdate;
-(void)forceShiftUpdateIfKeyboardStateChanged;
-(BOOL)suppliesCompletions;
-(void)keyActivated;
-(void)keyDeactivated;
-(void)setInputPoint:(CGPoint)point;
-(void)handleDeleteAsRepeat:(BOOL)repeat;
-(void)handleDelete;
-(void)handleStringInput:(id)input fromVariantKey:(BOOL)variantKey;
-(BOOL)acceptInputString:(id)string;
-(void)setPreviousInputString:(id)string;
-(void)addInputString:(id)string;
-(void)addInputString:(id)string fromVariantKey:(BOOL)variantKey;
-(void)setPhraseBoundary:(unsigned)boundary;
-(unsigned)phraseBoundary;
-(void)setInputString:(id)string;
-(BOOL)shouldEnableShiftForDeletedCharacter:(unsigned short)deletedCharacter;
-(void)updateLayoutAndSetShift;
-(void)handleDeleteWithZeroInputCount;
-(void)handleDeleteWithNonZeroInputCount;
-(void)deleteFromInput;
-(void)acceptAutocorrection;
-(void)acceptCandidate:(id)candidate atIndex:(unsigned)index;
-(void)acceptCurrentCandidate;
-(void)acceptCurrentCandidateIfSelected;
-(void)showNextCandidates;
-(void)candidateListAcceptCandidate:(id)candidate;
-(void)candidateListSelectionDidChange:(id)candidateListSelection;
-(id)candidateList;
-(void)clearInput;
-(void)setInputObject:(id)object;
-(void)addInputObject:(id)object;
-(void)clearTransientState;
-(void)clearAnimations;
-(void)acceptWord:(id)word firstDelete:(unsigned)aDelete addString:(id)string;
-(BOOL)displaysCandidates;
-(void)updateCandidateDisplayAsyncWithCandidates:(id)candidates forInputManager:(id)inputManager;
-(BOOL)needsToDeferUpdateTextCandidateView __OSX_AVAILABLE_STARTING(__MAC_NA, __IPHONE_3_1);
-(void)updateCandidateDisplay;
-(void)setAutocorrection:(id)autocorrection;
-(id)autocorrectPrompt;
-(void)removeAutocorrectPrompt;
-(void)setCandidates:(id)candidates;
-(int)returnKeyType;
-(BOOL)returnKeyEnabled;
-(void)setReturnKeyEnabled:(BOOL)enabled;
-(void)updateReturnKey;
-(void)updateReturnKey:(BOOL)key;
-(id)automaticallySelectedOverlay;
-(id)inputOverlayContainer;
-(void)updateTextCandidateView;
-(CGRect)convertRectToAutocorrectRect:(CGRect)autocorrectRect delegateView:(id)view container:(id)container;
-(void)touchAutocorrectPromptTimer;
-(void)clearAutocorrectPromptTimer;
-(void)updateAutocorrectPromptAction;
-(void)updateAutocorrectPrompt:(id)prompt;
-(void)animateAutocorrection;
-(void)fadeAutocorrectPrompt;
-(void)autocorrectionAnimationDidStop:(id)autocorrectionAnimation finished:(id)finished context:(void*)context;
-(BOOL)delegateSuggestionsForCurrentInput;
-(BOOL)shouldChargeKeys;
-(CFDictionaryRef)chargedKeyProbabilities;
-(void)touchAutoDeleteTimerWithThreshold:(double)threshold;
-(void)autoDeleteTimerFired:(id)fired;
-(void)startAutoDeleteTimer;
-(void)stopAutoDelete;
-(void)touchLongPressTimerWithDelay:(double)delay;
-(void)touchLongPressTimer;
-(void)clearLongPressTimer;
-(void)longPressAction;
-(BOOL)isLongPress;
-(void)clearTimers;
-(void)clearChangeTimeAndCount;
-(void)updateChangeTimeAndIncrementCount;
-(int)changeCount;
-(void)setAnotherTouchWaiting:(BOOL)waiting;
-(void)handleHardwareKeyDownFromSimulator:(GSEventRef)simulator;
-(void)startCaretBlinkIfNeeded;
-(void)setCaretBlinks:(BOOL)blinks;
-(void)setCaretVisible:(BOOL)visible;
-(BOOL)caretBlinks;
-(BOOL)caretVisible;
-(void)clearSelection;
-(BOOL)canHandleKeyHitTest;
-(void)clearKeyAreas;
-(void)registerKeyArea:(CGPoint)area withRadii:(CGPoint)radii forKeyCode:(unsigned short)keyCode forLowerKey:(id)lowerKey forUpperKey:(id)upperKey;
-(BOOL)keySlidIntoSwipe;
-(BOOL)pointInside:(CGPoint)inside withEvent:(id)event;
-(BOOL)pointInside:(CGPoint)inside forEvent:(GSEventRef)event;
-(BOOL)isAutoFillMode;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
@property(retain, nonatomic) UITextInputArrowKeyHistory* arrowKeyHistory;
@property(assign, nonatomic) id<UIKeyboardImplGeometryDelegate> geometryDelegate;
@property(retain, nonatomic) UIKeyboardInputManager* inputManager;
@property(readonly, assign, nonatomic) UIResponder* delegateAsResponder;
@property(readonly, assign, nonatomic) id<UIKeyboardInput> legacyInputDelegate;
@property(readonly, assign, nonatomic) UIResponder<UITextInputPrivate>* privateInputDelegate;
@property(readonly, assign, nonatomic) UIResponder<UITextInput>* inputDelegate;
@property(assign, nonatomic) UIResponder<UIKeyInput>* delegate;
@property(assign, nonatomic, getter=isZoomed, setter=setZoomed:) BOOL zoomed;
@property(readonly, assign, nonatomic, getter=isZoomEnabled) BOOL zoomEnabled;
@property(assign, nonatomic, getter=isInHardwareKeyboardMode) BOOL inHardwareKeyboardMode;
+(CGSize)sizeForInterfaceOrientation:(int)interfaceOrientation;
+(float)additionalInstanceHeight;
-(BOOL)zoomPreference;
-(BOOL)isClientVariantSupportEnabled;
-(id)clientVariantDelegate;
-(id)clientVariantsForKey:(id)key;
-(id)clientOverrideForKey:(id)key;
-(void)performClientVariantActionNamed:(id)named;
-(void)prepareUsedKeyplaneNameListForNewDelegate;
-(BOOL)flushKeyplaneName:(id)name;
-(void)releaseKeyplaneNameFromPreviousDelegateList:(id)previousDelegateList;
-(void)retainKeyplaneNameInCurrentDelegateList:(id)currentDelegateList;
-(BOOL)swipeToTabPreference;
-(void)prepareLayoutForInterfaceOrientation:(int)interfaceOrientation;
-(void)updateLayoutToCurrentInterfaceOrientation;
-(void)takeTextInputTraitsFromDelegate;
-(BOOL)delegateSupportsCorrectionUI;
-(void)setAutocorrectSpellingEnabled:(BOOL)enabled;
-(BOOL)autocorrectSpellingEnabled;
-(void)storeDelegateConformance;
-(void)textWillChange:(id)text;
-(void)textDidChange:(id)text;
-(BOOL)handleKeyCommand:(GSEventRef)command repeatOkay:(BOOL*)okay;
-(void)selectionWillChange:(id)selection;
-(void)selectionDidChange:(id)selection;
-(void)setShiftLocked:(BOOL)locked;
-(void)setShiftLockedForced:(BOOL)forced;
-(void)replaceText:(id)text;
-(void)scheduleReplacementsWithOptions:(unsigned)options;
-(id)showCandidateBar;
-(void)hideCandidateBar;
-(BOOL)isMinimized;
-(BOOL)isCandidateBarShowing;
-(BOOL)noContent;
-(id)returnKeyDisplayName;
-(id)autocorrectHistoryForInputMode:(id)inputMode;
-(id)typingForAutocorrection:(id)autocorrection;
-(void)addTyping:(id)typing forAutocorrection:(id)autocorrection;
-(void)generateCandidates;
-(void)generateCandidatesWithCompletions:(BOOL)completions;
-(id)generateAutocorrectionReplacements;
-(void)hardwareKeyboardAvailabilityChanged;
-(void)hardwareAutoRepeat:(id)repeat;
-(void)firstHardwareAutoRepeat:(id)repeat;
-(void)hideKeyboard;
-(void)showKeyboard;
-(void)dismissKeyboard;
-(void)cancelAllKeyEvents;
-(BOOL)isValidKeyInput:(id)input;
-(void)updateKeyboardEventsLagging:(GSEventRef)lagging;
-(void)handleKeyEvent:(GSEventRef)event;
-(void)mediaKeyDown:(GSEventRef)down;
-(int)keyHitTest:(CGPoint)test touchStage:(int)stage atTime:(double)time withTouch:(id)touch forceShift:(BOOL)shift;
#else
-(void)setInputModeIfDifferentThanCurrent:(id)current;
-(void)updateLayoutForInterfaceOrientation:(int)interfaceOrientation;
-(void)takeTextInputTraitsFrom:(id)from;
-(id)delegate;
-(void)setDelegate:(id)delegate;
-(int)callPositionForAutocorrection:(id)autocorrection;
-(void)clearInputManager;
-(void)setShiftLocked;
-(void)generateCandidates:(BOOL)candidates;
-(void)timeMark:(unsigned)mark message:(id)message;
-(void)timeMark:(unsigned)mark;
-(void)timeElapsed:(unsigned)elapsed message:(id)message;
-(int)keyHitTest:(CGPoint)test touchStage:(int)stage atTime:(double)time withPathInfo:(XXStruct__FxRIA*)pathInfo forceShift:(BOOL)shift;
#endif
@end

@interface UIKeyboardImpl (UIKeyboardLayoutLanguageAdapter)
-(void)callLayoutUpdateReturnKey;
-(BOOL)callLayoutUsesAutoShift;
-(BOOL)callLayoutIsShiftKeyPlaneChooser;
-(BOOL)callLayoutShiftKeyRequiresImmediateUpdate;
-(BOOL)callLayoutIsShiftKeyBeingHeld;
-(void)callLayoutSetShift:(BOOL)shift;
-(void)callLayoutSetAutoshift:(BOOL)autoshift __OSX_AVAILABLE_STARTING(__MAC_NA, __IPHONE_3_2);
-(void)callLayoutLongPressAction;
-(void)callLayoutUpdateLocalizedKeys;
@end

#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_1
@interface UIKeyboardImpl (UIKeyboardRecording)
-(BOOL)keyboardRecordingEnabled;
-(void)installRecorder;
-(void)startKeyboardRecording;
-(void)stopKeyboardRecording;
@end
#endif

#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
@interface UIKeyboardImpl (UIKeyboardUnitTestSupport)
-(id)_layout;
-(void)_setInputManager:(id)manager;
-(void)_setShiftLockedEnabled:(BOOL)enabled;
-(BOOL)hasAutoRepeat;
-(void)updateFromTextInputTraits;
-(BOOL)_isShowingCandidateUIWithAvailableCandidates;
-(int)textInputChangingCount;
@end

@interface UIKeyboardImpl (UIKeyboardPerformance)
+(void)setProfilingEnabled:(BOOL)enabled;
+(void)markPerformance:(id)performance;
+(void)markElapsed:(id)elapsed;
-(void)timeMark:(unsigned)mark message:(id)message;
-(void)timeMark:(unsigned)mark;
-(void)timeElapsed:(unsigned)elapsed message:(id)message;
@end
#endif

