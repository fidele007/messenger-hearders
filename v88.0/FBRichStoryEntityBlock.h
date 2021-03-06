/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:58 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBRichStoryBlock.h>

@protocol FBRichStoryEntity;
@interface FBRichStoryEntityBlock : FBRichStoryBlock {

	id<FBRichStoryEntity> _entity;

}

@property (nonatomic,retain) id<FBRichStoryEntity> entity;              //@synthesize entity=_entity - In the implementation block
-(id)mediaID;
-(id)initWithEntity:(id)arg1 blockID:(id)arg2 annotations:(id)arg3 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setEntity:(id<FBRichStoryEntity>)arg1 ;
-(id<FBRichStoryEntity>)entity;
@end

