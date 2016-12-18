/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, FBAttachmentProductItemPriceData, FBTextWithEntitiesInput;

@interface FBAttachmentProductItemData : FBGraphQLInput {

	NSString* _title;
	FBAttachmentProductItemPriceData* _itemPrice;
	FBTextWithEntitiesInput* _descriptionText;
	FBTextWithEntitiesInput* _pickupNote;
	NSString* _locationPageId;
	NSString* _multipleItemType;
	NSString* _categoryId;

}

@property (nonatomic,copy) NSString * title;                                          //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) FBAttachmentProductItemPriceData * itemPrice;              //@synthesize itemPrice=_itemPrice - In the implementation block
@property (nonatomic,copy) FBTextWithEntitiesInput * descriptionText;                 //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,copy) FBTextWithEntitiesInput * pickupNote;                      //@synthesize pickupNote=_pickupNote - In the implementation block
@property (nonatomic,copy) NSString * locationPageId;                                 //@synthesize locationPageId=_locationPageId - In the implementation block
@property (nonatomic,copy) NSString * multipleItemType;                               //@synthesize multipleItemType=_multipleItemType - In the implementation block
@property (nonatomic,copy) NSString * categoryId;                                     //@synthesize categoryId=_categoryId - In the implementation block
-(FBAttachmentProductItemPriceData *)itemPrice;
-(void)setItemPrice:(FBAttachmentProductItemPriceData *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(void)setPickupNote:(FBTextWithEntitiesInput *)arg1 ;
-(NSString *)locationPageId;
-(void)setLocationPageId:(NSString *)arg1 ;
-(NSString *)multipleItemType;
-(void)setMultipleItemType:(NSString *)arg1 ;
-(NSString *)categoryId;
-(void)setCategoryId:(NSString *)arg1 ;
-(FBTextWithEntitiesInput *)pickupNote;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(FBTextWithEntitiesInput *)descriptionText;
-(void)setDescriptionText:(FBTextWithEntitiesInput *)arg1 ;
@end

