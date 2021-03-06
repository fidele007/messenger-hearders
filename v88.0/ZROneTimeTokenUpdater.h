/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:59 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>

@class NSNotificationCenter, ZRTokenUpdater, NSString;

@interface ZROneTimeTokenUpdater : NSObject <FBClassProvidable> {

	NSNotificationCenter* _notificationCenter;
	ZRTokenUpdater* _zeroTokenUpdater;
	/*^block*/id _completionBlock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)updateTokenWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithZeroTokenUpdater:(id)arg1 ;
-(void)_startZeroRatingObservers;
-(void)_stopZeroRatingObservers;
-(void)_completeUpdateWithError:(id)arg1 ;
-(void)_zeroTokenRefreshCompletedWithNotification:(id)arg1 ;
-(void)_zeroTokenRefreshFailedWithNotification:(id)arg1 ;
-(void)dealloc;
@end

