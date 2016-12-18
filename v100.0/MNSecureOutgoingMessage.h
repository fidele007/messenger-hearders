/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBMSecureThreadKey, MNSecurePreparedMessageContent;

@interface MNSecureOutgoingMessage : FBValueObject <NSCoding, NSCopying> {

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
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(MNSecurePreparedMessageContent *)content;
-(NSString *)messageId;
@end

