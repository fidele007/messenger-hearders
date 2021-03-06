/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:12 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBImageDownload.h>

@interface FBStreamingImageDownload : FBImageDownload {

	unsigned long long _nextFlagToNotify;
	unsigned long long _nextFlagToDecode;
	unsigned long long _desiredImageFlag;
	unsigned long long _imageFlagsToBeNotified;
	/*^block*/id _streamingBlock;

}

@property (nonatomic,readonly) unsigned long long desiredImageFlag;                    //@synthesize desiredImageFlag=_desiredImageFlag - In the implementation block
@property (nonatomic,readonly) unsigned long long imageFlagsToBeNotified;              //@synthesize imageFlagsToBeNotified=_imageFlagsToBeNotified - In the implementation block
@property (nonatomic,copy,readonly) id streamingBlock;                                 //@synthesize streamingBlock=_streamingBlock - In the implementation block
-(unsigned long long)desiredImageFlag;
-(unsigned long long)imageFlagsToBeNotified;
-(id)initWithURL:(id)arg1 scenePath:(id)arg2 priority:(long long)arg3 options:(unsigned long long)arg4 desiredImageFlag:(unsigned long long)arg5 imageFlagsToBeNotified:(unsigned long long)arg6 analyticsTags:(id)arg7 callbackQueue:(id)arg8 streamingBlock:(/*^block*/id)arg9 ;
-(id)finalCachedImageToBeUsedFromCachedImage:(id)arg1 ;
-(void)cleanUpAfterCompletionOrCancelation;
-(BOOL)_shouldNotifyAboutImage:(id)arg1 ;
-(void)_updateNextFlagToNotify:(unsigned long long)arg1 ;
-(BOOL)decodeCachedImageIfNeeded:(id)arg1 ;
-(unsigned long long)_nextImageFlagInImageFlagsToBeNotifiedLargerThan:(unsigned long long)arg1 ;
-(void)completeAndCleanupWithImage:(id)arg1 type:(unsigned long long)arg2 error:(id)arg3 delegate:(id)arg4 ;
-(id)streamingBlock;
@end

