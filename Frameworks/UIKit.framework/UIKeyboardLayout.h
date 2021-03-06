/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardLayout : UIView <_UIKBRTRecognizerDelegate, _UIScreenEdgePanRecognizerDelegate> {
    NSUUID *_activeTouchUUID;
    UIKBCadenceMonitor *_cadenceMonitor;
    unsigned int _cursorLocation;
    id /* block */ _deferredTouchDownTask;
    id /* block */ _deferredTouchMovedTask;
    NSMutableDictionary *_deferredTouchTaskLists;
    BOOL _disableInteraction;
    _UIKBRTRecognizer *_handRestRecognizer;
    BOOL _hasPreferredHeight;
    UITextInputTraits *_inputTraits;
    BOOL _isExecutingDeferredTouchTasks;
    BOOL _listeningForDidChange;
    BOOL _listeningForWillChange;
    float _preferredHeight;
    _UIScreenEdgePanRecognizer *_screenEdgePanRecognizer;
    UIKBScreenTraits *_screenTraits;
    NSUUID *_shiftKeyTouchUUID;
    UIKeyboardTaskQueue *_taskQueue;
    UIKBTextEditingTraits *_textEditingTraits;
    double _timestampOfLastTouchesEnded;
    NSMutableSet *_touchIgnoredUUIDSet;
    NSMutableArray *_uncommittedTouchUUIDs;
    BOOL hideKeysUnderIndicator;
    double lastTouchUpTime;
}

@property (nonatomic, retain) NSUUID *activeTouchUUID;
@property (nonatomic, retain) UIKBCadenceMonitor *cadenceMonitor;
@property (nonatomic) unsigned int cursorLocation;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) id /* block */ deferredTouchDownTask;
@property (nonatomic, copy) id /* block */ deferredTouchMovedTask;
@property (nonatomic, retain) NSMutableDictionary *deferredTouchTaskLists;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableInteraction;
@property (nonatomic, retain) _UIKBRTRecognizer *handRestRecognizer;
@property (nonatomic, readonly) BOOL hasPreferredHeight;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL hideKeysUnderIndicator;
@property (nonatomic, readonly) int idiom;
@property (nonatomic) BOOL isExecutingDeferredTouchTasks;
@property (nonatomic) double lastTouchUpTime;
@property (nonatomic, retain) NSString *layoutTag;
@property (nonatomic) BOOL listeningForDidChange;
@property (nonatomic) BOOL listeningForWillChange;
@property (nonatomic, readonly) int orientation;
@property (nonatomic) float preferredHeight;
@property (nonatomic, retain) _UIScreenEdgePanRecognizer *screenEdgePanRecognizer;
@property (nonatomic, retain) NSUUID *shiftKeyTouchUUID;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIKeyboardTaskQueue *taskQueue;
@property (nonatomic, readonly) double timestampOfLastTouchesEnded;
@property (nonatomic, retain) NSMutableSet *touchIgnoredUUIDSet;

+ (BOOL)_showSmallDisplayKeyplane;
+ (Class)_subclassForScreenTraits:(id)arg1;
+ (struct CGSize { float x1; float x2; })keyboardSizeForInputMode:(id)arg1 screenTraits:(id)arg2 keyboardType:(int)arg3;

- (void)_addTouchToScreenEdgePanRecognizer:(id)arg1;
- (BOOL)_canAddTouchesToScreenGestureRecognizer:(id)arg1;
- (void)_enumerateDeferredTouchUUIDs:(id)arg1 withBlock:(id /* block */)arg2;
- (void)_executeDeferredTouchTasks;
- (void)_markTouchesCancelled:(id)arg1;
- (void)_notifyLayoutOfGesturePosition:(struct CGPoint { float x1; float x2; })arg1 relativeToEdge:(unsigned int)arg2;
- (BOOL)_shouldAllowKeyboardHandlingForTouchesBegan:(id)arg1 withEvent:(id)arg2;
- (BOOL)_shouldAllowKeyboardHandlingForTouchesEndedOrCancelled:(id)arg1 withEvent:(id)arg2;
- (BOOL)_shouldAllowKeyboardHandlingForTouchesMoved:(id)arg1 withEvent:(id)arg2;
- (BOOL)_shouldAllowKeyboardHandlingIfNecessaryForTouch:(id)arg1 phase:(int)arg2 withTouchState:(id)arg3 task:(id /* block */)arg4;
- (void)_touchEndedProcessingForTouches:(id)arg1;
- (void)acceptRecentInputIfNecessary;
- (id)activationIndicatorView;
- (id)activeTouchUUID;
- (void)addWipeRecognizer;
- (void)assertSavedLocation:(struct CGPoint { float x1; float x2; })arg1 onTouch:(id)arg2 inWindow:(id)arg3 resetPrevious:(BOOL)arg4;
- (id)baseKeyForString:(id)arg1;
- (id)cadenceMonitor;
- (BOOL)canForceTouchUUIDCommit:(id)arg1 inWindow:(id)arg2;
- (BOOL)canHandleEvent:(id)arg1;
- (BOOL)canMultitap;
- (BOOL)canProduceString:(id)arg1;
- (void)cancelTouchesForTwoFingerTapGesture:(id)arg1;
- (id)candidateList;
- (void)changeToKeyplane:(id)arg1;
- (void)clearShiftIfNecessaryForEndedTouchState:(id)arg1;
- (void)clearTransientState;
- (void)clearUnusedObjects:(BOOL)arg1;
- (void)commitTouchUUIDs:(id)arg1;
- (void)commitTouches:(id)arg1 executionContext:(id)arg2;
- (id)currentKeyplane;
- (unsigned int)cursorLocation;
- (void)deactivateActiveKeys;
- (void)deactivateActiveKeysClearingTouchInfo:(BOOL)arg1 clearingDimming:(BOOL)arg2;
- (void)dealloc;
- (id /* block */)deferredTouchDownTask;
- (id /* block */)deferredTouchMovedTask;
- (id)deferredTouchTaskLists;
- (BOOL)diacriticForwardCompose;
- (void)didClearInput;
- (void)didCommitTouchState:(id)arg1;
- (void)didEndIndirectSelectionGesture;
- (void)didFinishScreenGestureRecognition;
- (void)didRecognizeGestureOnEdge:(unsigned int)arg1 withDistance:(float)arg2;
- (BOOL)disableInteraction;
- (struct CGSize { float x1; float x2; })dragGestureSize;
- (void)fadeWithInvocation:(id)arg1;
- (float)flickDistance;
- (void)forceUpdatesForCommittedTouch;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForKeylayoutName:(id)arg1;
- (id)handRestRecognizer;
- (BOOL)handRestRecognizerShouldNeverIgnoreTouchState:(id)arg1 fromPoint:(struct CGPoint { float x1; float x2; })arg2 toPoint:(struct CGPoint { float x1; float x2; })arg3 whenResting:(BOOL)arg4 otherRestedTouchLocations:(id)arg5;
- (id /* block */)handRestRecognizerSilenceNextTouchDown;
- (struct CGSize { float x1; float x2; })handRestRecognizerStandardKeyPixelSize;
- (SEL)handlerForNotification:(id)arg1;
- (BOOL)hasAccentKey;
- (BOOL)hasCandidateKeys;
- (BOOL)hasPreferredHeight;
- (BOOL)hideKeysUnderIndicator;
- (float)hitBuffer;
- (int)idiom;
- (BOOL)ignoresShiftState;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isAlphabeticPlane;
- (BOOL)isEmojiKeyplane;
- (BOOL)isExecutingDeferredTouchTasks;
- (BOOL)isShiftKeyBeingHeld;
- (BOOL)isShiftKeyPlaneChooser;
- (BOOL)keyplaneContainsEmojiKey;
- (id)keyplaneForKey:(id)arg1;
- (id)keyplaneNamed:(id)arg1;
- (double)lastTouchUpTime;
- (id)layoutTag;
- (BOOL)listeningForDidChange;
- (BOOL)listeningForWillChange;
- (void)longPressAction;
- (int)orientation;
- (BOOL)performReturnAction;
- (BOOL)performSpaceAction;
- (float)preferredHeight;
- (BOOL)queryShouldNeverIgnoreTouchStateWithIdentifier:(id)arg1 touchState:(id)arg2 startPoint:(struct CGPoint { float x1; float x2; })arg3 forResting:(BOOL)arg4;
- (BOOL)recognizer:(id)arg1 beginTouchDownForTouchWithId:(id)arg2 atPoint:(struct CGPoint { float x1; float x2; })arg3 forBeginState:(unsigned int)arg4;
- (void)recognizer:(id)arg1 cancelTouchOnLayoutWithId:(id)arg2 startPoint:(struct CGPoint { float x1; float x2; })arg3 endPoint:(struct CGPoint { float x1; float x2; })arg4;
- (void)recognizer:(id)arg1 releaseTouchToLayoutWithId:(id)arg2 startPoint:(struct CGPoint { float x1; float x2; })arg3 endPoint:(struct CGPoint { float x1; float x2; })arg4;
- (BOOL)recognizer:(id)arg1 restartTouchDownForTouchWithId:(id)arg2 startingAt:(double)arg3 atPoint:(struct CGPoint { float x1; float x2; })arg4 currentPoint:(struct CGPoint { float x1; float x2; })arg5;
- (BOOL)recognizer:(id)arg1 shouldContinueTrackingTouchWithId:(id)arg2 startingAt:(double)arg3 atPoint:(struct CGPoint { float x1; float x2; })arg4 currentPoint:(struct CGPoint { float x1; float x2; })arg5 forResting:(BOOL)arg6;
- (void)recognizer:(id)arg1 willIgnoreTouchWithId:(id)arg2 startingAt:(double)arg3 atPoint:(struct CGPoint { float x1; float x2; })arg4 currentPoint:(struct CGPoint { float x1; float x2; })arg5;
- (void)reloadKeyboardGestureRecognition;
- (void)resetHRRLayoutState;
- (void)restoreDefaultsForAllKeys;
- (void)restoreDefaultsForKey:(id)arg1;
- (id)screenEdgePanRecognizer;
- (void)screenEdgePanRecognizerStateDidChange:(id)arg1;
- (void)setAction:(SEL)arg1 forKey:(id)arg2;
- (void)setActiveTouchUUID:(id)arg1;
- (void)setAutoshift:(BOOL)arg1;
- (void)setCadenceMonitor:(id)arg1;
- (void)setCursorLocation:(unsigned int)arg1;
- (void)setDeferredTouchDownTask:(id /* block */)arg1;
- (void)setDeferredTouchMovedTask:(id /* block */)arg1;
- (void)setDeferredTouchTaskLists:(id)arg1;
- (void)setDisableInteraction:(BOOL)arg1;
- (void)setDisableTouchInput:(BOOL)arg1;
- (void)setHandRestRecognizer:(id)arg1;
- (void)setHideKeysUnderIndicator:(BOOL)arg1;
- (void)setIsExecutingDeferredTouchTasks:(BOOL)arg1;
- (void)setLabel:(id)arg1 forKey:(id)arg2;
- (void)setLastTouchUpTime:(double)arg1;
- (void)setLayoutTag:(id)arg1;
- (void)setListeningForDidChange:(BOOL)arg1;
- (void)setListeningForWillChange:(BOOL)arg1;
- (void)setLongPressAction:(SEL)arg1 forKey:(id)arg2;
- (void)setPasscodeOutlineAlpha:(float)arg1;
- (void)setPreferredHeight:(float)arg1;
- (void)setRecentInputs:(id)arg1;
- (void)setRenderConfig:(id)arg1;
- (void)setReturnKeyEnabled:(BOOL)arg1 withDisplayName:(id)arg2 withType:(int)arg3;
- (void)setScreenEdgePanRecognizer:(id)arg1;
- (void)setShift:(BOOL)arg1;
- (void)setShiftKeyTouchUUID:(id)arg1;
- (void)setTarget:(id)arg1 forKey:(id)arg2;
- (void)setTaskQueue:(id)arg1;
- (void)setTextEditingTraits:(id)arg1;
- (void)setTouchIgnoredUUIDSet:(id)arg1;
- (void)setTwoFingerTapTimestamp:(double)arg1;
- (id)shiftKeyTouchUUID;
- (BOOL)shouldAddHandRestRecognizer;
- (BOOL)shouldAllowSelectionGestures:(BOOL)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2 toBegin:(BOOL)arg3;
- (BOOL)shouldFadeFromLayout;
- (BOOL)shouldFadeToLayout;
- (BOOL)shouldShowIndicator;
- (void)showKeyboardWithInputTraits:(id)arg1 screenTraits:(id)arg2 splitTraits:(id)arg3;
- (id)simulateTouch:(struct CGPoint { float x1; float x2; })arg1;
- (id)simulateTouchForCharacter:(id)arg1 errorVector:(struct CGPoint { float x1; float x2; })arg2 shouldTypeVariants:(BOOL)arg3 baseKeyForVariants:(BOOL)arg4;
- (BOOL)supportsEmoji;
- (unsigned int)targetEdgesForScreenGestureRecognition;
- (id)taskQueue;
- (unsigned int)textEditingKeyMask;
- (double)timestampOfLastTouchesEnded;
- (void)touchCancelled:(id)arg1;
- (void)touchCancelled:(id)arg1 executionContext:(id)arg2;
- (id /* block */)touchCancelledTaskForTouchState:(id)arg1;
- (void)touchDown:(id)arg1;
- (void)touchDown:(id)arg1 executionContext:(id)arg2;
- (id /* block */)touchDownTaskForTouchState:(id)arg1;
- (void)touchDragged:(id)arg1;
- (void)touchDragged:(id)arg1 executionContext:(id)arg2;
- (id /* block */)touchDraggedTaskForTouchState:(id)arg1;
- (id)touchIgnoredUUIDSet;
- (id)touchUUIDsToCommitBeforeTouchUUID:(id)arg1;
- (void)touchUp:(id)arg1;
- (void)touchUp:(id)arg1 executionContext:(id)arg2;
- (id /* block */)touchUpTaskForTouchState:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)triggerSpaceKeyplaneSwitchIfNecessary;
- (void)updateBackgroundCorners;
- (void)updateLocalizedKeys:(BOOL)arg1;
- (BOOL)usesAutoShift;
- (void)willBeginIndirectSelectionGesture;
- (void)willMoveToWindow:(id)arg1;
- (void)wipeGestureRecognized:(id)arg1;

@end
