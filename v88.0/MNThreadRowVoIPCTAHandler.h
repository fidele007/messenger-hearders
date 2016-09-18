/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:45 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNThreadRowCTAHandling.h>

@class FBWebRTCCallController, MNUserStore, NSString;

@interface MNThreadRowVoIPCTAHandler : NSObject <FBClassProvidable, MNThreadRowCTAHandling> {

	FBWebRTCCallController* _callController;
	MNUserStore* _userStore;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)_startCallToUserId:(id)arg1 callTrigger:(id)arg2 ;
-(void)_joinCallWithGroupThreadProperties:(id)arg1 serverInfoData:(id)arg2 callTrigger:(id)arg3 ;
-(void)handleAction:(id)arg1 inViewModel:(id)arg2 ;
@end

