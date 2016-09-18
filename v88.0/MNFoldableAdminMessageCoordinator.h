/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>

@class MNThreadViewModel, FBMMessageKey, MNFoldableAdminViewStateListenerAnnouncer, NSString;

@interface MNFoldableAdminMessageCoordinator : NSObject <FBViewerContextClassProvidable> {

	MNThreadViewModel* _threadViewModel;
	FBMMessageKey* _newestGameMessageKey;
	FBMMessageKey* _newestMediaMessageKey;
	MNFoldableAdminViewStateListenerAnnouncer* _announcer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)updateViewStateMapWithThreadViewModel:(id)arg1 sourceUpdater:(id)arg2 updateType:(long long)arg3 ;
-(void)updateViewStateMapWithViewState:(long long)arg1 forMessageKey:(id)arg2 sourceUpdater:(id)arg3 updateType:(long long)arg4 ;
-(id)_mutableViewStateMapFromSourceUpdater:(id)arg1 ;
-(void)_updateViewStateMap:(id)arg1 viewState:(long long)arg2 messageKey:(id)arg3 ;
-(void)_updateGamesAdminMessageStateWithNewestMessage:(id)arg1 sourceUpdater:(id)arg2 updateType:(long long)arg3 ;
-(void)_updateMediaAdminMessageStateWithNewestMessage:(id)arg1 sourceUpdater:(id)arg2 updateType:(long long)arg3 ;
-(void)_mutateViewStateMapWithPreviousNewestMessageKey:(id)arg1 newestMessageKey:(id)arg2 sourceUpdater:(id)arg3 updateType:(long long)arg4 ;
-(id)init;
-(void)addListener:(id)arg1 ;
@end
