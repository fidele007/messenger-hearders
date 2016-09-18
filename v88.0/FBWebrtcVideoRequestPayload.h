/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBWebrtcVideoRequestPayload : NSObject <TBase, NSCoding> {

	BOOL __islocalVideoOn;
	BOOL __requestRemoteVideoOn;
	int __preferredWidth;
	int __preferredHeight;
	int __preferredFramerate;
	long long __ackMessageId;
	BOOL __islocalVideoOn_isset;
	BOOL __requestRemoteVideoOn_isset;
	BOOL __preferredWidth_isset;
	BOOL __preferredHeight_isset;
	BOOL __preferredFramerate_isset;
	BOOL __ackMessageId_isset;

}

@property (assign,setter=setIslocalVideoOn:,getter=islocalVideoOn,nonatomic) BOOL islocalVideoOn; 
@property (assign,setter=setRequestRemoteVideoOn:,getter=requestRemoteVideoOn,nonatomic) BOOL requestRemoteVideoOn; 
@property (assign,setter=setPreferredWidth:,getter=preferredWidth,nonatomic) int preferredWidth; 
@property (assign,setter=setPreferredHeight:,getter=preferredHeight,nonatomic) int preferredHeight; 
@property (assign,setter=setPreferredFramerate:,getter=preferredFramerate,nonatomic) int preferredFramerate; 
@property (assign,setter=setAckMessageId:,getter=ackMessageId,nonatomic) long long ackMessageId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(void)setIslocalVideoOn:(BOOL)arg1 ;
-(void)setRequestRemoteVideoOn:(BOOL)arg1 ;
-(void)setPreferredFramerate:(int)arg1 ;
-(void)setAckMessageId:(long long)arg1 ;
-(id)initWithIslocalVideoOn:(BOOL)arg1 requestRemoteVideoOn:(BOOL)arg2 preferredWidth:(int)arg3 preferredHeight:(int)arg4 preferredFramerate:(int)arg5 ackMessageId:(long long)arg6 ;
-(BOOL)islocalVideoOn;
-(BOOL)islocalVideoOnIsSet;
-(void)unsetIslocalVideoOn;
-(BOOL)requestRemoteVideoOn;
-(BOOL)requestRemoteVideoOnIsSet;
-(void)unsetRequestRemoteVideoOn;
-(BOOL)preferredWidthIsSet;
-(void)unsetPreferredWidth;
-(BOOL)preferredHeightIsSet;
-(void)unsetPreferredHeight;
-(int)preferredFramerate;
-(BOOL)preferredFramerateIsSet;
-(void)unsetPreferredFramerate;
-(long long)ackMessageId;
-(BOOL)ackMessageIdIsSet;
-(void)unsetAckMessageId;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)setPreferredHeight:(int)arg1 ;
-(int)preferredHeight;
-(void)validate;
-(int)preferredWidth;
-(void)setPreferredWidth:(int)arg1 ;
-(void)write:(id)arg1 ;
@end

