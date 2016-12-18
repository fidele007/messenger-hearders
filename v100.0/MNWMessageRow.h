/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class FBMMessageKey, NSString, FBStringWithRedactedDescription, MNWMessageAttachment;

@interface MNWMessageRow : FBValueObject <NSCopying, NSCoding> {

	FBMMessageKey* _messageKey;
	NSString* _senderId;
	FBStringWithRedactedDescription* _messageBody;
	MNWMessageAttachment* _attachment;
	long long _sendState;
	unsigned long long _timestamp;
	long long _type;
	long long _messageSource;

}

@property (nonatomic,copy,readonly) FBMMessageKey * messageKey;                                 //@synthesize messageKey=_messageKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * senderId;                                        //@synthesize senderId=_senderId - In the implementation block
@property (nonatomic,copy,readonly) FBStringWithRedactedDescription * messageBody;              //@synthesize messageBody=_messageBody - In the implementation block
@property (nonatomic,copy,readonly) MNWMessageAttachment * attachment;                          //@synthesize attachment=_attachment - In the implementation block
@property (nonatomic,readonly) long long sendState;                                             //@synthesize sendState=_sendState - In the implementation block
@property (nonatomic,readonly) unsigned long long timestamp;                                    //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) long long type;                                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long messageSource;                                         //@synthesize messageSource=_messageSource - In the implementation block
-(NSString *)senderId;
-(FBMMessageKey *)messageKey;
-(id)initWithMessageKey:(id)arg1 senderId:(id)arg2 messageBody:(id)arg3 attachment:(id)arg4 sendState:(long long)arg5 timestamp:(unsigned long long)arg6 type:(long long)arg7 messageSource:(long long)arg8 ;
-(long long)sendState;
-(long long)messageSource;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)timestamp;
-(long long)type;
-(MNWMessageAttachment *)attachment;
-(FBStringWithRedactedDescription *)messageBody;
@end

