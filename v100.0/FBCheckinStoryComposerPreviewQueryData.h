/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
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

