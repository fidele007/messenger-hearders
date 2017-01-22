/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPageLikeCoreMutationOptimisticPayloadFactoryProtocol.h>

@class FBMemPage, NSString;

@interface DEPRECATED_FBPageLikeCoreMutationOptimisticPayloadFactory : NSObject <FBPageLikeCoreMutationOptimisticPayloadFactoryProtocol> {

	FBMemPage* _page;
	BOOL _optimisticallySetSubscribeStatus;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)optimisticPayload:(id)arg1 ;
-(id)rollbackOptimisticPayload:(id)arg1 ;
-(id)buildPageFromInput:(id)arg1 withDoesLikePage:(id)arg2 likerCount:(id)arg3 subscribeStatus:(id)arg4 secondarySubscribeStatus:(id)arg5 ;
-(id)initWithPage:(id)arg1 optimisticallySetSubscribeStatus:(BOOL)arg2 ;
@end
