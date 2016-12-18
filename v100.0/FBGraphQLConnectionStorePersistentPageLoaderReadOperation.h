/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBGraphQLConnectionstorePersistentPageLoaderOperation.h>

@protocol FBDiskCacheProtocol, FBGraphQLConnectionStorePersistentPageLoaderOperationDelegate;
@class NSString;

@interface FBGraphQLConnectionStorePersistentPageLoaderReadOperation : NSObject <FBGraphQLConnectionstorePersistentPageLoaderOperation> {

	id<FBDiskCacheProtocol> _diskCache;
	NSString* _diskCacheKey;
	long long _options;
	/*^block*/id _completionHandler;
	id<FBGraphQLConnectionStorePersistentPageLoaderOperationDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_synchronouslyLoadPage;
-(void)_asynchronouslyLoadPage;
-(void)startWithDelegate:(id)arg1 ;
-(id)initWithDiskCache:(id)arg1 diskCacheKey:(id)arg2 options:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

