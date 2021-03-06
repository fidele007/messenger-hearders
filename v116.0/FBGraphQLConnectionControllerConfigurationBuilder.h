/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:59 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBGraphQLConnectionControllerConfigurationBuilder : NSObject {

	NSString* _connectionDescription;
	/*^block*/id _configureServiceBlock;
	/*^block*/id _loadRequestUUIDBlock;
	/*^block*/id _pageExtractionBlock;
	/*^block*/id _addLoadedPageBlock;

}
-(id)withConnectionDescription:(id)arg1 ;
-(id)withConfigureServiceBlock:(/*^block*/id)arg1 ;
-(id)withLoadRequestUUIDBlock:(/*^block*/id)arg1 ;
-(id)withPageExtractionBlock:(/*^block*/id)arg1 ;
-(id)withAddLoadedPageBlock:(/*^block*/id)arg1 ;
-(id)build;
@end

