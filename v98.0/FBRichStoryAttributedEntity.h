/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:07 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBRichStoryEntity;
#import <Messenger/Messenger-Structs.h>
@interface FBRichStoryAttributedEntity : NSObject {

	id<FBRichStoryEntity> _entity;
	long long _type;
	NSRange _range;

}

@property (nonatomic,retain) id<FBRichStoryEntity> entity;              //@synthesize entity=_entity - In the implementation block
@property (assign,nonatomic) NSRange range;                             //@synthesize range=_range - In the implementation block
@property (assign,nonatomic) long long type;                            //@synthesize type=_type - In the implementation block
+(id)attributedEntityWithEntity:(id)arg1 range:(NSRange)arg2 type:(long long)arg3 ;
-(id)initWithEntity:(id)arg1 range:(NSRange)arg2 type:(long long)arg3 ;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(NSRange)range;
-(void)setRange:(NSRange)arg1 ;
-(void)setEntity:(id<FBRichStoryEntity>)arg1 ;
-(id<FBRichStoryEntity>)entity;
@end

