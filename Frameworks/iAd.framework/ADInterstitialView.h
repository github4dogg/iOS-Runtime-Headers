/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@class ADAdRecipientRecord, ADInterstitialAd<ADInterstitialViewDelegate>, ADRemoteView, ADTapGestureRecognizer, NSString, UIView, UIViewController<ADInterstitialViewDelegate>;

@interface ADInterstitialView : UIView <ADAdRecipient> {
    BOOL _actionInProgress;
    BOOL _actionWasCancelled;
    NSString *_advertisingSection;
    NSString *_authenticationUserName;
    BOOL _dimmed;
    UIView *_dimmerView;
    ADTapGestureRecognizer *_gestureRecognizer;
    BOOL _hasLoaded;
    NSString *_identifier;
    ADInterstitialAd<ADInterstitialViewDelegate> *_interstitialAd;
    BOOL _interstitialWasDismissedByUser;
    BOOL _loaded;
    UIViewController<ADInterstitialViewDelegate> *_modalViewController;
    BOOL _presentedInView;
    int _previousOrientation;
    ADAdRecipientRecord *_recipientRecord;
    ADRemoteView *_remoteView;
    NSString *_section;
    BOOL _touchesBeganOnCloseBox;
}

@property(getter=isActionInProgress,readonly) BOOL actionInProgress;
@property BOOL actionWasCancelled;
@property(copy) NSString * advertisingSection;
@property(copy) NSString * authenticationUserName;
@property BOOL dimmed;
@property(retain) UIView * dimmerView;
@property(retain) ADTapGestureRecognizer * gestureRecognizer;
@property BOOL hasLoaded;
@property(copy) NSString * identifier;
@property ADInterstitialAd<ADInterstitialViewDelegate> * interstitialAd;
@property BOOL interstitialWasDismissedByUser;
@property(getter=isLoaded) BOOL loaded;
@property UIViewController<ADInterstitialViewDelegate> * modalViewController;
@property BOOL presentedInView;
@property int previousOrientation;
@property(retain) ADRemoteView * remoteView;
@property(copy) NSString * section;
@property BOOL touchesBeganOnCloseBox;

+ (void)setSkipLoadedExceptionCheck:(BOOL)arg1;

- (void)_actionDidfinish;
- (BOOL)_actionShouldBegin;
- (void)_didFailToReceiveAdWithError:(id)arg1;
- (void)_didLoadAd;
- (void)_didUnloadAd;
- (void)_gestureHandler:(id)arg1;
- (void)_orientationChanged;
- (void)_sanitizeAndForwardErrorToDelegate:(id)arg1;
- (void)_setLoaded:(BOOL)arg1;
- (void)_willLoadAd;
- (BOOL)actionWasCancelled;
- (void)addSubview:(id)arg1;
- (id)advertisingSection;
- (id)authenticationUserName;
- (void)bannerControllerGranted;
- (void)bannerControllerRevoked;
- (void)cancelAction;
- (void)dealloc;
- (void)didMoveToWindow;
- (BOOL)dimmed;
- (id)dimmerView;
- (void)exchangeSubviewAtIndex:(int)arg1 withSubviewAtIndex:(int)arg2;
- (id)gestureRecognizer;
- (BOOL)hasLoaded;
- (id)identifier;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)insertSubview:(id)arg1 above:(id)arg2;
- (void)insertSubview:(id)arg1 aboveSubview:(id)arg2;
- (void)insertSubview:(id)arg1 atIndex:(int)arg2;
- (void)insertSubview:(id)arg1 below:(id)arg2;
- (void)insertSubview:(id)arg1 belowSubview:(id)arg2;
- (int)internalAdType;
- (id)interstitialAd;
- (BOOL)interstitialWasDismissedByUser;
- (BOOL)isActionInProgress;
- (BOOL)isLoaded;
- (id)modalViewController;
- (BOOL)presentedInView;
- (int)previousOrientation;
- (id)remoteView;
- (void)removeFromSuperview;
- (id)section;
- (void)serverBannerViewDidFailToReceiveAdWithError:(id)arg1;
- (void)serverBannerViewDidLoad;
- (void)serverBannerViewWillLoad;
- (void)serverInterstitialViewExpiredAndWasUnloaded;
- (void)serverStoryboardDidTransitionOut;
- (void)setActionInProgress:(BOOL)arg1;
- (void)setActionWasCancelled:(BOOL)arg1;
- (void)setAdvertisingSection:(id)arg1;
- (void)setAlpha:(float)arg1;
- (void)setAuthenticationUserName:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setCenter:(struct CGPoint { float x1; float x2; })arg1;
- (void)setDimmed:(BOOL)arg1;
- (void)setDimmerView:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setGestureRecognizer:(id)arg1;
- (void)setHasLoaded:(BOOL)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInterstitialAd:(id)arg1;
- (void)setInterstitialWasDismissedByUser:(BOOL)arg1;
- (void)setModalViewController:(id)arg1;
- (void)setPresentedInView:(BOOL)arg1;
- (void)setPreviousOrientation:(int)arg1;
- (void)setRemoteView:(id)arg1;
- (void)setSection:(id)arg1;
- (void)setTouchesBeganOnCloseBox:(BOOL)arg1;
- (void)setTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (BOOL)touchesBeganOnCloseBox;

@end