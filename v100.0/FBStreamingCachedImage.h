/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
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
-(id)initWithCGImage:(CGImageRef)arg1 imageDecoder:(/*^block*/id)arg2 imageFlag:(unsigned long long)arg3 lastImageFlag:(BOOL)arg4 jpegHandler:(id)arg5 ;
-(FBProgressiveJPEG *)jpegHandler;
@end

