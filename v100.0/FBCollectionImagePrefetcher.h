/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBCollectionImagePrefetcherDelegate;
@class FBImagePrefetchController, FBNumericalScenePathContext, NSString, NSMutableSet;

@interface FBCollectionImagePrefetcher : NSObject {

	id<FBCollectionImagePrefetcherDelegate> _delegate;
	FBImagePrefetchController* _prefetchController;
	FBNumericalScenePathContext* _scenePathContext;
	BOOL _prefetchOnCellular;
	unsigned long long _prefetchCount;
	NSString* _analyticsModule;
	NSMutableSet* _specifierMap;

}

@property (nonatomic,readonly) unsigned long long prefetchCount;              //@synthesize prefetchCount=_prefetchCount - In the implementation block
@property (nonatomic,copy,readonly) NSString * analyticsModule;               //@synthesize analyticsModule=_analyticsModule - In the implementation block
@property (nonatomic,copy,readonly) NSMutableSet * specifierMap;              //@synthesize specifierMap=_specifierMap - In the implementation block
-(NSString *)analyticsModule;
-(void)prefetchForIndex:(unsigned long long)arg1 prefetchCount:(long long)arg2 ;
-(id)_imageSpecifierForCollectionSpecfier:(id)arg1 andIndex:(unsigned long long)arg2 ;
-(id)initWithDelegate:(id)arg1 prefetchCount:(unsigned long long)arg2 imagePrefetchController:(id)arg3 scenePathContext:(id)arg4 analyticsModule:(id)arg5 prefetchOnCellular:(BOOL)arg6 ;
-(void)prefetchForIndex:(unsigned long long)arg1 ;
-(NSMutableSet *)specifierMap;
-(unsigned long long)prefetchCount;
@end

