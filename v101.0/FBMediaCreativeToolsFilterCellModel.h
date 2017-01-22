/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMediaCreativeToolsEffectCellModel.h>

@protocol FBMediaCreativeToolFilter;
@class FBVideoProcessor;

@interface FBMediaCreativeToolsFilterCellModel : FBMediaCreativeToolsEffectCellModel {

	id<FBMediaCreativeToolFilter> _filter;
	FBVideoProcessor* _videoProcessor;

}

@property (nonatomic,readonly) id<FBMediaCreativeToolFilter> filter;              //@synthesize filter=_filter - In the implementation block
@property (nonatomic,readonly) FBVideoProcessor * videoProcessor;                 //@synthesize videoProcessor=_videoProcessor - In the implementation block
-(id)initWithFilter:(id)arg1 videoProcessor:(id)arg2 ;
-(FBVideoProcessor *)videoProcessor;
-(id<FBMediaCreativeToolFilter>)filter;
@end
