/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:56 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
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
-(id)initWithEventId:(id)arg1 recipientFbids:(id)arg2 groupThreadFbid:(id)arg3 canonicalFbid:(id)arg4 isReply:(BOOL)arg5 ;
-(id)initWithEvent:(id)arg1 recipientFbids:(id)arg2 ;
-(id)initWithEvent:(id)arg1 groupThreadFbid:(id)arg2 ;
-(id)initWithEvent:(id)arg1 canonicalFbid:(id)arg2 ;
-(NSString *)canonicalFbid;
-(NSArray *)recipientFbids;
-(NSString *)groupThreadFbid;
-(id)url;
-(id)initWithURL:(id)arg1 ;
-(BOOL)isReply;
-(NSString *)eventId;
@end

