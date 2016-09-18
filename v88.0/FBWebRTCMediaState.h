/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:56 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBWebRTCMediaState : FBValueObject <NSCopying> {

	BOOL _isVideoOn;
	BOOL _isAudioOn;
	BOOL _isSpeakerOn;

}

@property (nonatomic,readonly) BOOL isVideoOn;                //@synthesize isVideoOn=_isVideoOn - In the implementation block
@property (nonatomic,readonly) BOOL isAudioOn;                //@synthesize isAudioOn=_isAudioOn - In the implementation block
@property (nonatomic,readonly) BOOL isSpeakerOn;              //@synthesize isSpeakerOn=_isSpeakerOn - In the implementation block
-(id)initWithIsVideoOn:(BOOL)arg1 isAudioOn:(BOOL)arg2 isSpeakerOn:(BOOL)arg3 ;
-(BOOL)isVideoOn;
-(BOOL)isSpeakerOn;
-(BOOL)isAudioOn;
-(id)withAudioOn:(BOOL)arg1 ;
-(id)withVideoOn:(BOOL)arg1 ;
-(id)withSpeakerOn:(BOOL)arg1 ;
@end
