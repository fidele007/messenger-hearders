/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface FBEventShareInfo : NSObject {

	BOOL _isReply;
	NSString* _eventId;
	NSString* _groupThreadFbid;
	NSString* _canonicalFbid;
	NSArray* _recipientFbids;

}

@property (nonatomic,copy,readonly) NSString * eventId;                      //@synthesize eventId=_eventId - In the implementation block
@property (nonatomic,copy,readonly) NSString * groupThreadFbid;              //@synthesize groupThreadFbid=_groupThreadFbid - In the implementation block
@property (nonatomic,copy,readonly) NSString * canonicalFbid;                //@synthesize canonicalFbid=_canonicalFbid - In the implementation block
@property (nonatomic,copy,readonly) NSArray * recipientFbids;                //@synthesize recipientFbids=_recipientFbids - In the implementation block
@property (nonatomic,readonly) BOOL isReply;                                 //@synthesize isReply=_isReply - In the implementation block
-(NSString *)groupThreadFbid;
-(id)initWithEventId:(id)arg1 recipientFbids:(id)arg2 groupThreadFbid:(id)arg3 canonicalFbid:(id)arg4 isReply:(BOOL)arg5 ;
-(id)initWithEvent:(id)arg1 recipientFbids:(id)arg2 ;
-(id)initWithEvent:(id)arg1 groupThreadFbid:(id)arg2 ;
-(id)initWithEvent:(id)arg1 canonicalFbid:(id)arg2 ;
-(NSString *)canonicalFbid;
-(NSArray *)recipientFbids;
-(id)url;
-(id)initWithURL:(id)arg1 ;
-(NSString *)eventId;
-(BOOL)isReply;
@end

