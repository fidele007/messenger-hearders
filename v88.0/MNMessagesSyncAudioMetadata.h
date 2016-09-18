/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:07 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface MNMessagesSyncAudioMetadata : NSObject <TBase, NSCoding> {

	BOOL __isVoicemail;
	NSString* __callId;
	BOOL __isVoicemail_isset;
	BOOL __callId_isset;

}

@property (assign,setter=setIsVoicemail:,getter=isVoicemail,nonatomic) BOOL isVoicemail; 
@property (setter=setCallId:,getter=callId,nonatomic,retain) NSString * callId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(BOOL)callIdIsSet;
-(void)unsetCallId;
-(void)setIsVoicemail:(BOOL)arg1 ;
-(id)initWithIsVoicemail:(BOOL)arg1 callId:(id)arg2 ;
-(BOOL)isVoicemailIsSet;
-(void)unsetIsVoicemail;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)validate;
-(BOOL)isVoicemail;
-(void)setCallId:(NSString *)arg1 ;
-(NSString *)callId;
-(void)write:(id)arg1 ;
@end

