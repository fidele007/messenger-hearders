/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:26 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBMagicStoryCollectionAssetCounts : FBValueObject <NSCopying> {

	unsigned long long _tileCount;
	unsigned long long _totalAssetsCount;
	unsigned long long _photosCount;
	unsigned long long _videosCount;

}

@property (nonatomic,readonly) unsigned long long tileCount;                     //@synthesize tileCount=_tileCount - In the implementation block
@property (nonatomic,readonly) unsigned long long totalAssetsCount;              //@synthesize totalAssetsCount=_totalAssetsCount - In the implementation block
@property (nonatomic,readonly) unsigned long long photosCount;                   //@synthesize photosCount=_photosCount - In the implementation block
@property (nonatomic,readonly) unsigned long long videosCount;                   //@synthesize videosCount=_videosCount - In the implementation block
-(unsigned long long)totalAssetsCount;
-(id)initWithTileCount:(unsigned long long)arg1 totalAssetsCount:(unsigned long long)arg2 photosCount:(unsigned long long)arg3 videosCount:(unsigned long long)arg4 ;
-(unsigned long long)photosCount;
-(unsigned long long)videosCount;
-(unsigned long long)tileCount;
@end
