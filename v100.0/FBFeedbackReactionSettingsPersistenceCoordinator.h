/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CDExperimentalDiskCache;
@interface FBFeedbackReactionSettingsPersistenceCoordinator : NSObject {

	id<CDExperimentalDiskCache> _store;

}
-(void)fetchReactionsForDefaultViewerFBID:(id)arg1 callbackQueue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)storeReactions:(id)arg1 defaultViewerFBID:(id)arg2 ;
-(id)initWithStore:(id)arg1 ;
@end
