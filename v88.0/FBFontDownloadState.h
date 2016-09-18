/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:03 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBFontResource;

@interface FBFontDownloadState : NSObject {

	/*^block*/id _completionBlock;
	/*^block*/id _progressBlock;
	FBFontResource* _fontResource;

}

@property (nonatomic,readonly) FBFontResource * fontResource;              //@synthesize fontResource=_fontResource - In the implementation block
-(id)initWithFontResource:(id)arg1 progressBlock:(/*^block*/id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(FBFontResource *)fontResource;
-(void)generateResponseWithURL:(id)arg1 error:(id)arg2 ;
-(void)reportDownloadedBytes:(long long)arg1 bytesExpectedToDownload:(long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

