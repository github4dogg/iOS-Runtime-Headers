/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

@interface SunriseSunsetProvider : NSObject {
    id /* block */ _callbackBlock;
    CDContextStore *_duetContextStore;
    NSObject<OS_dispatch_semaphore> *_duetDispatchSemaphore;
    NSDictionary *_duetInfo;
    int _logLevel;
    BOOL _sunriseSunsetNotificationEnabled;
    id /* block */ _sunriseSunsetNotificationHandler;
    int _sunriseSunsetNotificationToken;
}

@property int logLevel;

- (void)cancel;
- (id)copySunriseSunsetInfo:(int)arg1;
- (void)dealloc;
- (id)initWithCallback:(id /* block */)arg1;
- (int)logLevel;
- (void)registerBlock:(id /* block */)arg1;
- (void)setLogLevel:(int)arg1;
- (void)unregisterBlock;
- (void)unregisterNotification;
- (void)updateSunriseSunsetInfo;

@end
