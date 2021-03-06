/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:12 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
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
-(void)setCategoryId:(NSString *)arg1 ;
-(void)setLocationPageId:(NSString *)arg1 ;
-(void)setPickupNote:(FBTextWithEntitiesInput *)arg1 ;
-(void)setItemPrice:(FBAttachmentProductItemPriceData *)arg1 ;
-(FBAttachmentProductItemPriceData *)itemPrice;
-(FBTextWithEntitiesInput *)pickupNote;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)locationPageId;
-(NSString *)multipleItemType;
-(void)setMultipleItemType:(NSString *)arg1 ;
-(NSString *)categoryId;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(FBTextWithEntitiesInput *)descriptionText;
-(void)setDescriptionText:(FBTextWithEntitiesInput *)arg1 ;
@end

