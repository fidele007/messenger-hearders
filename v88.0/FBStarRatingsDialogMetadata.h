/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:57 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBStarRatingsDialogMetadataConfig;

@interface FBStarRatingsDialogMetadata : NSObject <NSCoding, NSCopying> {

	NSString* _experimentName;
	FBStarRatingsDialogMetadataConfig* _appStoreDialogMetadataConfig;

}

@property (nonatomic,copy) NSString * experimentName;                                                       //@synthesize experimentName=_experimentName - In the implementation block
@property (nonatomic,retain) FBStarRatingsDialogMetadataConfig * appStoreDialogMetadataConfig;              //@synthesize appStoreDialogMetadataConfig=_appStoreDialogMetadataConfig - In the implementation block
-(NSString *)experimentName;
-(id)initWithExperimentName:(id)arg1 appStoreDialogMetadataConfig:(id)arg2 ;
-(id)initWithoutMetadata;
-(void)setExperimentName:(NSString *)arg1 ;
-(void)setAppStoreDialogMetadataConfig:(FBStarRatingsDialogMetadataConfig *)arg1 ;
-(FBStarRatingsDialogMetadataConfig *)appStoreDialogMetadataConfig;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

