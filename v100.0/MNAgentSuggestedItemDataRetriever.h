/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBGraphQLService;

@interface MNAgentSuggestedItemDataRetriever : NSObject {

	FBGraphQLService* _graphQLService;

}
-(void)_applyServiceConfiguration:(id)arg1 ;
-(id)initWithGraphQLService:(id)arg1 ;
-(void)retrieveObjectWithGraphQLId:(id)arg1 downloadedResponseBlock:(/*^block*/id)arg2 cachedResponseBlock:(/*^block*/id)arg3 failureBlock:(/*^block*/id)arg4 ;
@end

