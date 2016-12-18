/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, PHImageRequestOptions, NSURL;

@interface ASPhotosFrameworkImageRequest : NSObject <NSCopying> {

	NSString* _assetIdentifier;
	long long _contentMode;
	PHImageRequestOptions* _options;
	CGSize _targetSize;

}

@property (nonatomic,readonly) NSString * assetIdentifier;                 //@synthesize assetIdentifier=_assetIdentifier - In the implementation block
@property (assign,nonatomic) CGSize targetSize;                            //@synthesize targetSize=_targetSize - In the implementation block
@property (assign,nonatomic) long long contentMode;                        //@synthesize contentMode=_contentMode - In the implementation block
@property (nonatomic,retain) PHImageRequestOptions * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) NSURL * url; 
+(id)requestWithURL:(id)arg1 ;
-(NSString *)assetIdentifier;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)setContentMode:(long long)arg1 ;
-(NSURL *)url;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)contentMode;
-(CGSize)targetSize;
-(void)setTargetSize:(CGSize)arg1 ;
-(void)setOptions:(PHImageRequestOptions *)arg1 ;
-(PHImageRequestOptions *)options;
-(id)initWithAssetIdentifier:(id)arg1 ;
@end
