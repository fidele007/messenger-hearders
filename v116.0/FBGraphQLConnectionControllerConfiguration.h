/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:59 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBGraphQLConnectionControllerConfiguration : NSObject {

	NSString* _connectionDescription;
	/*^block*/id _configureServiceBlock;
	/*^block*/id _loadRequestUUIDBlock;
	/*^block*/id _pageExtractionBlock;
	/*^block*/id _addLoadedPageBlock;

}

@property (nonatomic,copy,readonly) NSString * connectionDescription;              //@synthesize connectionDescription=_connectionDescription - In the implementation block
@property (nonatomic,copy,readonly) id configureServiceBlock;                      //@synthesize configureServiceBlock=_configureServiceBlock - In the implementation block
@property (nonatomic,copy,readonly) id loadRequestUUIDBlock;                       //@synthesize loadRequestUUIDBlock=_loadRequestUUIDBlock - In the implementation block
@property (nonatomic,copy,readonly) id pageExtractionBlock;                        //@synthesize pageExtractionBlock=_pageExtractionBlock - In the implementation block
@property (nonatomic,copy,readonly) id addLoadedPageBlock;                         //@synthesize addLoadedPageBlock=_addLoadedPageBlock - In the implementation block
-(id)pageExtractionBlock;
-(id)initWithConnectionDescription:(id)arg1 configureServiceBlock:(/*^block*/id)arg2 loadRequestUUIDBlock:(/*^block*/id)arg3 pageExtractionBlock:(/*^block*/id)arg4 addLoadedPageBlock:(/*^block*/id)arg5 ;
-(NSString *)connectionDescription;
-(id)configureServiceBlock;
-(id)loadRequestUUIDBlock;
-(id)addLoadedPageBlock;
@end

