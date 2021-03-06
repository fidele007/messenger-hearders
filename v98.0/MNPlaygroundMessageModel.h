/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MNPlaygroundMessageModel : NSObject {

	BOOL _isFromMe;
	BOOL _shouldDisplayProfileImage;
	NSString* _messageId;
	NSString* _senderInitial;
	NSString* _messageBody;
	NSString* _receiptText;

}

@property (nonatomic,copy) NSString * messageId;                          //@synthesize messageId=_messageId - In the implementation block
@property (nonatomic,copy) NSString * senderInitial;                      //@synthesize senderInitial=_senderInitial - In the implementation block
@property (nonatomic,copy) NSString * messageBody;                        //@synthesize messageBody=_messageBody - In the implementation block
@property (nonatomic,copy) NSString * receiptText;                        //@synthesize receiptText=_receiptText - In the implementation block
@property (assign,nonatomic) BOOL isFromMe;                               //@synthesize isFromMe=_isFromMe - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayProfileImage;              //@synthesize shouldDisplayProfileImage=_shouldDisplayProfileImage - In the implementation block
-(void)setIsFromMe:(BOOL)arg1 ;
-(NSString *)senderInitial;
-(BOOL)shouldDisplayProfileImage;
-(void)setShouldDisplayProfileImage:(BOOL)arg1 ;
-(NSString *)receiptText;
-(void)setReceiptText:(NSString *)arg1 ;
-(void)setSenderInitial:(NSString *)arg1 ;
-(id)description;
-(NSString *)messageBody;
-(void)setMessageBody:(NSString *)arg1 ;
-(BOOL)isFromMe;
-(NSString *)messageId;
-(void)setMessageId:(NSString *)arg1 ;
@end

