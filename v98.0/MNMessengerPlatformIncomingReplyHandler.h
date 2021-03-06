/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNExternalForwardDataFetcherListener.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNExternalForwardDataFetcher;
@class MNThreadNavigationCoordinator, FBUserSession, MNExternalDataToForwardContentMapper, FBMSyncedThreadKey, NSString;

@interface MNMessengerPlatformIncomingReplyHandler : NSObject <MNExternalForwardDataFetcherListener, FBClassProvidable> {

	MNThreadNavigationCoordinator* _threadNavigationCoordinator;
	FBUserSession* _userSession;
	MNExternalDataToForwardContentMapper* _contentMapper;
	id<MNExternalForwardDataFetcher> _dataFetcher;
	FBMSyncedThreadKey* _replyThreadKey;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithThreadNavigationCoordinator:(id)arg1 contentMapper:(id)arg2 userSession:(id)arg3 ;
-(void)willFetchExternalForwardDataWithMessageOutgoingAttribution:(id)arg1 ;
-(void)didFetchExternalForwardData:(id)arg1 messageOutgoingAttribution:(id)arg2 ;
-(void)didFailToFetchDataWithError:(id)arg1 ;
-(void)replyToThreadWithKey:(id)arg1 externalDataFetcher:(id)arg2 ;
@end

