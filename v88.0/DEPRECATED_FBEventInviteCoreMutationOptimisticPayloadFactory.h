/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:59 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBEventInviteMutationOptimisticPayloadFactoryProtocol.h>

@class FBMemEvent, NSString;

@interface DEPRECATED_FBEventInviteCoreMutationOptimisticPayloadFactory : NSObject <FBEventInviteMutationOptimisticPayloadFactoryProtocol> {

	FBMemEvent* _event;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)optimisticPayload:(id)arg1 ;
-(id)rollbackOptimisticPayload:(id)arg1 ;
-(void)_updateOptimisticInviteeEventCounts:(id)arg1 forInviteeIds:(id)arg2 ;
-(long long)_oldEventCountForInvitee:(id)arg1 ;
-(id)_personWithGraphQLID:(id)arg1 eventCount:(long long)arg2 ;
-(id)initWithEvent:(id)arg1 ;
@end

