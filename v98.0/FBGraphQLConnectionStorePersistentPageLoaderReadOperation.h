/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:11 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
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

