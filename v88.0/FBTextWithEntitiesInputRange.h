/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:04 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSNumber, FBTextWithEntitiesInputEntity;

@interface FBTextWithEntitiesInputRange : FBGraphQLInput {

	NSNumber* _offset;
	NSNumber* _length;
	FBTextWithEntitiesInputEntity* _entity;

}

@property (nonatomic,copy) NSNumber * offset;                                   //@synthesize offset=_offset - In the implementation block
@property (nonatomic,copy) NSNumber * length;                                   //@synthesize length=_length - In the implementation block
@property (nonatomic,copy) FBTextWithEntitiesInputEntity * entity;              //@synthesize entity=_entity - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSNumber *)length;
-(void)setOffset:(NSNumber *)arg1 ;
-(NSNumber *)offset;
-(void)setLength:(NSNumber *)arg1 ;
-(void)setEntity:(FBTextWithEntitiesInputEntity *)arg1 ;
-(FBTextWithEntitiesInputEntity *)entity;
@end
