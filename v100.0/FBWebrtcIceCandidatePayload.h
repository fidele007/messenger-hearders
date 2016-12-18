/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class FBWebrtcIceCandidateSdp, NSString;

@interface FBWebrtcIceCandidatePayload : NSObject <TBase, NSCoding> {

	FBWebrtcIceCandidateSdp* __sdp;
	int __sdpMediaLineIndex;
	NSString* __sdpMediaId;
	BOOL __sdp_isset;
	BOOL __sdpMediaLineIndex_isset;
	BOOL __sdpMediaId_isset;

}

@property (setter=setSdp:,getter=sdp,nonatomic,retain) FBWebrtcIceCandidateSdp * sdp; 
@property (assign,setter=setSdpMediaLineIndex:,getter=sdpMediaLineIndex,nonatomic) int sdpMediaLineIndex; 
@property (setter=setSdpMediaId:,getter=sdpMediaId,nonatomic,retain) NSString * sdpMediaId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(BOOL)sdpIsSet;
-(void)unsetSdp;
-(void)setSdpMediaLineIndex:(int)arg1 ;
-(void)setSdpMediaId:(NSString *)arg1 ;
-(id)initWithSdp:(id)arg1 sdpMediaLineIndex:(int)arg2 sdpMediaId:(id)arg3 ;
-(int)sdpMediaLineIndex;
-(BOOL)sdpMediaLineIndexIsSet;
-(void)unsetSdpMediaLineIndex;
-(NSString *)sdpMediaId;
-(BOOL)sdpMediaIdIsSet;
-(void)unsetSdpMediaId;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)validate;
-(FBWebrtcIceCandidateSdp *)sdp;
-(void)setSdp:(FBWebrtcIceCandidateSdp *)arg1 ;
-(void)write:(id)arg1 ;
@end

