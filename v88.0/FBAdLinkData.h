/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:03 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSArray, NSString, FBAdCallToAction;

@interface FBAdLinkData : FBGraphQLInput {

	NSArray* _fieldsRetainedFromRawSpec;
	NSString* _message;
	NSString* _imageHash;
	NSString* _picture;
	NSString* _link;
	NSString* _name;
	NSString* _eventId;
	NSString* _descriptionText;
	FBAdCallToAction* _callToAction;
	NSArray* _childAttachments;

}

@property (nonatomic,copy) NSArray * fieldsRetainedFromRawSpec;              //@synthesize fieldsRetainedFromRawSpec=_fieldsRetainedFromRawSpec - In the implementation block
@property (nonatomic,copy) NSString * message;                               //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSString * imageHash;                             //@synthesize imageHash=_imageHash - In the implementation block
@property (nonatomic,copy) NSString * picture;                               //@synthesize picture=_picture - In the implementation block
@property (nonatomic,copy) NSString * link;                                  //@synthesize link=_link - In the implementation block
@property (nonatomic,copy) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * eventId;                               //@synthesize eventId=_eventId - In the implementation block
@property (nonatomic,copy) NSString * descriptionText;                       //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,copy) FBAdCallToAction * callToAction;                  //@synthesize callToAction=_callToAction - In the implementation block
@property (nonatomic,copy) NSArray * childAttachments;                       //@synthesize childAttachments=_childAttachments - In the implementation block
-(FBAdCallToAction *)callToAction;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(void)setImageHash:(NSString *)arg1 ;
-(NSArray *)fieldsRetainedFromRawSpec;
-(void)setFieldsRetainedFromRawSpec:(NSArray *)arg1 ;
-(NSArray *)childAttachments;
-(void)setChildAttachments:(NSArray *)arg1 ;
-(void)setCallToAction:(FBAdCallToAction *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)link;
-(void)setLink:(NSString *)arg1 ;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(NSString *)eventId;
-(void)setEventId:(NSString *)arg1 ;
-(NSString *)picture;
-(void)setPicture:(NSString *)arg1 ;
-(NSString *)imageHash;
@end

