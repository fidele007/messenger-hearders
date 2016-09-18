/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class FBWebrtcSdp, NSString, FBWebrtcVideoRequestPayload;

@interface FBWebrtcOfferPayload : NSObject <TBase, NSCoding> {

	FBWebrtcSdp* __sdp;
	int __uploadLogLevel;
	BOOL __iceRestartSupported;
	BOOL __handlesCollision;
	NSString* __offeredFbExperiments;
	BOOL __isDogfoodCall;
	FBWebrtcVideoRequestPayload* __videoRequestPayload;
	BOOL __isInstantVideo;
	BOOL __sdp_isset;
	BOOL __uploadLogLevel_isset;
	BOOL __iceRestartSupported_isset;
	BOOL __handlesCollision_isset;
	BOOL __offeredFbExperiments_isset;
	BOOL __isDogfoodCall_isset;
	BOOL __videoRequestPayload_isset;
	BOOL __isInstantVideo_isset;

}

@property (setter=setSdp:,getter=sdp,nonatomic,retain) FBWebrtcSdp * sdp; 
@property (assign,setter=setUploadLogLevel:,getter=uploadLogLevel,nonatomic) int uploadLogLevel; 
@property (assign,setter=setIceRestartSupported:,getter=iceRestartSupported,nonatomic) BOOL iceRestartSupported; 
@property (assign,setter=setHandlesCollision:,getter=handlesCollision,nonatomic) BOOL handlesCollision; 
@property (setter=setOfferedFbExperiments:,getter=offeredFbExperiments,nonatomic,retain) NSString * offeredFbExperiments; 
@property (assign,setter=setIsDogfoodCall:,getter=isDogfoodCall,nonatomic) BOOL isDogfoodCall; 
@property (setter=setVideoRequestPayload:,getter=videoRequestPayload,nonatomic,retain) FBWebrtcVideoRequestPayload * videoRequestPayload; 
@property (assign,setter=setIsInstantVideo:,getter=isInstantVideo,nonatomic) BOOL isInstantVideo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(void)setUploadLogLevel:(int)arg1 ;
-(void)setIceRestartSupported:(BOOL)arg1 ;
-(void)setHandlesCollision:(BOOL)arg1 ;
-(void)setOfferedFbExperiments:(NSString *)arg1 ;
-(void)setIsDogfoodCall:(BOOL)arg1 ;
-(void)setVideoRequestPayload:(FBWebrtcVideoRequestPayload *)arg1 ;
-(void)setIsInstantVideo:(BOOL)arg1 ;
-(id)initWithSdp:(id)arg1 uploadLogLevel:(int)arg2 iceRestartSupported:(BOOL)arg3 handlesCollision:(BOOL)arg4 offeredFbExperiments:(id)arg5 isDogfoodCall:(BOOL)arg6 videoRequestPayload:(id)arg7 isInstantVideo:(BOOL)arg8 ;
-(BOOL)sdpIsSet;
-(void)unsetSdp;
-(int)uploadLogLevel;
-(BOOL)uploadLogLevelIsSet;
-(void)unsetUploadLogLevel;
-(BOOL)iceRestartSupported;
-(BOOL)iceRestartSupportedIsSet;
-(void)unsetIceRestartSupported;
-(BOOL)handlesCollision;
-(BOOL)handlesCollisionIsSet;
-(void)unsetHandlesCollision;
-(NSString *)offeredFbExperiments;
-(BOOL)offeredFbExperimentsIsSet;
-(void)unsetOfferedFbExperiments;
-(BOOL)isDogfoodCall;
-(BOOL)isDogfoodCallIsSet;
-(void)unsetIsDogfoodCall;
-(FBWebrtcVideoRequestPayload *)videoRequestPayload;
-(BOOL)videoRequestPayloadIsSet;
-(void)unsetVideoRequestPayload;
-(BOOL)isInstantVideo;
-(BOOL)isInstantVideoIsSet;
-(void)unsetIsInstantVideo;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)validate;
-(FBWebrtcSdp *)sdp;
-(void)setSdp:(FBWebrtcSdp *)arg1 ;
-(void)write:(id)arg1 ;
@end

