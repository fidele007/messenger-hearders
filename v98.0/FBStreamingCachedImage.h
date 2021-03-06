/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:12 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBCachedImage.h>

@class FBProgressiveJPEG;

@interface FBStreamingCachedImage : FBCachedImage {

	BOOL _lastImageFlag;
	unsigned long long _imageFlag;
	FBProgressiveJPEG* _jpegHandler;

}

@property (nonatomic,readonly) unsigned long long imageFlag;                 //@synthesize imageFlag=_imageFlag - In the implementation block
@property (nonatomic,readonly) BOOL lastImageFlag;                           //@synthesize lastImageFlag=_lastImageFlag - In the implementation block
@property (nonatomic,readonly) FBProgressiveJPEG * jpegHandler;              //@synthesize jpegHandler=_jpegHandler - In the implementation block
-(unsigned long long)imageFlag;
-(BOOL)lastImageFlag;
-(FBProgressiveJPEG *)jpegHandler;
-(id)initWithCGImage:(CGImageRef)arg1 imageDecoder:(/*^block*/id)arg2 imageFlag:(unsigned long long)arg3 lastImageFlag:(BOOL)arg4 jpegHandler:(id)arg5 ;
@end

