/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:03 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, NSArray;

@interface FBAttachmentGreetingCardData : FBGraphQLInput {

	NSString* _templateId;
	NSString* _theme;
	NSArray* _slides;

}

@property (nonatomic,copy) NSString * templateId;              //@synthesize templateId=_templateId - In the implementation block
@property (nonatomic,copy) NSString * theme;                   //@synthesize theme=_theme - In the implementation block
@property (nonatomic,copy) NSArray * slides;                   //@synthesize slides=_slides - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)templateId;
-(void)setTemplateId:(NSString *)arg1 ;
-(void)setSlides:(NSArray *)arg1 ;
-(NSArray *)slides;
-(NSString *)theme;
-(void)setTheme:(NSString *)arg1 ;
@end

