/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventPrivacyLevelInlineEditItem : EKEventEditItem {
    BOOL _currentSwitchState;
    BOOL _originalSwitchState;
}

- (void)_switchChanged:(id)arg1;
- (BOOL)canBeConfiguredForCalendarConstraints:(id)arg1;
- (id)cellForSubitemAtIndex:(unsigned int)arg1;
- (float)footerHeightForWidth:(float)arg1;
- (id)footerTitle;
- (BOOL)forceTableReloadOnSave;
- (BOOL)isInline;
- (void)refreshFromCalendarItemAndStore;
- (BOOL)requiresReconfigurationOnSave;
- (BOOL)saveAndDismissWithForce:(BOOL)arg1;
- (BOOL)shouldAppearWithVisibility:(int)arg1;

@end
