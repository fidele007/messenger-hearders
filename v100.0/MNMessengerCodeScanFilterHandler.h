/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBCaptureManagerFilterHandlerProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface MNMessengerCodeScanFilterHandler : NSObject <FBCaptureManagerFilterHandlerProtocol> {

	NSObject*<OS_dispatch_queue> videoBufferQueue;
	/*^block*/id _filterBlock;

}

@property (nonatomic,copy) id filterBlock;                                               //@synthesize filterBlock=_filterBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> videoBufferQueue; 
@property (nonatomic,readonly) BOOL modifiesInput; 
-(CMSampleBufferSmartPtr*)applyFiltersToBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(NSObject*<OS_dispatch_queue>)videoBufferQueue;
-(void)setVideoBufferQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)modifiesInput;
-(id)filterBlock;
-(void)setFilterBlock:(id)arg1 ;
@end
