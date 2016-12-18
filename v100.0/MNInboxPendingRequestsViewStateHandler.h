/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNPendingRequestsStoreListener.h>
#import <Messenger/FBViewerContextClassProvidable.h>

@class MNPendingRequestsStore, MNUserSettings, MNInboxPendingRequestsViewStateListeningAnnouncer, NSString;

@interface MNInboxPendingRequestsViewStateHandler : NSObject <MNPendingRequestsStoreListener, FBViewerContextClassProvidable> {

	MNPendingRequestsStore* _pendingRequestsStore;
	MNUserSettings* _userSettings;
	MNInboxPendingRequestsViewStateListeningAnnouncer* _announcer;

}

@property (assign,nonatomic) BOOL dismissed; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)pendingRequestsMetadataDidUpdateFromOldMetadata:(id)arg1 toNewMetadata:(id)arg2 ;
-(id)initWithPendingRequestsStore:(id)arg1 userSettings:(id)arg2 ;
-(void)dealloc;
-(BOOL)dismissed;
-(void)setDismissed:(BOOL)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

