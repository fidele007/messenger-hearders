/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:19 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MNThreadGenericSnippetDecider;

@interface MNThreadGenericSnippetsBatchLoader : NSObject {

	MNThreadGenericSnippetDecider* _snippetDecider;

}
-(id)initWithDecider:(id)arg1 ;
-(void)loadBatchThreadSnippetsFromThreadSummaries:(id)arg1 pendingThreads:(id)arg2 threadKeyToLatestSnippetMessageMap:(id)arg3 offlineIdToLatestPhotoMessageMap:(id)arg4 userIdToUserMap:(id)arg5 completion:(/*^block*/id)arg6 ;
@end
