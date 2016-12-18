/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/RCTBridgeModule.h>
#import <Messenger/RCTURLRequestHandler.h>

@protocol OS_dispatch_queue, RCTImageCache;
@class NSArray, NSOperationQueue, NSObject, NSMutableArray, RCTBridge, NSString;

@interface RCTImageLoader : NSObject <RCTBridgeModule, RCTURLRequestHandler> {

	NSArray* _loaders;
	NSArray* _decoders;
	NSOperationQueue* _imageDecodeQueue;
	NSObject*<OS_dispatch_queue> _URLRequestQueue;
	id<RCTImageCache> _imageCache;
	NSMutableArray* _pendingTasks;
	long long _activeTasks;
	NSMutableArray* _pendingDecodes;
	long long _scheduledDecodes;
	unsigned long long _activeBytes;
	RCTBridge* _bridge;
	unsigned long long _maxConcurrentLoadingTasks;
	unsigned long long _maxConcurrentDecodingTasks;
	unsigned long long _maxConcurrentDecodingBytes;

}

@property (assign,nonatomic) unsigned long long maxConcurrentLoadingTasks;               //@synthesize maxConcurrentLoadingTasks=_maxConcurrentLoadingTasks - In the implementation block
@property (assign,nonatomic) unsigned long long maxConcurrentDecodingTasks;              //@synthesize maxConcurrentDecodingTasks=_maxConcurrentDecodingTasks - In the implementation block
@property (assign,nonatomic) unsigned long long maxConcurrentDecodingBytes;              //@synthesize maxConcurrentDecodingBytes=_maxConcurrentDecodingBytes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge;                                //@synthesize bridge=_bridge - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
+(id)moduleName;
+(void)load;
-(id)sendRequest:(id)arg1 withDelegate:(id)arg2 ;
-(float)handlerPriority;
-(/*^block*/id)loadImageWithURLRequest:(id)arg1 callback:(/*^block*/id)arg2 ;
-(/*^block*/id)loadImageWithURLRequest:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 clipped:(BOOL)arg4 resizeMode:(long long)arg5 progressBlock:(/*^block*/id)arg6 partialLoadBlock:(/*^block*/id)arg7 completionBlock:(/*^block*/id)arg8 ;
-(id)imageURLLoaderForURL:(id)arg1 ;
-(/*^block*/id)_loadURLRequest:(id)arg1 progressBlock:(/*^block*/id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)dequeueTasks;
-(/*^block*/id)decodeImageData:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 clipped:(BOOL)arg4 resizeMode:(long long)arg5 completionBlock:(/*^block*/id)arg6 ;
-(/*^block*/id)_loadImageOrDataWithURLRequest:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 resizeMode:(long long)arg4 progressBlock:(/*^block*/id)arg5 partialLoadBlock:(/*^block*/id)arg6 completionBlock:(/*^block*/id)arg7 ;
-(id)imageDataDecoderForData:(id)arg1 ;
-(/*^block*/id)getImageSizeForURLRequest:(id)arg1 block:(/*^block*/id)arg2 ;
-(unsigned long long)maxConcurrentLoadingTasks;
-(void)setMaxConcurrentLoadingTasks:(unsigned long long)arg1 ;
-(unsigned long long)maxConcurrentDecodingTasks;
-(void)setMaxConcurrentDecodingTasks:(unsigned long long)arg1 ;
-(unsigned long long)maxConcurrentDecodingBytes;
-(void)setMaxConcurrentDecodingBytes:(unsigned long long)arg1 ;
-(void)cancelRequest:(id)arg1 ;
-(id)imageCache;
-(void)setImageCache:(id)arg1 ;
-(BOOL)canHandleRequest:(id)arg1 ;
-(void)setUp;
-(RCTBridge *)bridge;
@end

