/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:02 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError;

@interface FBProgressiveJPEGUpdateResult : NSObject {

	NSError* _error;
	unsigned long long _imageFlag;

}

@property (nonatomic,readonly) NSError * error;                           //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) unsigned long long imageFlag;              //@synthesize imageFlag=_imageFlag - In the implementation block
+(id)newWithImageFlag:(unsigned long long)arg1 error:(id)arg2 ;
-(unsigned long long)imageFlag;
-(NSError *)error;
@end

