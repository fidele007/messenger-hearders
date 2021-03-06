/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:39 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL, NSDictionary;

@interface FBMediaCreativeToolMask : FBValueObject <NSCopying> {

	BOOL _isNew;
	BOOL _isMonetizable;
	BOOL _isReaction;
	NSString* _identifier;
	NSString* _name;
	NSString* _localizedInstructions;
	NSURL* _thumbnailUrl;
	NSString* _effectAssetIdentifier;
	NSString* _faceRecognitionAlignModelAssetIdentifier;
	NSString* _faceRecognitionDetectionModelAssetIdentifier;
	NSString* _faceRecognitionPDMMultiResAssetIdentifier;
	NSDictionary* _resourceDependencies;

}

@property (nonatomic,copy,readonly) NSString * identifier;                                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedInstructions;                                     //@synthesize localizedInstructions=_localizedInstructions - In the implementation block
@property (nonatomic,copy,readonly) NSURL * thumbnailUrl;                                                 //@synthesize thumbnailUrl=_thumbnailUrl - In the implementation block
@property (nonatomic,readonly) BOOL isNew;                                                                //@synthesize isNew=_isNew - In the implementation block
@property (nonatomic,readonly) BOOL isMonetizable;                                                        //@synthesize isMonetizable=_isMonetizable - In the implementation block
@property (nonatomic,readonly) BOOL isReaction;                                                           //@synthesize isReaction=_isReaction - In the implementation block
@property (nonatomic,copy,readonly) NSString * effectAssetIdentifier;                                     //@synthesize effectAssetIdentifier=_effectAssetIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * faceRecognitionAlignModelAssetIdentifier;                  //@synthesize faceRecognitionAlignModelAssetIdentifier=_faceRecognitionAlignModelAssetIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * faceRecognitionDetectionModelAssetIdentifier;              //@synthesize faceRecognitionDetectionModelAssetIdentifier=_faceRecognitionDetectionModelAssetIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * faceRecognitionPDMMultiResAssetIdentifier;                 //@synthesize faceRecognitionPDMMultiResAssetIdentifier=_faceRecognitionPDMMultiResAssetIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * resourceDependencies;                                  //@synthesize resourceDependencies=_resourceDependencies - In the implementation block
-(NSDictionary *)resourceDependencies;
-(NSURL *)thumbnailUrl;
-(NSString *)localizedInstructions;
-(BOOL)isReaction;
-(NSString *)effectAssetIdentifier;
-(NSString *)faceRecognitionAlignModelAssetIdentifier;
-(NSString *)faceRecognitionDetectionModelAssetIdentifier;
-(NSString *)faceRecognitionPDMMultiResAssetIdentifier;
-(BOOL)isMonetizable;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 localizedInstructions:(id)arg3 thumbnailUrl:(id)arg4 isNew:(BOOL)arg5 isMonetizable:(BOOL)arg6 isReaction:(BOOL)arg7 effectAssetIdentifier:(id)arg8 faceRecognitionAlignModelAssetIdentifier:(id)arg9 faceRecognitionDetectionModelAssetIdentifier:(id)arg10 faceRecognitionPDMMultiResAssetIdentifier:(id)arg11 resourceDependencies:(id)arg12 ;
-(NSString *)name;
-(NSString *)identifier;
-(BOOL)isNew;
@end

