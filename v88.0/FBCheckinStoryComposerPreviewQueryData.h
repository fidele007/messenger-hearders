/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:03 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, NSNumber, FBCheckinStoryComposerPreviewQueryMinutiaeArgs;

@interface FBCheckinStoryComposerPreviewQueryData : FBGraphQLInput {

	NSString* _placeId;
	NSNumber* _scale;
	FBCheckinStoryComposerPreviewQueryMinutiaeArgs* _minutiaeArgs;

}

@property (nonatomic,copy) NSString * placeId;                                                         //@synthesize placeId=_placeId - In the implementation block
@property (nonatomic,copy) NSNumber * scale;                                                           //@synthesize scale=_scale - In the implementation block
@property (nonatomic,copy) FBCheckinStoryComposerPreviewQueryMinutiaeArgs * minutiaeArgs;              //@synthesize minutiaeArgs=_minutiaeArgs - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(FBCheckinStoryComposerPreviewQueryMinutiaeArgs *)minutiaeArgs;
-(void)setMinutiaeArgs:(FBCheckinStoryComposerPreviewQueryMinutiaeArgs *)arg1 ;
-(void)setScale:(NSNumber *)arg1 ;
-(NSNumber *)scale;
-(NSString *)placeId;
-(void)setPlaceId:(NSString *)arg1 ;
@end

