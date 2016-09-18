/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface FBComposerMoviesLoggerAssetsInfo : FBValueObject <NSCopying> {

	unsigned long long _numberOfAssets;
	unsigned long long _numberOfPhotos;
	unsigned long long _numberOfVideos;
	NSArray* _orderOfAssets;

}

@property (nonatomic,readonly) unsigned long long numberOfAssets;              //@synthesize numberOfAssets=_numberOfAssets - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfPhotos;              //@synthesize numberOfPhotos=_numberOfPhotos - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfVideos;              //@synthesize numberOfVideos=_numberOfVideos - In the implementation block
@property (nonatomic,copy,readonly) NSArray * orderOfAssets;                   //@synthesize orderOfAssets=_orderOfAssets - In the implementation block
-(unsigned long long)numberOfVideos;
-(NSArray *)orderOfAssets;
-(id)initWithNumberOfAssets:(unsigned long long)arg1 numberOfPhotos:(unsigned long long)arg2 numberOfVideos:(unsigned long long)arg3 orderOfAssets:(id)arg4 ;
-(unsigned long long)numberOfAssets;
-(unsigned long long)numberOfPhotos;
@end
