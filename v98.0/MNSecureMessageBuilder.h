/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:06 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, FBMSecureThreadKey, MNSecureMessageContent, MNSecureMessageReportableContent;

@interface MNSecureMessageBuilder : NSObject {

	NSString* _messageId;
	FBMSecureThreadKey* _secureThreadKey;
	NSString* _senderId;
	unsigned long long _timestamp;
	long long _messageLifetime;
	MNSecureMessageContent* _content;
	MNSecureMessageReportableContent* _reportableContent;

}
+(id)secureMessageFromExistingSecureMessage:(id)arg1 ;
+(id)secureMessage;
-(id)withTimestamp:(unsigned long long)arg1 ;
-(id)withSenderId:(id)arg1 ;
-(id)withReportableContent:(id)arg1 ;
-(id)withMessageId:(id)arg1 ;
-(id)withSecureThreadKey:(id)arg1 ;
-(id)withMessageLifetime:(long long)arg1 ;
-(id)withContent:(id)arg1 ;
-(id)build;
@end

