/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:56 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNMessagingRegionFetcherServiceListening.h>

@class MNUserSettings, FBMobileConfigContextManager, NSString;

@interface MNMessagingRegionFetchPolicy : NSObject <MNMessagingRegionFetcherServiceListening> {

	MNUserSettings* _userSettings;
	FBMobileConfigContextManager* _configManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithUserSettings:(id)arg1 configManager:(id)arg2 ;
-(void)_markMessagingRegionFetchedNow;
-(void)messagingRegionFetcherService:(id)arg1 didFetchMessagingRegionInfo:(id)arg2 ;
-(void)messagingRegionFetcherService:(id)arg1 didFailToFetchMessagingRegionInfoWithError:(id)arg2 ;
-(BOOL)shouldFetchMessagingRegion;
@end

