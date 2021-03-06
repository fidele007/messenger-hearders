/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:02 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, FBMSecureThreadKey, MNSecurePreparedMessageContent;

@interface MNSecureOutgoingMessage : FBValueObject <NSCopying, NSCoding> {

	NSString* _messageId;
	FBMSecureThreadKey* _secureThreadKey;
	MNSecurePreparedMessageContent* _content;
	double _messageLifeTime;

}

@property (nonatomic,copy,readonly) NSString * messageId;                                  //@synthesize messageId=_messageId - In the implementation block
@property (nonatomic,copy,readonly) FBMSecureThreadKey * secureThreadKey;                  //@synthesize secureThreadKey=_secureThreadKey - In the implementation block
@property (nonatomic,copy,readonly) MNSecurePreparedMessageContent * content;              //@synthesize content=_content - In the implementation block
@property (nonatomic,readonly) double messageLifeTime;                                     //@synthesize messageLifeTime=_messageLifeTime - In the implementation block
-(double)messageLifeTime;
-(id)initWithMessageId:(id)arg1 secureThreadKey:(id)arg2 content:(id)arg3 messageLifeTime:(double)arg4 ;
-(FBMSecureThreadKey *)secureThreadKey;
-(MNSecurePreparedMessageContent *)content;
-(NSString *)messageId;
@end

