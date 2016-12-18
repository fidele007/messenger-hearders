/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBWebImageDownloaderFactoryProtocol, FBWebImageLogger;
@class NSArray, FBBurstAnimationImageViewKenBurnsConfig;

@interface FBBurstAnimationImageViewSpecifier : NSObject {

	BOOL _startAnimating;
	NSArray* _imageSpecifiers;
	id<FBWebImageDownloaderFactoryProtocol> _downloaderFactory;
	id<FBWebImageLogger> _logger;
	FBBurstAnimationImageViewKenBurnsConfig* _kenBurnsConfig;

}

@property (nonatomic,copy,readonly) NSArray * imageSpecifiers;                                         //@synthesize imageSpecifiers=_imageSpecifiers - In the implementation block
@property (nonatomic,readonly) id<FBWebImageDownloaderFactoryProtocol> downloaderFactory;              //@synthesize downloaderFactory=_downloaderFactory - In the implementation block
@property (nonatomic,readonly) id<FBWebImageLogger> logger;                                            //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) BOOL startAnimating;                                                    //@synthesize startAnimating=_startAnimating - In the implementation block
@property (nonatomic,readonly) FBBurstAnimationImageViewKenBurnsConfig * kenBurnsConfig;               //@synthesize kenBurnsConfig=_kenBurnsConfig - In the implementation block
-(id<FBWebImageDownloaderFactoryProtocol>)downloaderFactory;
-(id)initWithImageSpecifiers:(id)arg1 downloaderFactory:(id)arg2 logger:(id)arg3 startAnimating:(BOOL)arg4 kenBurnsConfig:(id)arg5 ;
-(NSArray *)imageSpecifiers;
-(FBBurstAnimationImageViewKenBurnsConfig *)kenBurnsConfig;
-(BOOL)startAnimating;
-(id<FBWebImageLogger>)logger;
@end

