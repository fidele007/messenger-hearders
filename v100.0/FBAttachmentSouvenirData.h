/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, NSArray;

@interface FBAttachmentSouvenirData : FBGraphQLInput {

	NSString* _coverPhoto;
	NSString* _formattingString;
	NSArray* _media;

}

@property (nonatomic,copy) NSString * coverPhoto;                    //@synthesize coverPhoto=_coverPhoto - In the implementation block
@property (nonatomic,copy) NSString * formattingString;              //@synthesize formattingString=_formattingString - In the implementation block
@property (nonatomic,copy) NSArray * media;                          //@synthesize media=_media - In the implementation block
-(NSString *)coverPhoto;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(void)setFormattingString:(NSString *)arg1 ;
-(void)setCoverPhoto:(NSString *)arg1 ;
-(NSString *)formattingString;
-(NSArray *)media;
-(void)setMedia:(NSArray *)arg1 ;
@end

