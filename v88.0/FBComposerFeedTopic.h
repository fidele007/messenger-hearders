/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBComposerFeedTopic : FBValueObject <NSCopying> {

	NSString* _title;
	NSString* _topicID;
	NSString* _iconURI;
	double _confidence;
	NSString* _context;
	unsigned long long _type;

}

@property (nonatomic,copy,readonly) NSString * title;                //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * topicID;              //@synthesize topicID=_topicID - In the implementation block
@property (nonatomic,copy,readonly) NSString * iconURI;              //@synthesize iconURI=_iconURI - In the implementation block
@property (nonatomic,readonly) double confidence;                    //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,copy,readonly) NSString * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
-(id)initWithTitle:(id)arg1 topicID:(id)arg2 iconURI:(id)arg3 confidence:(double)arg4 context:(id)arg5 type:(unsigned long long)arg6 ;
-(NSString *)topicID;
-(NSString *)iconURI;
-(unsigned long long)type;
-(NSString *)title;
-(NSString *)context;
-(double)confidence;
@end

