/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBWebrtcOfferNackPayload : NSObject <TBase, NSCoding> {

	long long __nackMessageId;
	int __errorCode;
	BOOL __nackMessageId_isset;
	BOOL __errorCode_isset;

}

@property (assign,setter=setNackMessageId:,getter=nackMessageId,nonatomic) long long nackMessageId; 
@property (assign,setter=setErrorCode:,getter=errorCode,nonatomic) int errorCode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)errorCodeIsSet;
-(void)read:(id)arg1 ;
-(void)unsetErrorCode;
-(void)setNackMessageId:(long long)arg1 ;
-(id)initWithNackMessageId:(long long)arg1 errorCode:(int)arg2 ;
-(long long)nackMessageId;
-(BOOL)nackMessageIdIsSet;
-(void)unsetNackMessageId;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)validate;
-(void)setErrorCode:(int)arg1 ;
-(int)errorCode;
-(void)write:(id)arg1 ;
@end

