/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:03 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSURL;

@interface FBMagicStoryCollectionAssetInfo : FBValueObject <NSCopying, NSCoding> {

	BOOL _isVideo;
	NSURL* _assetURL;
	unsigned long long _indexHint;

}

@property (nonatomic,copy,readonly) NSURL * assetURL;                     //@synthesize assetURL=_assetURL - In the implementation block
@property (nonatomic,readonly) unsigned long long indexHint;              //@synthesize indexHint=_indexHint - In the implementation block
@property (nonatomic,readonly) BOOL isVideo;                              //@synthesize isVideo=_isVideo - In the implementation block
-(unsigned long long)indexHint;
-(id)initWithAssetURL:(id)arg1 indexHint:(unsigned long long)arg2 isVideo:(BOOL)arg3 ;
-(BOOL)isVideo;
-(NSURL *)assetURL;
@end
