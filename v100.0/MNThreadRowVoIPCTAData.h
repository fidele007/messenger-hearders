/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBMGroupThreadProperties;

@interface MNThreadRowVoIPCTAData : NSObject <NSCopying> {

	unsigned long long _subtype;
	NSString* _peerCall_otherUserID;
	NSString* _peerCall_peerCallTrigger;
	NSString* _peerCall_peerVideoTrigger;
	FBMGroupThreadProperties* _groupJoin_groupThreadProperties;
	NSString* _groupJoin_serverInfoData;
	NSString* _groupJoin_groupCallTrigger;
	NSString* _groupJoin_groupVideoTrigger;
	BOOL _groupJoin_isVideo;

}
+(id)groupJoinWithGroupThreadProperties:(id)arg1 serverInfoData:(id)arg2 groupCallTrigger:(id)arg3 groupVideoTrigger:(id)arg4 isVideo:(BOOL)arg5 ;
+(id)peerCallWithOtherUserID:(id)arg1 peerCallTrigger:(id)arg2 peerVideoTrigger:(id)arg3 ;
-(void)matchPeerCall:(/*^block*/id)arg1 groupJoin:(/*^block*/id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
